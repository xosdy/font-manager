/* Unsorted.vala
 *
 * Copyright (C) 2009-2024 Jerry Casiano
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.
 *
 * If not, see <http://www.gnu.org/licenses/gpl-3.0.txt>.
*/

namespace FontManager {

    public class Unsorted : Category {

        public StringSet sorted { get; set; default = new StringSet(); }

        public override int size {
            get {
                return (int) (families.size - sorted.size);
            }
        }

        public Unsorted () {
            base(_("Unsorted"),
                 _("Fonts not present in any collection"),
                 "dialog-question-symbolic",
                 "SELECT DISTINCT family, description FROM Fonts",
                 CategoryIndex.UNSORTED);
        }

        public new async void update () {
            families.clear();
            variations.clear();
            try {
                Database db = DatabaseProxy.get_default_db();
                get_matching_families_and_fonts(db, families, variations, sql);
            } catch (Error e) {
                warning(e.message);
            }
            changed();
            return;
        }

        public override bool matches (Object? item) {
            bool visible = false;
            if (item is Family)
                visible = !(((Family) item).family in sorted);
            else if (item is Font)
                visible = !(((Font) item).family in sorted);
            return visible;
        }

    }

}


