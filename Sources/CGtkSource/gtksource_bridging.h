#include <sys/types.h>
#include <stdint.h>
#include <gtksourceview/gtksource.h>

/* Empty struct bodies for GtkSourceView's opaque, forward-declared
   types (final types and interfaces), so the Clang importer surfaces
   them to Swift the way SwiftAdw does for libadwaita. Derivable types
   already define their instance and class structs for subclassing. */
struct _GtkSourceAnnotation {};
struct _GtkSourceAnnotations {};
struct _GtkSourceCompletion {};
struct _GtkSourceCompletionCell {};
struct _GtkSourceCompletionContext {};
struct _GtkSourceFileLoader {};
struct _GtkSourceFileSaver {};
struct _GtkSourceGutter {};
struct _GtkSourceGutterLines {};
struct _GtkSourceHover {};
struct _GtkSourceHoverContext {};
struct _GtkSourceHoverDisplay {};
struct _GtkSourceLanguage {};
struct _GtkSourceLanguageManager {};
struct _GtkSourceMarkAttributes {};
struct _GtkSourceSearchContext {};
struct _GtkSourceSnippet {};
struct _GtkSourceSnippetChunk {};
struct _GtkSourceSnippetContext {};
struct _GtkSourceSnippetManager {};
struct _GtkSourceSpaceDrawer {};
struct _GtkSourceStyle {};
struct _GtkSourceStyleScheme {};
struct _GtkSourceStyleSchemeManager {};
struct _GtkSourceStyleSchemePreview {};
struct _GtkSourceVimIMContext {};
struct _GtkSourceCompletionProposal {};
struct _GtkSourceCompletionProvider {};
struct _GtkSourceHoverProvider {};
struct _GtkSourceIndenter {};
struct _GtkSourceStyleSchemeChooser {};
struct _GtkSourceAnnotationClass {};
struct _GtkSourceAnnotationsClass {};
struct _GtkSourceCompletionClass {};
struct _GtkSourceCompletionCellClass {};
struct _GtkSourceCompletionContextClass {};
struct _GtkSourceFileLoaderClass {};
struct _GtkSourceFileSaverClass {};
struct _GtkSourceGutterClass {};
struct _GtkSourceGutterLinesClass {};
struct _GtkSourceHoverClass {};
struct _GtkSourceHoverContextClass {};
struct _GtkSourceHoverDisplayClass {};
struct _GtkSourceLanguageClass {};
struct _GtkSourceLanguageManagerClass {};
struct _GtkSourceMarkAttributesClass {};
struct _GtkSourceSearchContextClass {};
struct _GtkSourceSnippetClass {};
struct _GtkSourceSnippetChunkClass {};
struct _GtkSourceSnippetContextClass {};
struct _GtkSourceSnippetManagerClass {};
struct _GtkSourceSpaceDrawerClass {};
struct _GtkSourceStyleClass {};
struct _GtkSourceStyleSchemeClass {};
struct _GtkSourceStyleSchemeManagerClass {};
struct _GtkSourceStyleSchemePreviewClass {};
struct _GtkSourceVimIMContextClass {};
struct _GtkSourceEncoding {};
