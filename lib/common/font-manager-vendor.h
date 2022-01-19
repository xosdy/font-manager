/* Do not edit directly. See build-aux directory */
#ifndef __FONT_MANAGER_VENDOR_H__
#define __FONT_MANAGER_VENDOR_H__

#include <glib.h>

G_BEGIN_DECLS

#ifndef __GTK_DOC_IGNORE__
#define FONT_MANAGER_MAX_VENDOR_ID_LENGTH 5
#define FONT_MANAGER_MAX_VENDOR_LENGTH 100
#endif

static const struct
{
    const gchar vendor[FONT_MANAGER_MAX_VENDOR_LENGTH];
    const gchar vendor_id[FONT_MANAGER_MAX_VENDOR_LENGTH];
}
/* Order is significant. */
FontManagerNoticeData [] =
{
    /* Notice data sourced from fcfreetype.c - http://www.freetype.org/ */
    {"Adobe", "adobe"},
    {"Adobe", "Adobe"},
    {"Bigelow & Holmes", "b&h"},
    {"Bigelow & Holmes", "Bigelow & Holmes"},
    {"Bitstream", "Bitstream"},
    {"Font21", "hwan"},
    {"Font21", "Hwan"},
    {"Gnat", "culmus"},
    {"HanYang System", "hanyang"},
    {"HanYang System", "HanYang Information & Communication"},
    {"IBM", "IBM"},
    {"ITC", "itc"},
    {"ITC", "ITC"},
    {"ITC", "International Typeface Corporation"},
    {"Larabiefonts", "Larabie"},
    {"Linotype", "linotype"},
    {"Linotype", "Linotype GmbH"},
    {"Linotype", "LINOTYPE-HELL"},
    {"Microsoft", "microsoft"},
    {"Microsoft", "Microsoft Corporation"},
    {"Monotype", "Monotype Imaging"},
    {"Monotype", "Monotype Corporation"},
    {"Monotype", "Monotype Typography"},
    {"Omega", "omega"},
    {"Omega", "Omega"},
    {"Tiro Typeworks", "Tiro Typeworks"},
    {"URW", "URW"},
    {"XFree86", "XFree86"},
    {"Xorg", "xorg"}
};

static const struct
{
    const gchar vendor_id[FONT_MANAGER_MAX_VENDOR_ID_LENGTH];
    const gchar vendor[FONT_MANAGER_MAX_VENDOR_LENGTH];
}
FontManagerVendorData[] =
{

    /* Various Sources */
    {"ACG", "Monotype Imaging"},
    {"B?", "Bigelow & Holmes"},
    {"FJ", "Fujitsu"},
    {"RICO", "Ricoh"},


    /* Courtesy of Microsoft Typography - https://docs.microsoft.com/en-us/typography/vendors/ */
    {"!666", "Agyei Archer"},
    {"!ETF", "!xclamachine Type Foundry"},
    {"!YNE", "Yne"},
    {"$pro", "CheapProFonts"},
    {"100", "AUTHENTIC"},
    {"0264", "Patricia Lillie"},
    {"1206", "yayoyuyue"},
    {"1995", "San Sagittarius"},
    {"1ASC", "Ascender Corporation"},
    {"1BOU", "Boutros International"},
    {"1dot", "I.Font Project"},
    {"1FAN", "One Fan Foundry"},
    {"1KTF", "Kief Type Foundry"},
    {"1UKR", "AndrijType"},
    {"205", "205TF"},
    {"2DLT", "2D Typo"},
    {"2REB", "2Rebels"},
    {"3270", "Ricardo Bánffy"},
    {"39BC", "Finley's Barcode Fonts"},
    {"3ip", "Three Islands Press"},
    {"3tp", "3type"},
    {"4FEB", "4th february"},
    {"50FX", "50Fox Studio"},
    {"5PTS", "Five Points Technology"},
    {"72PT", "72 Puntos"},
    {"8686", "SVG Idea"},
    {"918", "RavenType"},
    {"9999", "Cricut Market"},
    {"A&S", "Art&Sign Studio"},
    {"A70", "AutumnSeventy"},
    {"A2", "A2-Type"},
    {"AAA", "AlefAlefAlef"},
    {"aaff", "AstroAcademia Font Foundry"},
    {"AA", "Alireza Alipour"},
    {"AAT", "AhmetAltunType"},
    {"AATF", "Abstract Animal Type Foundry"},
    {"ABBO", "Arabic Dictionary Lab"},
    {"ABC", "Altek Instruments"},
    {"ABCD", "Dinamo Typefoundry"},
    {"ABCX", "ABC ETC"},
    {"ABEL", "Abeltive"},
    {"ABOU", "Aboutype, Inc."},
    {"ABTS", "alphabeet, Type Studio"},
    {"ABYM", "ABYME"},
    {"AC", "AllCaps"},
    {"ACUT", "Acute Type"},
    {"ACW", "Andrew Christopher West (BabelStone)"},
    {"Ad56", "Devotees of Sri Sri Ravi Shankar Ashram"},
    {"Adam", "Adam Jagosz"},
    {"ADBE", "Adobe"},
    {"ADBO", "Adobe"},
    {"ADG", "Apply Design Group"},
    {"AEF", "Altered Ego Fonts"},
    {"AES", "AE Type"},
    {"AFOU", "a.Foundry"},
    {"AGC", "André G. Costa"},
    {"AGFA", "Monotype Imaging (replaced by MONO)"},
    {"AID", "Artistic Imposter Design"},
    {"aide", "Aiolfi.design"},
    {"AJL", "Alex John Lucas"},
    {"AJPT", "Alan Jay Prescott Typography"},
    {"AKOF", "AKOFAType"},
    {"AKRU", "Akuru Foundry"},
    {"AL", "Alessio Laiso Type"},
    {"ALEF", "Alef Type"},
    {"ALFA", "Alphabets"},
    {"ALFT", "Alifinart Studio"},
    {"ALIF", "Alif Type"},
    {"ALPH", "Alphameric Broadcast Solutions Limited"},
    {"ALPN", "Alpona Portal"},
    {"ALS", "Art. Lebedev Studio"},
    {"alte", "Altemus"},
    {"ALTS", "Altsys / Made with Fontographer"},
    {"amcs", "Amit soni"},
    {"amin", "fontamin"},
    {"AMPR", "Ampersand"},
    {"AMUN", "Alanna Munro Type"},
    {"AMUT", "Kwesi Amuti"},
    {"ANDO", "Osam Ando"},
    {"ANRT", "Atelier National de Recherche Typographique"},
    {"anty", "Anatoletype"},
    {"AOP", "an Art Of Pengwyn"},
    {"APCX", "Another Planet Font Foundry"},
    {"APLY", "Apply Interactive"},
    {"APOS", "Apostrophic Laboratories"},
    {"APPL", "Apple"},
    {"APTF", "Apoorva Fontech"},
    {"ARAB", "ArabicType Ltd"},
    {"ARAV", "Aravis Fonts"},
    {"ARBX", "Arabetics"},
    {"ARCH", "Architext"},
    {"ARFS", "And Repeat"},
    {"ARIN", "Aring Typeface AB"},
    {"ARMA", "Arman Khorramak"},
    {"ARPH", "Arphic Technology Co."},
    {"ARQX", "Archelogix Inc."},
    {"ARRW", "Arrow Type"},
    {"ARS", "EN ARS Ltd."},
    {"ART", "Alex Rosario Type"},
    {"ARTE", "Artegra"},
    {"ArTy", "Archive Type"},
    {"AS", "Alex Slobzheninov"},
    {"ASL", "Abneil Software Ltd fonts"},
    {"ASSA", "astype"},
    {"ASYM", "Applied Symbols"},
    {"At", "Arilla Type Studio"},
    {"ATEC", "Page Technology Marketing, Inc."},
    {"ATF", "American Type Founders Collection"},
    {"ATF1", "Australian Type Foundry"},
    {"ATFM", "Asira Type Foundry"},
    {"ATFS", "Andrew Tyler's fonts"},
    {"ATKN", "aratakana"},
    {"ATSM", "Akshara Type Studio"},
    {"ATYP", "Attype Studio"},
    {"AUH", "Atelier Ursula Heilig SGD"},
    {"AURE", "Aure Font Design"},
    {"AUTO", "Autodidakt"},
    {"AVFF", "Agustín Varela Font Factory"},
    {"AVP", "Aviation Partners"},
    {"AVT", "AvanType Foundry"},
    {"AWSM", "Font Awesome"},
    {"AYRE", "AYRES FONTS"},
    {"AZLS", "Azalea Software, Inc."},
    {"b52", "Borno52 Font Foundry"},
    {"B&H", "Bigelow & Holmes"},
    {"BAPS", "Baps Patil"},
    {"BARS", "CIA (BAR CODES) UK"},
    {"BASE", "Baseline Fonts"},
    {"BAT", "BUREAU DES AFFAIRES TYPOGRAPHIQUES"},
    {"BB", "Ben Busby"},
    {"BBFF", "Bangla Borno Font Foundry."},
    {"BBSL", "BrainBox Solutions GmbH"},
    {"BBTF", "buero bauer"},
    {"BBTY", "Bruno Bernard Typographie"},
    {"BCAI", "Boharat Cairo"},
    {"BCHF", "Blake Hodgetts Fonts"},
    {"BCHN", "Studio Buchanan"},
    {"BCP", "Expert Labels Ltd."},
    {"BD71", "Bangladesh1971"},
    {"BDZ", "Bonez Designz"},
    {"BEAR", "Topography Typography"},
    {"BEN", "Ben Hodosi"},
    {"BERT", "Berthold"},
    {"BF", "BrassFonts"},
    {"bftr", "Bleed Design Studio"},
    {"BGDN", "Ryan Bugden"},
    {"bgtl", "bigital"},
    {"BHRT", "Boharat Cairo"},
    {"BIJU", "Bijou Type"},
    {"BIRD", "Magpie Paper Works"},
    {"BITM", "Bitmap Software"},
    {"BITS", "Bitstream"},
    {"bizf", "Bizfonts.com"},
    {"BL", "Binnenland"},
    {"BLAB", "BaseLab"},
    {"BLAH", "Mister Bla's Fontworx"},
    {"BLCK", "Black Foundry"},
    {"BLF", "Bangla Lipikar Font Foundry"},
    {"BLFF", "Bongolipi Font Foundry"},
    {"BLI", "Blissym Language Institute"},
    {"BLIF", "Bangla Lipi Font Foundry"},
    {"BLK", "Blackletra Type Foundry"},
    {"BLOM", "Bloom Type"},
    {"BLST", "Blast Foundry"},
    {"BLTS", "Blancoletters"},
    {"BLUE", "Blue Shell"},
    {"BLV", "Bladvulling"},
    {"BLZT", "Blaze Type"},
    {"BMD", "Brittney Murphy Design"},
    {"BNDR", "Ori Ben-Dor"},
    {"BNFF", "BengalFonts"},
    {"BNT", "Brand New Type"},
    {"BOGS", "Bogstav"},
    {"BOLD", "Bold Monday"},
    {"BOMF", "Beach-o-matic"},
    {"BORW", "em2 Solutions"},
    {"BOYB", "BoyBeaver Fonts"},
    {"BRBT", "Bureau Brut"},
    {"BRDV", "BoardVantage, Inc."},
    {"brdy", "Brody Fonts"},
    {"BREM", "Mark Bremmer"},
    {"BRET", "Bretagne"},
    {"BROS", "Michael Brosnan"},
    {"BRTC", "ITSCO - Bar Code Fonts"},
    {"BRTE", "Brenners Template"},
    {"BS", "Barcodesoft"},
    {"BST", "Bolorsoft LLC"},
    {"BSTD", "Bastard Type Inc"},
    {"BSTF", "British Standard Type"},
    {"BSYV", "Ben Syverson"},
    {"BTFF", "Bangla Type Font Foundry"},
    {"BUBU", "BUBULogix"},
    {"BVH", "BVH Type Foundry"},
    {"BWFW", "B/W Fontworks"},
    {"BwT", "Branding with Type"},
    {"C&B", "Coppers & Brasses"},
    {"C&C", "Carter & Cone"},
    {"C&G", "C&G Inc."},
    {"C21", "Club 21"},
    {"CAFE", "Cafe24 Corp."},
    {"CAK", "pluginfonts.com"},
    {"CAM", "Camelot Typefaces"},
    {"camp", "Campotype"},
    {"CANA", "Canada Type"},
    {"CANO", "Canon"},
    {"CASL", "H.W. Caslon & Company Ltd."},
    {"CATG", "CAT-Fonts Germany"},
    {"CAVE", "Fonderia Cavedoni"},
    {"CB", "Christian Büning"},
    {"CBDO", "Borges Lettering & Design"},
    {"CDAC", "Centre for Development of Advanced Computing"},
    {"cdd", "Crazy Diamond Design"},
    {"CDFP", "VT2000 Technical Services"},
    {"CELB", "Celebrity Fontz"},
    {"CF", "Colophon Foundry"},
    {"CFA", "Computer Fonts Australia"},
    {"CFAB", "Creative Fabrica"},
    {"CFF", "Characters Font Foundry"},
    {"CHRY", "Cherry Fonts"},
    {"CINE", "Cinetype"},
    {"CJCJ", "Creative Juncture"},
    {"CJT", "CJ Type"},
    {"CKTP", "CakeType"},
    {"CLM", "Culmus Project"},
    {"CLP", "Gutenberg Labo"},
    {"CLT", "Collletttivo"},
    {"CMJK", "Slanted Hall"},
    {"CNTY", "CNTYPE"},
    {"COFO", "Contrast Foundry"},
    {"COMI", "Comicraft"},
    {"COMM", "Commercial Type"},
    {"CONR", "Connare.com"},
    {"COOL", "Cool Fonts"},
    {"CORD", "corduroy"},
    {"corm", "Cormullion Foundry"},
    {"COTF", "CoType Foundry"},
    {"COTY", "CocijoType"},
    {"CP", "Constructive Projects Ltd"},
    {"CR8", "CR8 Software Solutions"},
    {"CRRT", "Carrot Type"},
    {"CT", "CastleType"},
    {"CTDL", "China Type Designs Ltd."},
    {"CTL", "Chaitanya Type Library"},
    {"CTYP", "Countertype"},
    {"cwwf", "Computers World Wide/AC Capital Funding"},
    {"CYPE", "Club Type"},
    {"CYRE", "Cyreal"},
    {"CYTY", "Cybertype"},
    {"CZOO", "Creative ZOO"},
    {"D&ST", "Dots&Stripes Type"},
    {"DADA", "Dada Studio"},
    {"DAIN", "DainType"},
    {"DAMA", "Dalton Maag Limited"},
    {"DARK", "Out Of The Dark"},
    {"DB", "Daniel Bruce"},
    {"DBFF", "DesignBase"},
    {"DD", "Devon DeLapp"},
    {"DDT", "DosDiez Type"},
    {"Deco", "DecoType (replaced by DT)"},
    {"DELV", "Delve Fonts"},
    {"DETF", "Detective Fonts / Font Detective LLC"},
    {"dezc", "Dezcom"},
    {"DF", "Dyslexic Font"},
    {"DFS", "Datascan Font Service Ltd"},
    {"DG", "Daniel Grumer"},
    {"DGL", "Digital Graphic Labs foundry"},
    {"DHRM", "Dharma Type"},
    {"DICO", "Dicotype"},
    {"DIFO", "Digital Foundry"},
    {"DIMK", "Dimka Fonts"},
    {"djr", "DJR"},
    {"DKMS", "Dan Kreider Music"},
    {"DKSP", "Duck Soup Design"},
    {"DNF", "Deranged Neko Foundry"},
    {"DnGr", "DevnGraphics"},
    {"DOCS", "Documents Inc."},
    {"DOM", "Dukom Design"},
    {"DP", "Displaay"},
    {"DR", "Dmitry Rastvortsev"},
    {"DRFN", "DR Fonts"},
    {"DS", "Dainippon Screen Mfg. Co., Inc."},
    {"dsbn", "Design Bundles"},
    {"DSBV", "Datascan bv"},
    {"DSCI", "Design Science Inc."},
    {"DSGN", "DizajnDesign"},
    {"DSKY", "Jacek Dziubinski"},
    {"DSSR", "Dresser Johnson"},
    {"DSST", "Dubina Nikolay"},
    {"DST", "DSType"},
    {"DSTE", "Dieste"},
    {"DT", "DecoType"},
    {"DTC", "Digital Typeface Corp."},
    {"DTF", "Dunwich Type Founders"},
    {"DTIL", "Detail Type Foundry"},
    {"DTL", "Dutch Type Library"},
    {"DTPS", "DTP-Software"},
    {"dtpT", "dtpTypes Limited"},
    {"DTZM", "Dotzeem"},
    {"DUXB", "Duxbury Systems, Inc."},
    {"DXTF", "DXTypefoundry"},
    {"DYNA", "DynaComware"},
    {"EAFN", "EA FONTS"},
    {"ECAL", "ECAL Typefaces"},
    {"EDBI", "edilbiStudio"},
    {"EDGE", "Rivers Edge Corp."},
    {"EF", "Elsner+Flake"},
    {"EFF", "Electronic Font Foundry"},
    {"EFI", "Elfring Fonts Inc."},
    {"EFNT", "E Fonts L.L.C."},
    {"EFWS", "eFilm World"},
    {"EINW", "David Einwaller"},
    {"EKIO", "Ekioh"},
    {"EKTF", "EK TYPE"},
    {"ELEO", "Enliteleo"},
    {"ELLR", "Eller Type"},
    {"ELSE", "Elseware"},
    {"EMGR", "Emigre"},
    {"EMPH", "Emphase"},
    {"EPSN", "Epson"},
    {"ERKO", "Erkin Karamemet"},
    {"ESIG", "E-Signature"},
    {"ETCO", "Etcetera Type Company"},
    {"ESTF", "Extraset Typefoundry"},
    {"ET", "Esintype"},
    {"ETDF", "E-Type Design"},
    {"ETIO", "Ethiopian Font Foundry"},
    {"EVER", "Evertype"},
    {"F5", "Foundry5"},
    {"FA", "FontArte Type Foundry"},
    {"FA37", "F37 Foundry"},
    {"FAFO", "FamiraFonts"},
    {"FAM", "Family Type"},
    {"FAT", "Fatype"},
    {"FAUX", "FauxFoundry"},
    {"FBI", "The Font Bureau, Inc."},
    {"FBRO", "FaizType."},
    {"FCAB", "The Font Cabinet"},
    {"FCAN", "fontage canada"},
    {"FCTP", "Facetype"},
    {"FDI", "FDI fonts.info"},
    {"FeCo", "FerCozzi."},
    {"FEED", "Studio Feed Inc."},
    {"FeoN", "Feòrag NìcBhrìde"},
    {"FeTy", "Feliciano Type"},
    {"FFFF", "Fabiola Mejía"},
    {"FGOD", "FontGod"},
    {"FHF", "Fanny Hamelin"},
    {"FILI", "Louise Fili Ltd"},
    {"FIRA", "Firasoft Fonts"},
    {"FIRE", "youbringfire"},
    {"FJ", "frncojonas"},
    {"FJR", "F.J.R. German Typeface"},
    {"FJTY", "Frank Jonen - Illustration & Typography"},
    {"FK", "Florian Karsten Typefaces"},
    {"FKAI", "Font-Kai"},
    {"FM", "FontMo"},
    {"FMFO", "Fontmill Foundry"},
    {"FMLJ", "Familjen"},
    {"FMST", "Formist"},
    {"FNBD", "FontBD Type Foundry"},
    {"FNKI", "Font Kitchen"},
    {"FNSA", "Fonseca Fonts"},
    {"FNTF", "Fontfoundry"},
    {"FNTP", "FansyType"},
    {"FoFa", "FontFabrik"},
    {"fofm", "Font FM"},
    {"FOGC", "Fog City Type"},
    {"FoHa", "The Fonthausen Font Foundry"},
    {"FONT", "Font Source"},
    {"FONZ", "Font Zone 108"},
    {"FOR", "Formagari"},
    {"FORM", "Formation Type Foundry"},
    {"FOSH", "Forgotten Shapes"},
    {"FOSP", "Font Spectrum"},
    {"FOST", "Foster Type"},
    {"FOUN", "The Foundry"},
    {"FP", "The Fontpad"},
    {"FPPL", "FontPeople"},
    {"frag", "fragTYPE"},
    {"FRJN", "Frere-Jones Type"},
    {"FRML", "formlos"},
    {"FRNK", "Frank Fonts"},
    {"FRNZ", "Franziska Weitgruber"},
    {"FRTH", "Forthcome"},
    {"FS", "Formula Solutions"},
    {"FSD", "Fabrizio Schiavi Design"},
    {"FSE", "Font Source Europe"},
    {"FSFS", "Fontastica"},
    {"FSI", "FontShop International"},
    {"FSL", "FontSurfer Ltd"},
    {"FSLF", "Fontself"},
    {"fsmi", "Fontsmith"},
    {"FSTR", "Fontstore Pte Ltd"},
    {"FT", "Formula Type"},
    {"FTDS", "FONTDASU"},
    {"FTF", "Fontef"},
    {"FTFT", "FontFont"},
    {"FTGD", "Font Garden"},
    {"FTH", "For the Hearts"},
    {"FTN", "Fountain"},
    {"FTPT", "Fontpartners"},
    {"FUNA", "Mt. Funa Design Office"},
    {"FVL", "Font Viet Linh"},
    {"FWD", "Fontwright Design"},
    {"FWKS", "Fontworks"},
    {"FWRE", "Fontware Limited"},
    {"FXTL", "Foxtail Collectif"},
    {"FXTP", "FoxType Co"},
    {"FY", "Fontyou"},
    {"GAF", "Glifo Art Fonts Inc."},
    {"GAKU", "Gakumon"},
    {"GALA", "Galápagos Design Group, Inc."},
    {"GALW", "Galway Cultural Development and Activity Compan…"},
    {"GALO", "Gerald Gallo"},
    {"GARI", "Gary Ritchie"},
    {"GATF", "Greater Albion Typefounders"},
    {"Gco", "Glyph Co"},
    {"GD", "GD Fonts"},
    {"Geez", "Beteseb Graphic Design"},
    {"GenT", "General Titles"},
    {"GF", "GarageFonts"},
    {"GFNT", "Graffont"},
    {"GFT", "Geez Font Types"},
    {"GGWA", "Grenzgänger"},
    {"GIA", "Georgian Internet Avenue"},
    {"GIFT", "Souvenir Typefaces"},
    {"GLCF", "GLC foundry"},
    {"GLYF", "Glyph Systems"},
    {"GNRL", "General Type Studio"},
    {"GNU", "Free Software Foundation, Inc."},
    {"GOAT", "Dingbat Dungeon"},
    {"GOGO", "Fonts-A-Go-Go"},
    {"GOHE", "GoHebrew, division of GoME2.com Inc."},
    {"GOOG", "Google"},
    {"Goss", "Goss Typography"},
    {"GPI", "Gamma Productions, Inc."},
    {"GRAF", "Grafikarna d.o.o."},
    {"GRCR", "Graphicore"},
    {"GREY", "Greyletter"},
    {"GRIL", "Grilled cheese"},
    {"GRIM", "Legacy publishing"},
    {"GRPS", "Gurup Stüdyo"},
    {"grro", "grafikk RØren"},
    {"GS", "Grayscale Limited"},
    {"GT", "Graphity!"},
    {"GTF", "Grilli Type"},
    {"GTL", "GTL Type Label"},
    {"GTYP", "G-Type"},
    {"H", "Hurme Design"},
    {"H&FJ", "Hoefler & Frere-Jones"},
    {"HA", "HoboArt"},
    {"HACO", "HACOLLECTIVE"},
    {"HAD", "Hoffmann Angelic Design"},
    {"Hafo", "Hafonton"},
    {"HAIL", "Hail Design"},
    {"HAMZ", "Hamzeh Naghdi"},
    {"hano", "Hanoded Fonts"},
    {"HanS", "HanStyle"},
    {"HAUS", "TypeHaus"},
    {"HBT", "Harbor Type"},
    {"HDCO", "Hanken Design Co."},
    {"HEB", "Sivan Toledo"},
    {"HEX", "HEX Projects"},
    {"HEYP", "HEY PORTER!"},
    {"HFJ", "Hoefler & Frere-Jones (replaced by H&FJ)"},
    {"HIH", "HiH Retrofonts"},
    {"HILL", "Hill Systems"},
    {"HJZ", "Hans J. Zinken"},
    {"HKSY", "HAKUSYUFONTS"},
    {"HL", "High-Logic"},
    {"HM", "Haiku Monkey"},
    {"HOH", "HOHOHtype"},
    {"HOOL", "Hooloovoo Studio"},
    {"HoP", "House of Pretty"},
    {"HOUS", "House Industries"},
    {"HoX", "House of X"},
    {"HP", "Hewlett-Packard"},
    {"HS", "HermesSOFT Company"},
    {"HSH", "Hassan Shebli"},
    {"HT", "Huerta Tipográfica"},
    {"HTF", "The Hoefler Type Foundry, Inc."},
    {"HU", "Hungarumlaut"},
    {"HVD", "HVD Fonts GmbH"},
    {"HXTP", "Hexatype"},
    {"HY", "HanYang Information & Communication"},
    {"HYPE", "HyperType"},
    {"HYPN", "Heypentype"},
    {"HZ", "Hubert Zasępa"},
    {"IAMT", "IamTiago"},
    {"IBM", "IBM"},
    {"IC", "Ian J. Cox"},
    {"IDAU", "IDAutomation.com, Inc."},
    {"IDEA", "Glenn Campbell t/a Idea Studio"},
    {"IDEE", "IDEE TYPOGRAFICA"},
    {"IDF", "International Digital Fonts"},
    {"IDKB", "Kostas Bartsokas"},
    {"IDMS", "Incstone Design by Megami Studios"},
    {"Idt.", "Identitype"},
    {"IFF", "Indian Font Factory"},
    {"IINF", "iInformatica Srls"},
    {"IKMJ", "Ikimoji"},
    {"IKOF", "IKOffice GmbH"},
    {"ILP", "Indigenous Languages Project"},
    {"IMPR", "Impress"},
    {"INDG", "Indigo+Indigo"},
    {"INGA", "Inga Type"},
    {"INGT", "Ingrimayne Type"},
    {"INNO", "INNO.LLC"},
    {"INRA", "INRAY Inc."},
    {"INTF", "Interfont"},
    {"INTR", "Interstitial Entertainment"},
    {"INVC", "Invoice Central"},
    {"INVD", "TYPE INVADERS"},
    {"INVT", "Invisible Type"},
    {"ISE", "ISE-Aditi Info. Pvt . Ltd."},
    {"it*", "indestructible type*"},
    {"ITC", "ITC"},
    {"ITF", "Red Rooster Collection (ITF, Inc.)"},
    {"ITFO", "Indian Type Foundry"},
    {"ITSM", "Simon Stratford"},
    {"IvyF", "The Ivy Foundry"},
    {"IWA", "Iwata Corporation"},
    {"J23", "June 23"},
    {"JABM", "JAB'M Foundry"},
    {"JAF", "Just Another Foundry"},
    {"JAKE", "Jake Tilson Studio"},
    {"JAM", "JAM Type"},
    {"JANS", "Jan Šindler"},
    {"JB", "JetBrains"},
    {"JBLT", "JEAN-BAPTISTE LEVÉE TYPOGRAPHY"},
    {"JCT", "Jamie Clarke Type"},
    {"JDB", "Jeff Bensch"},
    {"jeff", "jeff-levine"},
    {"JENS", "Jens Kutilek"},
    {"JF", "Jan Fromm"},
    {"jftw", "justfont"},
    {"JHA", "Jan Henrik Arnold"},
    {"JHF", "JH Fonts"},
    {"JLIF", "jli Foundry – Julie Soudanne"},
    {"JMN", "Jeff Napadow"},
    {"JOON", "JoonFont"},
    {"JP", "Jamra Patel"},
    {"JPTT", "Jeremy Tankard Typography Ltd"},
    {"JRW", "Richard Wordingham"},
    {"JSTN", "Justin Penner"},
    {"JUST", "Just in Type"},
    {"JVRT", "Just van Rossum Type"},
    {"JWTM", "Type Matters"},
    {"JY", "JIYUKOBO Ltd."},
    {"K", "Kvant Type Foundry"},
    {"ka", "kloeg architecture"},
    {"KAME", "Kame Design"},
    {"KAPT", "Kaptype"},
    {"KATF", "Kingsley/ATF"},
    {"KBNT", "Kombinat-Typefounders"},
    {"KD", "Kassymkulov Design"},
    {"KDW", "Kinuta Font Factory"},
    {"KERN", "Machine Kerning"},
    {"KF", "Karakta Fonthome"},
    {"KH", "Kristy Hatswell"},
    {"KHTB", "Monkey Arts Ltd."},
    {"KILO", "Kilotype"},
    {"KIRK", "Typekirk"},
    {"KK95", "Kuirnovi Kether"},
    {"KLIM", "Klim Typographic Design"},
    {"KLTF", "Karsten Luecke"},
    {"KMRS", "Mony Sath & Chhit Wornnarith - KhemaraSoft"},
    {"KNST", "Konst.ru"},
    {"KNTR", "Kontour"},
    {"KNWT", "Karl Nawrot"},
    {"KOP", "Leo Koppelkamm"},
    {"KORK", "Khork OÜ"},
    {"KOST", "Kostic Type Foundry"},
    {"KOVL", "Koval Type Foundry"},
    {"KP", "Kontrapunkt"},
    {"KrKo", "Kreative Software"},
    {"KRND", "Karandash Type & Graphics Foundry"},
    {"KTF", "Kustomtype"},
    {"KTKM", "KTKM"},
    {"KTRF", "Kazan Traditional Font"},
    {"KUBA", "Kuba Tatarkiewicz"},
    {"KUSH", "KushJain"},
    {"KWKK", "キウイ皮ごと齧る"},
    {"L2M3", "L2M3 Kommunikationsdesign GmbH"},
    {"L52", "Lipika52 Type Foundry"},
    {"LA", "Large"},
    {"LaG", "Matt LaGrandeur"},
    {"laic", "Laïc: Type Foundry"},
    {"LAIT", "la laiterie"},
    {"LAND", "Typeland"},
    {"LANS", "Lanston Type Company"},
    {"LARA", "Larabiefonts"},
    {"LArt", "Limelight Artistry"},
    {"LAUD", "Carolina Laudon"},
    {"LAYT", "LAYOUT SARL"},
    {"LBV", "La Bolde Vita"},
    {"LCMT", "Locomotype"},
    {"LDTP", "Leedotype"},
    {"LEAF", "Interleaf, Inc."},
    {"LECH", "Antonio Lechuga"},
    {"Lee", "Lee Mounsey"},
    {"LEKS", "Leksen Design LLC"},
    {"LETR", "Letraset"},
    {"Leah", "Leah Lackey"},
    {"Lev", "Lev Rastvortsev"},
    {"lewd", "Lettering World LLC"},
    {"LFS", "Letters from Sweden"},
    {"LGFF", "LIPIGHOR FONT FOUNDRY"},
    {"LGX", "Logix Research Institute, Inc."},
    {"LHF", "Letterhead Fonts"},
    {"LIAM", "Liam Spradlin"},
    {"LIND", "Lindenberg Software LLC"},
    {"LING", "Linguist's Software"},
    {"LINK", "Linkpen Handwriting Fonts"},
    {"LINO", "Linotype GmbH"},
    {"LIVE", "Livedesign"},
    {"LJ", "Letterjuice"},
    {"LLDL", "La Lettre de Luxe"},
    {"LLGW", "Laura Worthington Design"},
    {"LLP", "Léna Le Pommelet"},
    {"LNGU", "LangusteFonts"},
    {"LNTO", "Lineto"},
    {"LOFF", "Logan Font Foundry"},
    {"Log9", "Log9 Foundry"},
    {"LOMT", "The League of Moveable Type"},
    {"lool", "lo-ol Type"},
    {"LORO", "LoRo Productions"},
    {"LOU", "Lou Type Foundry"},
    {"LOVE", "LoveFrom"},
    {"LP", "LetterPerfect Fonts"},
    {"LS", "lettersoup"},
    {"LT", "Le Typophage"},
    {"LTF", "Liberty Type Foundry"},
    {"LTFD", "Linnea Type"},
    {"Ltrm", "Lettermin type and design"},
    {"LTRX", "Lighttracks"},
    {"LTTR", "LettError"},
    {"LuAn", "Patrice Provost"},
    {"LuRa", "Lucid Rabbit Productions"},
    {"LUD", "Ludlow"},
    {"LuFo", "LucasFonts"},
    {"LUSH", "Lush Type"},
    {"LUV", "iLUVfonts"},
    {"M", "MARSNEV"},
    {"M+F", "Measure + Fit"},
    {"MACR", "Macromedia / Made with Fontographer"},
    {"MADE", "Marmite Defontes"},
    {"MADT", "MADType"},
    {"MagD", "Magus Digital"},
    {"MANC", "Manchester Type"},
    {"MANS", "Mans Greback AB"},
    {"MAPS", "Tom Mouat's Map Symbol Fonts"},
    {"MARK", "Mark Frömberg"},
    {"MATE", "TypeMates"},
    {"MATS", "Match Fonts"},
    {"MAW", "Matthew Willsone"},
    {"MAXI", "MaxiType"},
    {"MAXN", "MaxnorType"},
    {"MBF", "Moonbandit font foundry"},
    {"MC", "Cerajewski Computer Consulting"},
    {"MCHL", "Michal Sahar"},
    {"MCKL", "MCKL"},
    {"MCOW", "Mountaincow"},
    {"MCTF", "Monoco Type Foundry"},
    {"MD", "Mass-Driver"},
    {"MDIV", "Dhivehi Type Foundry"},
    {"MDSN", "Moraitis Design"},
    {"MEAP", "MetaAppz"},
    {"MEEM", "MEEM TYPE"},
    {"MEH", "Steve Mehallo"},
    {"MEIR", "Meir Sadan"},
    {"MESA", "FontMesa,"},
    {"METZ", "Nathan Metzler"},
    {"MF", "Magic Fonts"},
    {"MFCF", "Make Fun Creating Fonts"},
    {"MFNT", "Masterfont"},
    {"MG", "Milieu Grotesque"},
    {"MGD", "Matt Grey Design"},
    {"MH", "Misti’s Fonts"},
    {"MHED", "McGraw-Hill Education"},
    {"MHMD", "Mohammad Elikaei"},
    {"MHTY", "Minjoo Ham"},
    {"MILL", "Millan"},
    {"MINT", "Mint Type"},
    {"MISS", "Missy Meyer"},
    {"MJ", "Majus Corporation"},
    {"MJR", "Majur Inc."},
    {"MJWK", "もじワク研究"},
    {"MKSD", "Maniackers Design"},
    {"MLAG", "Michael LaGattuta"},
    {"MLBU", "Malibu Dream Designs, LLC"},
    {"MLGC", "Micrologic Software"},
    {"mlss", "Mark Simonson Studio LLC"},
    {"MLTH", "Monolith"},
    {"MMFT", "Michel M."},
    {"MMIK", "Monomonnik"},
    {"MNCK", "Mine Creek"},
    {"MNIC", "manic type"},
    {"mnik", "Mooniak"},
    {"MNJU", "Manjunatha Bengaluru"},
    {"MNKR", "Monokrom Skriftforlag AS"},
    {"MNLF", "Manual Foundry"},
    {"MODI", "Modular Infotech Private Limited."},
    {"MOGT", "MOGTAHID"},
    {"MOHT", "Al Mohtaraf Assaudi Ltd"},
    {"MOJI", "Mojijuku"},
    {"MOLG", "MoolongType"},
    {"MOMI", "Momentum 18"},
    {"MONI", "monitor"},
    {"MONB", "Monib"},
    {"MONE", "Meta One Limited"},
    {"MONO", "Monotype Imaging"},
    {"MOON", "Moonlight Type and Technolog"},
    {"MORF", "morefont"},
    {"MORN", "Morning Type"},
    {"MOSH", "Moshik Nadav Typography"},
    {"MOTA", "Mota Italic"},
    {"MPTG", "Typogama"},
    {"MR", "Michael Rafailyk"},
    {"MRF", "Mac Rhino Fonts"},
    {"MRSL", "Mark Russell"},
    {"MRSW", "Morisawa & Company, Ltd."},
    {"MRV", "Morovia Corporation"},
    {"MS", "Microsoft Corp."},
    {"MSCH", "Guitar-Injection"},
    {"MSCR", "Majus Corporation"},
    {"MSE", "MSE-iT"},
    {"MSTK", "Alex Serada"},
    {"MT", "Monotype Imaging (replaced by MONO)"},
    {"MTDS", "Multitudes"},
    {"MTF", "Miss Tiina Fonts"},
    {"MTFO", "Music Type Foundry"},
    {"MTNT", "Mutant Standard"},
    {"MTY", "Motoya Co. ,LTD."},
    {"MULT", "mulat"},
    {"MUSA", "Musashi System"},
    {"MUTF", "Murasu Systems Sdn. Bhd"},
    {"MVB", "MVB Fonts"},
    {"MVTP", "Mauve Type"},
    {"MVty", "MV Typo"},
    {"MW", "Michael Want"},
    {"MY", "My Type"},
    {"MYFO", "MyFonts.com"},
    {"MYNT", "Arif Rahman"},
    {"N&G", "Nikish"},
    {"nan", "nan"},
    {"NASK", "Naske Studio"},
    {"NASR", "Nasir Udin"},
    {"NAUM", "Naumtype"},
    {"NB", "No Bodoni Typography"},
    {"NBR", "Noir Blanc Rouge"},
    {"NBTF", "Norberg Type Foundry"},
    {"ncnd", "&cond"},
    {"NDCT", "Neufville Digital Corporatype"},
    {"NDEF", "Notdef Type"},
    {"NDTC", "Neufville Digital"},
    {"NEAT", "Neatnik"},
    {"NEC", "NEC Corporation"},
    {"NEEC", "Netvarec"},
    {"NERK", "Nermin Kahrimanovic"},
    {"NEUE", "Neue Foundry"},
    {"NEW", "Newlyn"},
    {"NFSL", "NFSL2001"},
    {"NGMK", "Kousuke Nagai"},
    {"NICE", "nice to type"},
    {"NICK", "Nick's Fonts"},
    {"NICO", "NW digital type foundry"},
    {"NIKO", "Niko uno"},
    {"NIS", "NIS Corporation"},
    {"nkan", "Nontynet"},
    {"NM", "NM type"},
    {"NMRK", "Nymark Type"},
    {"NN", "NN Type Foundry"},
    {"NONO", "Nouvelle Noire Type Foundry"},
    {"NOOT", "Nootype"},
    {"NOPN", "Noponies"},
    {"NorB", "NorFonts.ma"},
    {"NORF", "Norfok Incredible Font Design"},
    {"NORT", "Nort"},
    {"NOS", "NOS"},
    {"NOVA", "NOVATYPE"},
    {"NP", "Nipponia"},
    {"NPD", "Nick Pitscheider"},
    {"NRON", "neurontype"},
    {"NVTF", "Nova Type Foundry"},
    {"NWGH", "newglyph"},
    {"NYCM", "NYC Music Services"},
    {"NYPE", "Naipe Foundry"},
    {"ODSR", "Oddsorts"},
    {"OFTY", "Office for Typography"},
    {"OHG", "Our House Graphics Inc."},
    {"OHNO", "OH no Type Company"},
    {"OKAY", "Okay Type"},
    {"OMAR", "omar-type foundry"},
    {"OMNI", "Omnitype"},
    {"OMNY", "OMNY TYPE"},
    {"Once", "Michael T Neff"},
    {"ONES", "Ones Technology"},
    {"OPTM", "Optimo"},
    {"OPTO", "Opto"},
    {"OPR", "Office of Personal Responsibility"},
    {"OR", "Or Type"},
    {"ORBI", "Orbit Enterprises, Inc."},
    {"ORK1", "Ork1"},
    {"ORTY", "Original Type"},
    {"OSFC", "Out Of Step Font Company"},
    {"OST", "Orange Slice Type"},
    {"OTYP", "O-Type"},
    {"OURT", "Ourtype"},
    {"P22", "P22 Inc."},
    {"PAAT", "Paavola Type"},
    {"PARA", "ParaType Inc."},
    {"pbd0", "Peter Bain"},
    {"PBL", "Publié"},
    {"PBNG", "Playbeing"},
    {"PCJ", "Minhocossauro Tipografia"},
    {"PDWX", "Parsons Design Workx"},
    {"PEAC", "PeachCreme.com"},
    {"PECI", "Pecita"},
    {"PETR", "Daria Petrova"},
    {"PF", "Phil's Fonts, Inc."},
    {"PFRM", "Punchform"},
    {"PHO", "phospho type foundry"},
    {"PHTM", "Phantom Foundry"},
    {"PINT", "PintassilgoPrints"},
    {"PIXL", "Pixilate"},
    {"PIZZ", "pizzadude.dk"},
    {"PKDD", "Philip Kelly Digital Design"},
    {"PLAT", "PLATINUM technology"},
    {"Plau", "Plau"},
    {"PLAY", "Playtype"},
    {"POEM", "Poem"},
    {"PPPR", "Pepper Type"},
    {"PRFS", "Production First Software"},
    {"PRGR", "Paragraph"},
    {"PRLK", "Emre Parlak"},
    {"PRNM", "Pronama"},
    {"PROD", "Production Type"},
    {"PROT", "PROTOTYPO"},
    {"Prox", "Proxima Software"},
    {"PRTF", "Process Type Foundry"},
    {"PRTP", "Protype Foundry"},
    {"PSG", "Page Studio Graphics"},
    {"PSIS", "PhotoShopIsland.com"},
    {"PSTP", "Positype"},
    {"pstu", "Pseudonym Type Studio"},
    {"PSY", "PSY/OPS"},
    {"PSYM", "Psymon"},
    {"PT", "Playtype"},
    {"PTF", "Porchez Typofonderie"},
    {"PTMI", "Page Technology Marketing, Inc."},
    {"PTYP", "PreussType"},
    {"PYRS", "PYRS Fontlab Ltd. / Made with FontLab"},
    {"PYTE", "The Pyte Foundry"},
    {"QMSI", "QMS/Imagen"},
    {"QRAT", "Quadrat Communications"},
    {"QTYP", "Qtypography"},
    {"QUE", "Alerque"},
    {"R777", "Sanslit"},
    {"RAIN", "Rainbird"},
    {"RARE", "Rare Bird Font Foundry"},
    {"RARI", "RAR Illustrations"},
    {"RDGR", "Rüdiger"},
    {"READ", "ReadyType"},
    {"REAL", "Underware"},
    {"RES", "Resultat"},
    {"REZ", "Reztype"},
    {"RICK", "Rickner Type"},
    {"RIXF", "FONTRIX Inc."},
    {"RJPS", "Reall Graphics"},
    {"RJST", "Rob Jelinski Studios, llc."},
    {"RKFN", "R K Fonts"},
    {"RKRD", "REKORD"},
    {"RL", "Ruben Holthuijsen"},
    {"RLTF", "Rebeletter Studios"},
    {"RMU", "RMU TypeDesign"},
    {"RNDY", "randytype"},
    {"ROB", "Robert Janes"},
    {"robo", "Buro Petr van Blokland"},
    {"ROBU", "SC ROBU DESIGN S.R.L."},
    {"ROHH", "ROHH studio"},
    {"ROMA", "Romanée Type Foundry"},
    {"ROST", "Robert Strauch"},
    {"RPTR", "Rampage Raptor"},
    {"RRT", "Red Rooster Collection (ITF, Inc.)"},
    {"RSET", "Reset Type Studio"},
    {"RSJ", "RSJ Software"},
    {"RSMS", "Rsms"},
    {"RST", "Rosetta"},
    {"RSZ", "Resistenza Type Foundry"},
    {"RT", "Ritmo"},
    {"RTG", "Roach Typografics"},
    {"rthy", "Arthy"},
    {"RUDY", "RudynFluffy"},
    {"RV", "Radmir Volk"},
    {"RVLR", "Revolver Type Foundry"},
    {"RXBN", "Roxaboxen"},
    {"RYHG", "Yanghee Ryu"},
    {"RYOB", "Ryobi Limited"},
    {"RYT", "Ra'ey Type"},
    {"S4TF", "Sed4-Type Foundry"},
    {"SAJA", "Saja Typeworks"},
    {"SALT", "Solonka Type Foundry"},
    {"SAND", "Sandoll"},
    {"SAPL", "Fonderie sans plomb"},
    {"SATO", "Satori Type"},
    {"SATY", "Samuelstype Design AB"},
    {"SAX", "s.a.x. Software gmbh"},
    {"SbB", "Sketchbook B"},
    {"SBFY", "Somebay Foundry"},
    {"SBT", "SelfBuild Type Foundry"},
    {"SBYA", "Shibuya Font"},
    {"SCHF", "Schrift Foundry"},
    {"SCTO", "Schick Toikka"},
    {"SDFF", "StaleyDigital Font Foundry"},
    {"Sdtp", "Sudetype"},
    {"SE", "Stéphane Elbaz"},
    {"Sean", "The FontSite"},
    {"SERP", "Serpentype"},
    {"SF", "Sans Fontières"},
    {"SfC", "Shapes for Cash"},
    {"SFF", "Shilalipi Font Foundry."},
    {"SFS", "Sarumadhu Services Pvt. Ltd."},
    {"SFUN", "Software Union"},
    {"SG", "Scooter Graphics"},
    {"SHAM", "ShamFonts / Shamrock Int."},
    {"SHAN", "Fontsim by Shana Koppel"},
    {"SHFT", "Shift"},
    {"SHMI", "Sharanda"},
    {"SHOT", "Shotype"},
    {"SHRP", "Sharp Type"},
    {"SHS", "Shahab Siavash Studio"},
    {"SHUB", "The Software Hub"},
    {"SHYF", "ShyFoundry Fonts"},
    {"sic", "Skill Information'S' Co., Ltd."},
    {"SIG", "vLetter, Inc"},
    {"SIL", "SIL International (SIL)"},
    {"SIT", "Summit Information Technologies Pvt.Ltd,"},
    {"SKP", "Essqué Productions"},
    {"skz", "Celtic Lady's Fonts"},
    {"SL", "Silesian Letters"},
    {"Slab", "Schriftlabor"},
    {"SLVK", "PTRSLVK Font Foundry"},
    {"SMC", "Swathanthra Malayalam Computing"},
    {"SMPJ", "Senamirmir Project"},
    {"SN", "SourceNet"},
    {"SOBF", "Soren Bakhol Fonts"},
    {"SOHO", "Soft Horizons"},
    {"SOS", "Standing Ovations Software"},
    {"SOTY", "So Type"},
    {"SPFO", "SproetS"},
    {"SPIR", "Spiratype"},
    {"SPRT", "Sports Fonts"},
    {"SPT", "Spacetype foundry"},
    {"spty", "supertype"},
    {"SRC", "Source Foundry"},
    {"SRCE", "Source Type"},
    {"SSFD", "Stefan Stoychev"},
    {"ssm0", "Siryali Studios"},
    {"ST", "SocioType"},
    {"STAI", "Sophia Tai"},
    {"STC", "Sorkin Type Co"},
    {"STF", "Brian Sooy & Co + Sooy Type Foundry"},
    {"STFD", "snuffletrumper"},
    {"STIX", "The STI Pub Companies"},
    {"Stor", "Storm Type Foundry"},
    {"STyC", "Fobytype Foundry"},
    {"STYK", "Satsuyako"},
    {"STYP", "Stone Type Foundry"},
    {"SUNW", "sunwalk fontworks"},
    {"SVTD", "Synthview"},
    {"SWEL", "Swell Type"},
    {"SWFT", "Swfte International"},
    {"SWTY", "Swiss Typefaces"},
    {"SXRA", "Page42 Type Foundry"},
    {"SYDA", "Shree Muktananda Ashram"},
    {"SYN", "SynFonts"},
    {"SYRC", "Syriac Computing Institute"},
    {"SYRF", "Syrian Revolution font"},
    {"SySt", "Syfon Studio"},
    {"TAFT", "Tural Alisoy Font"},
    {"tanu", "Tanuki Font"},
    {"TB", "TypeBank Co.,Ltd"},
    {"TBFF", "TrueBlue Font Foundry"},
    {"TBTF", "TypoBaaz Type Foundry"},
    {"TC", "Typeco"},
    {"TCH", "Darryl Cook"},
    {"TD", "Typedepot"},
    {"TDFF", "Tour de Force Font Foundry"},
    {"TDR", "Tansin A. Darcos & Co."},
    {"TERM", "Terminal Design, Inc."},
    {"TF", "Treacyfaces / Headliners"},
    {"TF3D", "TattooFont3D"},
    {"TFAC", "Typefactory"},
    {"TFND", "Typefounding"},
    {"TFTS", "The Foundry Types"},
    {"TG", "Tom Grace"},
    {"TGD", "Typo Graphic Design ■ Manuel Viergutz"},
    {"TGIF", "Tegamitype® Foundry"},
    {"TGHT", "TIGHTYPE"},
    {"THIN", "Thinstroke Design LLC"},
    {"THNA", "Thaana Type Foundry"},
    {"THYH", "Thy Hà"},
    {"TILD", "Tilde, SIA"},
    {"TIMO", "Tim Romano"},
    {"TIMR", "Tim Rolands"},
    {"TINY", "Tiny Type Co."},
    {"TIPO", "Tipo"},
    {"TIRO", "Tiro Typeworks"},
    {"TJS", "Typejockeys"},
    {"Tlab", "PYJ&Typolab (박윤정&타이포랩)"},
    {"TLIN", "Teeline Fonts"},
    {"TM", "Type Mafia"},
    {"TMF", "The MicroFoundry"},
    {"TMT", "TypeMyType Comm. V."},
    {"TNB", "The Northern Block"},
    {"TNOF", "Takayuki Nishida"},
    {"TNOZ", "ToneOZ"},
    {"TNTY", "tntypography"},
    {"TO", "Tondonero"},
    {"TOKO", "Tokotype"},
    {"TOPP", "Toppan Inc."},
    {"TPDP", "Type Department"},
    {"TPMA", "typoma"},
    {"TPOP", "Tipos Pereira Type Foundry"},
    {"TPSP", "Type Supply"},
    {"TPTA", "TPTQ Arabic"},
    {"TPTC", "Test Pilot Collective"},
    {"TPTQ", "Typotheque"},
    {"TR", "Type Revivals"},
    {"TRAF", "Traffictype"},
    {"TREE", "Treeflow"},
    {"TROY", "Troy Leinster"},
    {"TS", "TamilSoft Corporation"},
    {"TSGT", "Tapiwanashe Sebastian Garikayi"},
    {"TSPC", "Typespec Ltd"},
    {"TSTY", "Torleiv Georg Sverdrup"},
    {"TT", "TypeTogether"},
    {"TTC", "Tribby Type Co."},
    {"TTF", "Telugu Type Foundry"},
    {"TTG", "Twardoch Typography"},
    {"TTNC", "Typetanic Fonts"},
    {"TTY", "Tipotype"},
    {"TUDO", "tudotype"},
    {"TWK", "TYPE.WELTKERN®"},
    {"TY", "Typocalypse"},
    {"TYBY", "TYPE TAILORS"},
    {"TYCU", "TypeCulture"},
    {"TYFR", "typographies.fr"},
    {"TYME", "type me! Font Foundry"},
    {"TYPA", "Typadelic"},
    {"TYPB", "Type Brut"},
    {"TYPE", "Type Associates Pty Ltd"},
    {"TYPO", "Typodermic"},
    {"TYPR", "Type Project"},
    {"TYRE", "typerepublic"},
    {"TYSL", "Type Salon"},
    {"TYSO", "TYSO Type"},
    {"TYTA", "TYPE TAILORS"},
    {"UA", "UnAuthorized Type"},
    {"UCT", "Undercase Type"},
    {"UFAS", "Unicode Fonts for Ancient Scripts"},
    {"UFDN", "UNDERFOREST DESIGN"},
    {"UKUK", "Ultra Kühl"},
    {"ULA", "Montserrat Typeface"},
    {"UNDS", "Underscore Type"},
    {"UNDT", "ÜNDT"},
    {"UNIC", "Unicode Consortium"},
    {"UNTP", "Untype"},
    {"UPUP", "Up Up Creative"},
    {"URW", "URW Type Foundry GmbH"},
    {"UT", "Unitype Inc"},
    {"UTF", "Undercase Type Foundry"},
    {"VCTR", "Vectro Type Foundry"},
    {"VEZ", "Victoria Eloise Zunhiga"},
    {"VINT", "Vinterstille"},
    {"VJ", "eDESIGNzone"},
    {"VKP", "Vijay K. Patel"},
    {"VLKF", "Visualogik Technology & Design"},
    {"VLNL", "VetteLetters.nl"},
    {"VLQN", "VLQNC Font Foundry"},
    {"VMT", "VMType"},
    {"VO", "Violet Office"},
    {"VOG", "Martin Vogel"},
    {"VOL", "Bernd Volmer"},
    {"VOLT", "volto.one"},
    {"VR", "Victoria Rushton"},
    {"VRED", "Vred Letters"},
    {"VROM", "Vladimir Romanov"},
    {"VS", "VorSicht GmbH"},
    {"VT", "VISUALTYPE SRL"},
    {"VTC", "Vocal Type Co."},
    {"VTF", "Velvetyne Type Foundry"},
    {"VTP", "Quang Manh Nguyen"},
    {"VTYP", "(v) design"},
    {"WAFO", "Walden Font Co."},
    {"WALA", "Fontwala"},
    {"WASP", "Wasp Barcode Technologies"},
    {"WATF", "WA"},
    {"WBHE", "Webhance"},
    {"WEI", "Wei Huang"},
    {"WERK", "Fontwerk"},
    {"WF", "Walking Fearless"},
    {"WILL", "Willerstorfer Font Foundry"},
    {"WISH", "Willie Shaw"},
    {"WL", "Writ Large Fonts"},
    {"WM", "Webmakers India"},
    {"WNK", "Wanaka"},
    {"WS", "WS · Schriftmanufaktur"},
    {"XCON", "IntoTheDesign"},
    {"XFC", "Xerox Font Services"},
    {"XOTH", "Xoth Morello"},
    {"XSCR", "Xeroscript"},
    {"XTMS", "Extumus"},
    {"XYZ", "XYZ Type LLC"},
    {"Y&Y", "Y&Y, Inc."},
    {"YDI", "YOON Design Group"},
    {"YDS", "Yellow Design Studio"},
    {"YFFI", "Yfficient Graphic Design and Marketing"},
    {"YN", "Yanone"},
    {"YOFF", "Your Own Font Foundry"},
    {"YOKO", "Yokokaku"},
    {"YOUR", "YourFonts.com"},
    {"YT", "YT Foundry"},
    {"YUKI", "Yuki Type Foundry"},
    {"YWFT", "YouWorkForThem"},
    {"YYYY", "Yellow Type Foundry"},
    {"z01", "Jiangxi ZoomlaCMS Soft Co. LTD"},
    {"ZANE", "Unrender"},
    {"ZeGr", "Zebra Font Factory"},
    {"ZEN!", "A-1 Corp."},
    {"ZERO", "Federico Parra"},
    {"zeta", "Tangram Studio"},
    {"ZIHI", "字嗨"},
    {"ZSFT", "Zsoft"},

};

#ifndef __GTK_DOC_IGNORE__
#define FONT_MANAGER_NOTICE_ENTRIES G_N_ELEMENTS(FontManagerNoticeData)
#define FONT_MANAGER_VENDOR_ENTRIES G_N_ELEMENTS(FontManagerVendorData)
#endif

G_END_DECLS

#endif /* __FONT_MANAGER_VENDOR_H__ */

