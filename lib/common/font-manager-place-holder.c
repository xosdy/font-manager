/* font-manager-place-holder.c
 *
 * Copyright (C) 2009-2022 Jerry Casiano
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

#include "font-manager-place-holder.h"

/**
 * SECTION: font-manager-place-holder
 * @short_description: Place holder widget
 * @title: Place Holder
 * @include: font-manager-place-holder.h
 *
 * Widget intended to display a message in an empty area.
 */

struct _FontManagerPlaceHolder
{
    GtkEventBox   parent_instance;

    GtkWidget   *icon;
    GtkWidget   *title;
    GtkWidget   *subtitle;
    GtkWidget   *message;
};

G_DEFINE_TYPE(FontManagerPlaceHolder, font_manager_place_holder, GTK_TYPE_EVENT_BOX)

enum
{
    PROP_RESERVED,
    PROP_ICON_NAME,
    PROP_TITLE,
    PROP_SUBTITLE,
    PROP_MESSAGE,
    N_PROPERTIES
};

static GParamSpec *obj_properties[N_PROPERTIES] = { NULL, };

static void
font_manager_place_holder_get_property (GObject *gobject,
                                        guint property_id,
                                        GValue *value,
                                        GParamSpec *pspec)
{
    g_return_if_fail(gobject != NULL);
    FontManagerPlaceHolder *self = FONT_MANAGER_PLACE_HOLDER(gobject);
    g_autofree gchar *icon_name = NULL;
    switch (property_id) {
        case PROP_ICON_NAME:
            g_object_get(gobject, "icon-name", &icon_name, NULL);
            g_value_set_string(value, icon_name);
            break;
        case PROP_TITLE:
            g_value_set_string(value, gtk_label_get_label(GTK_LABEL(self->title)));
            break;
        case PROP_SUBTITLE:
            g_value_set_string(value, gtk_label_get_label(GTK_LABEL(self->subtitle)));
            break;
        case PROP_MESSAGE:
            g_value_set_string(value, gtk_label_get_label(GTK_LABEL(self->message)));
            break;
        default:
            G_OBJECT_WARN_INVALID_PROPERTY_ID(gobject, property_id, pspec);
    }
    return;
}

static void
font_manager_place_holder_set_property (GObject *gobject,
                                        guint property_id,
                                        const GValue *value,
                                        GParamSpec *pspec)
{
    g_return_if_fail(gobject != NULL);
    FontManagerPlaceHolder *self = FONT_MANAGER_PLACE_HOLDER(gobject);
    gboolean visible = FALSE;
    switch (property_id) {
        case PROP_ICON_NAME:
            gtk_image_set_from_icon_name(GTK_IMAGE(self->icon), g_value_get_string(value), GTK_ICON_SIZE_DIALOG);
            break;
        case PROP_TITLE:
            gtk_label_set_text(GTK_LABEL(self->title), g_value_get_string(value));
            visible = strlen(gtk_label_get_text(GTK_LABEL(self->title))) > 0;
            gtk_widget_set_visible(self->title, visible);
            break;
        case PROP_SUBTITLE:
            gtk_label_set_text(GTK_LABEL(self->subtitle), g_value_get_string(value));
            visible = strlen(gtk_label_get_text(GTK_LABEL(self->subtitle))) > 0;
            gtk_widget_set_visible(self->subtitle, visible);
            break;
        case PROP_MESSAGE:
            gtk_label_set_text(GTK_LABEL(self->message), g_value_get_string(value));
            visible = strlen(gtk_label_get_text(GTK_LABEL(self->message))) > 0;
            gtk_widget_set_visible(self->message, visible);
            break;
        default:
            G_OBJECT_WARN_INVALID_PROPERTY_ID(gobject, property_id, pspec);
    }
    return;
}

static void
font_manager_place_holder_class_init (FontManagerPlaceHolderClass *klass)
{
    GObjectClass *object_class = G_OBJECT_CLASS(klass);

    object_class->get_property = font_manager_place_holder_get_property;
    object_class->set_property = font_manager_place_holder_set_property;

    /**
     * FontManagerPlaceHolder:icon-name:
     *
     * Named icon to display in center of place holder.
     */
    obj_properties[PROP_ICON_NAME] = g_param_spec_string("icon-name",
                                                         NULL,
                                                         "Named icon to display",
                                                         NULL,
                                                         G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE);

    /**
     * FontManagerPlaceHolder:title:
     *
     * Text to display as the title beneath icon.
     */
    obj_properties[PROP_TITLE] = g_param_spec_string("title",
                                                      NULL,
                                                      "Title to display under icon",
                                                      NULL,
                                                      G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE);

    /**
     * FontManagerPlaceHolder:subtitle:
     *
     * Text to display as a subtitle beneath icon.
     */
    obj_properties[PROP_SUBTITLE] = g_param_spec_string("subtitle",
                                                        NULL,
                                                        "Subtitle to display under icon",
                                                        NULL,
                                                        G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE);

    /**
     * FontManagerPlaceHolder:message:
     *
     * Message to display beneath icon.
     */
    obj_properties[PROP_MESSAGE] = g_param_spec_string("message",
                                                      NULL,
                                                      "Text to display under icon",
                                                      NULL,
                                                      G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE);

    g_object_class_install_properties(object_class, N_PROPERTIES, obj_properties);
    return;
}

static void
set_title_attributes (GtkWidget *widget)
{
    PangoAttrList *attrs = pango_attr_list_new();
    pango_attr_list_insert(attrs, pango_attr_weight_new(PANGO_WEIGHT_BOLD));
    pango_attr_list_insert(attrs, pango_attr_scale_new(PANGO_SCALE_XX_LARGE));
    gtk_label_set_attributes(GTK_LABEL(widget), attrs);
    pango_attr_list_unref(attrs);
    return;
}

static void
set_subtitle_attributes (GtkWidget *widget)
{
    PangoAttrList *attrs = pango_attr_list_new();
    pango_attr_list_insert(attrs, pango_attr_scale_new(PANGO_SCALE_LARGE));
    gtk_label_set_attributes(GTK_LABEL(widget), attrs);
    pango_attr_list_unref(attrs);
    return;
}

static void
set_message_attributes (GtkWidget *widget)
{
    PangoAttrList *attrs = pango_attr_list_new();
    pango_attr_list_insert(attrs, pango_attr_scale_new(PANGO_SCALE_X_LARGE));
    gtk_label_set_attributes(GTK_LABEL(widget), attrs);
    pango_attr_list_unref(attrs);
    return;
}

static void
insert_label (GtkBox *box, GtkWidget *widget, gboolean expand, gboolean fill)
{
    gtk_widget_set_opacity(widget, 0.90);
    gtk_widget_set_sensitive(widget, FALSE);
    gtk_widget_set_halign(widget, GTK_ALIGN_CENTER);
    gtk_widget_set_valign(widget, GTK_ALIGN_START);
    gtk_widget_set_margin_bottom(widget, FONT_MANAGER_DEFAULT_MARGIN * 3);
    gtk_label_set_justify(GTK_LABEL(widget), GTK_JUSTIFY_CENTER);
    gtk_label_set_line_wrap(GTK_LABEL(widget), TRUE);
    gtk_box_pack_start(GTK_BOX(box), widget, expand, fill, 0);
    return;
}

static void
font_manager_place_holder_init (FontManagerPlaceHolder *self)
{
    g_return_if_fail(self != NULL);
    GtkStyleContext *ctx = gtk_widget_get_style_context(GTK_WIDGET(self));
    gtk_style_context_add_class(ctx, GTK_STYLE_CLASS_VIEW);
    gtk_widget_set_name(GTK_WIDGET(self), "FontManagerPlaceHoler");
    gtk_widget_set_opacity(GTK_WIDGET(self), 0.75);
    self->icon = gtk_image_new();
    self->title = gtk_label_new(NULL);
    set_title_attributes(self->title);
    self->subtitle = gtk_label_new(NULL);
    set_subtitle_attributes(self->subtitle);
    self->message = gtk_label_new(NULL);
    set_message_attributes(self->message);
    gtk_widget_set_halign(GTK_WIDGET(self->icon), GTK_ALIGN_CENTER);
    gtk_widget_set_valign(GTK_WIDGET(self->icon), GTK_ALIGN_END);
    gtk_widget_set_opacity(self->icon, 0.25);
    gtk_widget_set_sensitive(self->icon, FALSE);
    GtkWidget *bbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, FONT_MANAGER_DEFAULT_MARGIN * 3);
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, FONT_MANAGER_DEFAULT_MARGIN);
    gtk_box_pack_start(GTK_BOX(bbox), self->icon, TRUE, TRUE, 0);
    gtk_box_pack_end(GTK_BOX(bbox), box, TRUE, TRUE, 0);
    insert_label(GTK_BOX(box), self->title, FALSE, FALSE);
    insert_label(GTK_BOX(box), self->subtitle, FALSE, FALSE);
    insert_label(GTK_BOX(box), self->message, TRUE, TRUE);
    gtk_image_set_pixel_size(GTK_IMAGE(self->icon), 64);
    font_manager_widget_set_margin(bbox, FONT_MANAGER_DEFAULT_MARGIN * 4);
    gtk_widget_set_margin_bottom(box, FONT_MANAGER_DEFAULT_MARGIN * 4);
    font_manager_widget_set_expand(self->icon, TRUE);
    font_manager_widget_set_expand(GTK_WIDGET(self), TRUE);
    gtk_container_add(GTK_CONTAINER(self), bbox);
    gtk_widget_show(self->icon);
    gtk_widget_show(box);
    gtk_widget_show(bbox);
    return;
}

/**
 * font_manager_place_holder_new:
 * @title: (nullable):      Title to display in placeholder
 * @subtitle: (nullable):   Subtitle to display in placeholder
 * @message: (nullable):    Message to display in placeholder
 * @icon_name: (nullable):  Named icon to use in placeholder
 *
 * Returns: (transfer full): A newly created #FontManagerPlaceHolder.
 * Free the returned object using #g_object_unref().
 */
GtkWidget *
font_manager_place_holder_new (const gchar *title, const gchar *subtitle,
                               const gchar *message, const gchar *icon_name)
{
    return g_object_new(FONT_MANAGER_TYPE_PLACE_HOLDER, "icon-name", icon_name,
                        "title", title, "subtitle", subtitle, "message", message, NULL);
}
