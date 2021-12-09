
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 712 > 0
static unsigned char *bytecode_data[712];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_PIL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageQt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_RPi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_RPi$GPIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode__distutils_hack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode__distutils_hack$override(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cairo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$bdalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$canonical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$ctrlutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$delay(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$descfcn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$dtime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$exception(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$frdata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$freqplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$grid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$iosys(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$lti(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$margins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$mateqn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$modelsimp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$nichols(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$phaseplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$pzmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$rlocus(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$robust(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$sisotool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$statefbk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$statesp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$timeresp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_control$xferfcn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cycler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defVLCplayer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_gtktemplate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_option(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_ossighelper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_propertyhelper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_signalhelper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$importer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$module(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides$GLib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides$GObject(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides$Gdk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides$Gtk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$repository(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$_identifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$asyncfilters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$asyncsupport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$bccache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$compiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$debug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$defaults(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$environment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$idtracking(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$lexer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$loaders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$nodes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$runtime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$tests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$visitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_native(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_blocking_input(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm_listed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_color_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_constrained_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_layoutgrid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_pylab_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_text_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$afm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$artist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_secondary_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_subplots(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_bases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_managers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$_backend_tk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_agg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_tkagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_webagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_webagg_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$bezier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$category(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colorbar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$container(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$contour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dviread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$figure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$font_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$fontconfig_pattern(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$gridspec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$hatch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend_handler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$lines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$markers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mlab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$offsetbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$path(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patheffects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$geo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$polar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$pyplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$quiver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$rcsetup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$scale(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$spines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$stackplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$streamplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$texmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$textpath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$ticker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tight_bbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tight_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triangulation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tricontour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$trifinder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triinterpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tripcolor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$trirefine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tritools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axes_grid1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axes_grid1$axes_divider(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axes_grid1$axes_grid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axes_grid1$axes_size(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axes_grid1$mpl_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axes_grid1$parasite_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axisartist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axisartist$angle_helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axisartist$axis_artist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axisartist$axisline_style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axisartist$axislines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axisartist$floating_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axisartist$grid_finder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$axisartist$grid_helper_curvelinear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$art3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axes3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axis3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$proj3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_add_docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_array_like(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_char_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_dtype_like(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_generic_alias(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_nbit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_shape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_packaging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_packaging$__about__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_packaging$_structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_packaging$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_psaix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_psbsd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_pslinux(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_psosx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_psposix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_pssunos(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_pswindows(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$actions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$diagram(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$results(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$unicode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_bunch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_ccallback(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_pep440(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_testutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_threadsafety(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_uarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_uarray$_backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$decorator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$doccer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$uarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants$codata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_fftlog(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft$basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft$realtransforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_realtransforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_bvp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$bdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$dop853_coefficients(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$ivp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$lsoda(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$radau(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$rk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_quad_vec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_quadrature(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$odepack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$quadpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_bsplines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_cubic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_fitpack_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_pade(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_rbfinterp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$fitpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$fitpack2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$interpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$ndgriddata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$polyint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$rbf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_cossin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_ldl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_polar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_qz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_expm_frechet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_interpolative_backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_matfuncs_inv_ssq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_matfuncs_sqrtm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_procrustes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_sketches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_solvers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$blas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_cholesky(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_lu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_qr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_schur(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_svd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$flinalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$interpolative(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$lapack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$matfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$special_matrices(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$misc$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$misc$doccer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_ni_docstrings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_ni_support(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$fourier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$interpolation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$measurements(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$morphology(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_basinhopping(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_constraints(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_differentiable_functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_differentialevolution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_dual_annealing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_hessian_update_strategy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_highs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_doc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_highs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_ip(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_rs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_simplex(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$bvls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$dogbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$least_squares(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$lsq_linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$trf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$trf_linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_minimize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_nnls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_numdiff(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_qap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_remove_redundancy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_root(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_root_scalar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_shgo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_shgo_lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_shgo_lib$triangulation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_spectral(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$canonical_constraint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$equality_constrained_sqp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$minimize_trustregion_constr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$projections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$qp_subproblem(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$report(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$tr_interior_point(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_dogleg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_exact(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_krylov(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_ncg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$cobyla(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$lbfgsb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$linesearch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$minpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$nonlin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$optimize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$slsqp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$tnc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$zeros(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$_arraytools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$_max_len_seq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$_peak_finding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$_savitzky_golay(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$_upfirdn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$bsplines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$filter_design(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$fir_filter_design(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$lti_conversion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$ltisys(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$signaltools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$spectral(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$waveforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$wavelets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$windows(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$signal$windows$windows(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_index(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_matrix_io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$bsr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$compressed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$construct(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$coo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csgraph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csgraph$_laplacian(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csgraph$_validation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$dia(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$dok(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$extract(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$lil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_expm_multiply(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_norm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_onenormest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$dsolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$dsolve$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$dsolve$linsolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen$arpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen$arpack$arpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen$lobpcg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen$lobpcg$lobpcg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$interface(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$_gcrotmk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$iterative(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$lgmres(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$lsmr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$lsqr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$minres(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$matfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$spfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$sputils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_geometric_slerp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_plotutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_procrustes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_spherical_voronoi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$distance(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$kdtree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$transform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$transform$_rotation_groups(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$transform$_rotation_spline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_ellip_harm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_lambertw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_logsumexp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_spherical_bessel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$orthogonal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$sf_error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$spfun_stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_binned_statistic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_binomtest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_boost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_bootstrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_continuous_distns(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_crosstab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_discrete_distns(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_distn_infrastructure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_distr_params(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_entropy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_hypotests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_ksstats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_mannwhitneyu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_multivariate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_page_trend_test(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_qmc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_relative_risk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_rvs_sampling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_stats_mstats_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_tukeylambda_stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_wilcoxon_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$contingency(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$distributions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$kde(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$morestats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$mstats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$mstats_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$mstats_extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$qmc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_slycot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_slycot$analysis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_slycot$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_slycot$math(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_slycot$synthesis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_slycot$transform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_slycot$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_typing_extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_vlc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageQt", modulecode_PIL$ImageQt, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL._imaging", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"RPi", modulecode_RPi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"RPi.GPIO", modulecode_RPi$GPIO, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"RPi._GPIO", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"_asyncio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_cn", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_hk", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_iso2022", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_jp", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_kr", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_tw", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_contextvars", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_crypt", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_curses", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_curses_panel", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_dbm", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_distutils_hack", modulecode__distutils_hack, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"_distutils_hack.override", modulecode__distutils_hack$override, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_json", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_lsprof", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_multibytecodec", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_opcode", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_posixshmem", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_sqlite3", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_tkinter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_uuid", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_zoneinfo", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"audioop", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"cairo", modulecode_cairo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cairo._cairo", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control", modulecode_control, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"control._version", modulecode_control$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.bdalg", modulecode_control$bdalg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.canonical", modulecode_control$canonical, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.config", modulecode_control$config, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.ctrlutil", modulecode_control$ctrlutil, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.delay", modulecode_control$delay, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.descfcn", modulecode_control$descfcn, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.dtime", modulecode_control$dtime, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.exception", modulecode_control$exception, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.frdata", modulecode_control$frdata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.freqplot", modulecode_control$freqplot, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.grid", modulecode_control$grid, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.iosys", modulecode_control$iosys, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.lti", modulecode_control$lti, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.margins", modulecode_control$margins, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.mateqn", modulecode_control$mateqn, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.modelsimp", modulecode_control$modelsimp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.nichols", modulecode_control$nichols, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.phaseplot", modulecode_control$phaseplot, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.pzmap", modulecode_control$pzmap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.rlocus", modulecode_control$rlocus, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.robust", modulecode_control$robust, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.sisotool", modulecode_control$sisotool, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.statefbk", modulecode_control$statefbk, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.statesp", modulecode_control$statesp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.timeresp", modulecode_control$timeresp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"control.xferfcn", modulecode_control$xferfcn, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cycler", modulecode_cycler, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"defVLCplayer", modulecode_defVLCplayer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi", modulecode_gi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"gi._constants", modulecode_gi$_constants, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi._error", modulecode_gi$_error, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi._gi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"gi._gtktemplate", modulecode_gi$_gtktemplate, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi._option", modulecode_gi$_option, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi._ossighelper", modulecode_gi$_ossighelper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi._propertyhelper", modulecode_gi$_propertyhelper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi._signalhelper", modulecode_gi$_signalhelper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi.docstring", modulecode_gi$docstring, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi.importer", modulecode_gi$importer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi.module", modulecode_gi$module, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi.overrides", modulecode_gi$overrides, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"gi.overrides.GLib", modulecode_gi$overrides$GLib, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi.overrides.GObject", modulecode_gi$overrides$GObject, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi.overrides.Gdk", modulecode_gi$overrides$Gdk, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi.overrides.Gtk", modulecode_gi$overrides$Gtk, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"gi.repository", modulecode_gi$repository, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"gi.types", modulecode_gi$types, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2", modulecode_jinja2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"jinja2._compat", modulecode_jinja2$_compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2._identifier", modulecode_jinja2$_identifier, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.asyncfilters", modulecode_jinja2$asyncfilters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.asyncsupport", modulecode_jinja2$asyncsupport, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.bccache", modulecode_jinja2$bccache, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.compiler", modulecode_jinja2$compiler, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.constants", modulecode_jinja2$constants, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.debug", modulecode_jinja2$debug, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.defaults", modulecode_jinja2$defaults, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.environment", modulecode_jinja2$environment, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.exceptions", modulecode_jinja2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.filters", modulecode_jinja2$filters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.idtracking", modulecode_jinja2$idtracking, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.lexer", modulecode_jinja2$lexer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.loaders", modulecode_jinja2$loaders, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.nodes", modulecode_jinja2$nodes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.optimizer", modulecode_jinja2$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.parser", modulecode_jinja2$parser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.runtime", modulecode_jinja2$runtime, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.tests", modulecode_jinja2$tests, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.utils", modulecode_jinja2$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"jinja2.visitor", modulecode_jinja2$visitor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"kiwisolver", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"markupsafe", modulecode_markupsafe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"markupsafe._compat", modulecode_markupsafe$_compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"markupsafe._constants", modulecode_markupsafe$_constants, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"markupsafe._native", modulecode_markupsafe$_native, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"markupsafe._speedups", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"matplotlib", modulecode_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"matplotlib._api", modulecode_matplotlib$_api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"matplotlib._api.deprecation", modulecode_matplotlib$_api$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._blocking_input", modulecode_matplotlib$_blocking_input, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._c_internal_utils", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"matplotlib._cm", modulecode_matplotlib$_cm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._cm_listed", modulecode_matplotlib$_cm_listed, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._color_data", modulecode_matplotlib$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._constrained_layout", modulecode_matplotlib$_constrained_layout, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._contour", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"matplotlib._enums", modulecode_matplotlib$_enums, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._image", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"matplotlib._layoutgrid", modulecode_matplotlib$_layoutgrid, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._mathtext", modulecode_matplotlib$_mathtext, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._mathtext_data", modulecode_matplotlib$_mathtext_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._path", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"matplotlib._pylab_helpers", modulecode_matplotlib$_pylab_helpers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._qhull", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"matplotlib._text_helpers", modulecode_matplotlib$_text_helpers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib._tri", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"matplotlib._version", modulecode_matplotlib$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.afm", modulecode_matplotlib$afm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.artist", modulecode_matplotlib$artist, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.axes", modulecode_matplotlib$axes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"matplotlib.axes._axes", modulecode_matplotlib$axes$_axes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.axes._base", modulecode_matplotlib$axes$_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.axes._secondary_axes", modulecode_matplotlib$axes$_secondary_axes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.axes._subplots", modulecode_matplotlib$axes$_subplots, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.axis", modulecode_matplotlib$axis, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.backend_bases", modulecode_matplotlib$backend_bases, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.backend_managers", modulecode_matplotlib$backend_managers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.backend_tools", modulecode_matplotlib$backend_tools, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.backends", modulecode_matplotlib$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"matplotlib.backends._backend_agg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"matplotlib.backends._backend_tk", modulecode_matplotlib$backends$_backend_tk, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.backends._tkagg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"matplotlib.backends.backend_agg", modulecode_matplotlib$backends$backend_agg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.backends.backend_tkagg", modulecode_matplotlib$backends$backend_tkagg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.backends.backend_webagg", modulecode_matplotlib$backends$backend_webagg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.backends.backend_webagg_core", modulecode_matplotlib$backends$backend_webagg_core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.bezier", modulecode_matplotlib$bezier, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.category", modulecode_matplotlib$category, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.cbook", modulecode_matplotlib$cbook, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"matplotlib.cm", modulecode_matplotlib$cm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.collections", modulecode_matplotlib$collections, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.colorbar", modulecode_matplotlib$colorbar, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.colors", modulecode_matplotlib$colors, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.container", modulecode_matplotlib$container, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.contour", modulecode_matplotlib$contour, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.dates", modulecode_matplotlib$dates, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.docstring", modulecode_matplotlib$docstring, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.dviread", modulecode_matplotlib$dviread, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.figure", modulecode_matplotlib$figure, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.font_manager", modulecode_matplotlib$font_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.fontconfig_pattern", modulecode_matplotlib$fontconfig_pattern, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.ft2font", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"matplotlib.gridspec", modulecode_matplotlib$gridspec, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.hatch", modulecode_matplotlib$hatch, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.image", modulecode_matplotlib$image, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.legend", modulecode_matplotlib$legend, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.legend_handler", modulecode_matplotlib$legend_handler, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.lines", modulecode_matplotlib$lines, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.markers", modulecode_matplotlib$markers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.mathtext", modulecode_matplotlib$mathtext, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.mlab", modulecode_matplotlib$mlab, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.offsetbox", modulecode_matplotlib$offsetbox, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.patches", modulecode_matplotlib$patches, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.path", modulecode_matplotlib$path, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.patheffects", modulecode_matplotlib$patheffects, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.projections", modulecode_matplotlib$projections, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"matplotlib.projections.geo", modulecode_matplotlib$projections$geo, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.projections.polar", modulecode_matplotlib$projections$polar, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.pyplot", modulecode_matplotlib$pyplot, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.quiver", modulecode_matplotlib$quiver, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.rcsetup", modulecode_matplotlib$rcsetup, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.scale", modulecode_matplotlib$scale, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.spines", modulecode_matplotlib$spines, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.stackplot", modulecode_matplotlib$stackplot, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.streamplot", modulecode_matplotlib$streamplot, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.style", modulecode_matplotlib$style, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"matplotlib.style.core", modulecode_matplotlib$style$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.table", modulecode_matplotlib$table, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.texmanager", modulecode_matplotlib$texmanager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.text", modulecode_matplotlib$text, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.textpath", modulecode_matplotlib$textpath, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.ticker", modulecode_matplotlib$ticker, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.tight_bbox", modulecode_matplotlib$tight_bbox, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.tight_layout", modulecode_matplotlib$tight_layout, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.transforms", modulecode_matplotlib$transforms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.tri", modulecode_matplotlib$tri, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"matplotlib.tri.triangulation", modulecode_matplotlib$tri$triangulation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.tri.tricontour", modulecode_matplotlib$tri$tricontour, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.tri.trifinder", modulecode_matplotlib$tri$trifinder, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.tri.triinterpolate", modulecode_matplotlib$tri$triinterpolate, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.tri.tripcolor", modulecode_matplotlib$tri$tripcolor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.tri.triplot", modulecode_matplotlib$tri$triplot, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.tri.trirefine", modulecode_matplotlib$tri$trirefine, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.tri.tritools", modulecode_matplotlib$tri$tritools, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.units", modulecode_matplotlib$units, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"matplotlib.widgets", modulecode_matplotlib$widgets, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mmap", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"mpl_toolkits", modulecode_mpl_toolkits, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"mpl_toolkits.axes_grid1", modulecode_mpl_toolkits$axes_grid1, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"mpl_toolkits.axes_grid1.axes_divider", modulecode_mpl_toolkits$axes_grid1$axes_divider, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axes_grid1.axes_grid", modulecode_mpl_toolkits$axes_grid1$axes_grid, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axes_grid1.axes_size", modulecode_mpl_toolkits$axes_grid1$axes_size, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axes_grid1.mpl_axes", modulecode_mpl_toolkits$axes_grid1$mpl_axes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axes_grid1.parasite_axes", modulecode_mpl_toolkits$axes_grid1$parasite_axes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axisartist", modulecode_mpl_toolkits$axisartist, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"mpl_toolkits.axisartist.angle_helper", modulecode_mpl_toolkits$axisartist$angle_helper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axisartist.axis_artist", modulecode_mpl_toolkits$axisartist$axis_artist, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axisartist.axisline_style", modulecode_mpl_toolkits$axisartist$axisline_style, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axisartist.axislines", modulecode_mpl_toolkits$axisartist$axislines, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axisartist.floating_axes", modulecode_mpl_toolkits$axisartist$floating_axes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axisartist.grid_finder", modulecode_mpl_toolkits$axisartist$grid_finder, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.axisartist.grid_helper_curvelinear", modulecode_mpl_toolkits$axisartist$grid_helper_curvelinear, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.mplot3d", modulecode_mpl_toolkits$mplot3d, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"mpl_toolkits.mplot3d.art3d", modulecode_mpl_toolkits$mplot3d$art3d, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.mplot3d.axes3d", modulecode_mpl_toolkits$mplot3d$axes3d, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.mplot3d.axis3d", modulecode_mpl_toolkits$mplot3d$axis3d, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mpl_toolkits.mplot3d.proj3d", modulecode_mpl_toolkits$mplot3d$proj3d, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._multiarray_tests", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.core._multiarray_umath", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.machar", modulecode_numpy$core$machar, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.distutils", NULL, 0, 1479, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.__config__", NULL, 1, 3573, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils._shell_utils", NULL, 2, 3152, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.ccompiler", NULL, 3, 19261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.ccompiler_opt", NULL, 4, 70775, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command", NULL, 5, 948, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.command.autodist", NULL, 6, 3703, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.bdist_rpm", NULL, 7, 824, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build", NULL, 8, 2233, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_clib", NULL, 9, 9892, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_ext", NULL, 10, 15102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_py", NULL, 11, 1349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_scripts", NULL, 12, 1636, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_src", NULL, 13, 18406, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.config", NULL, 14, 13868, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.config_compiler", NULL, 15, 3853, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.develop", NULL, 16, 851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.egg_info", NULL, 17, 1079, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install", NULL, 18, 2091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_clib", NULL, 19, 1617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_data", NULL, 20, 879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_headers", NULL, 21, 945, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.sdist", NULL, 22, 929, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.conv_template", NULL, 23, 8252, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.core", NULL, 24, 4738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.cpuinfo", NULL, 25, 32640, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.exec_command", NULL, 26, 9169, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.extension", NULL, 27, 2481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.fcompiler", NULL, 28, 28204, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.fcompiler.environment", NULL, 29, 3042, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.from_template", NULL, 30, 7183, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.lib2def", NULL, 31, 3289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.log", NULL, 32, 2445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.mingw32ccompiler", NULL, 33, 14575, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.misc_util", NULL, 34, 71428, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.npy_pkg_config", NULL, 35, 12278, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.numpy_distribution", NULL, 36, 772, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.system_info", NULL, 37, 88006, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.unixccompiler", NULL, 38, 3391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py", NULL, 39, 5174, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.f2py.__version__", NULL, 40, 189, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.auxfuncs", NULL, 41, 22192, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.capi_maps", NULL, 42, 17850, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.cb_rules", NULL, 43, 17063, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.cfuncs", NULL, 44, 40041, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.common_rules", NULL, 45, 4719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.crackfortran", NULL, 46, 77636, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.diagnose", NULL, 47, 3717, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f2py2e", NULL, 48, 20115, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f2py_testing", NULL, 49, 1385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f90mod_rules", NULL, 50, 7323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.func2subr", NULL, 51, 6543, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.rules", NULL, 52, 34637, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.use_rules", NULL, 53, 3025, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.fft._pocketfft_internal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.linalg._umath_linalg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.linalg.lapack_lite", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.random._bounded_integers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._common", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._mt19937", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._pcg64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._philox", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.random._sfc64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random.bit_generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.random.mtrand", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"numpy.testing", NULL, 54, 717, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.testing._private", NULL, 55, 153, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.testing._private.decorators", NULL, 56, 10726, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.noseclasses", NULL, 57, 9887, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.nosetester", NULL, 58, 14894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.parameterized", NULL, 59, 15268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.utils", NULL, 60, 70731, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy.typing", modulecode_numpy$typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.typing._add_docstring", modulecode_numpy$typing$_add_docstring, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._array_like", modulecode_numpy$typing$_array_like, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._char_codes", modulecode_numpy$typing$_char_codes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._dtype_like", modulecode_numpy$typing$_dtype_like, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._generic_alias", modulecode_numpy$typing$_generic_alias, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._nbit", modulecode_numpy$typing$_nbit, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._scalars", modulecode_numpy$typing$_scalars, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._shape", modulecode_numpy$typing$_shape, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"packaging", modulecode_packaging, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"packaging.__about__", modulecode_packaging$__about__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"packaging._structures", modulecode_packaging$_structures, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"packaging.version", modulecode_packaging$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pkg_resources", NULL, 61, 100385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor", NULL, 62, 139, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.appdirs", NULL, 63, 20456, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging", NULL, 64, 501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.packaging.__about__", NULL, 65, 655, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._compat", NULL, 66, 1099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._structures", NULL, 67, 2853, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._typing", NULL, 68, 1444, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.markers", NULL, 69, 9260, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.requirements", NULL, 70, 4037, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 71, 20536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.utils", NULL, 72, 1606, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.version", NULL, 73, 13273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.pyparsing", NULL, 74, 201292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources.extern", NULL, 75, 2631, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"psutil", modulecode_psutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"psutil._common", modulecode_psutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"psutil._compat", modulecode_psutil$_compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"psutil._psaix", modulecode_psutil$_psaix, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"psutil._psbsd", modulecode_psutil$_psbsd, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"psutil._pslinux", modulecode_psutil$_pslinux, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"psutil._psosx", modulecode_psutil$_psosx, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"psutil._psposix", modulecode_psutil$_psposix, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"psutil._pssunos", modulecode_psutil$_pssunos, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"psutil._psutil_linux", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"psutil._psutil_posix", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"psutil._pswindows", modulecode_psutil$_pswindows, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pyparsing", modulecode_pyparsing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pyparsing.actions", modulecode_pyparsing$actions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pyparsing.common", modulecode_pyparsing$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pyparsing.core", modulecode_pyparsing$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pyparsing.diagram", modulecode_pyparsing$diagram, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pyparsing.exceptions", modulecode_pyparsing$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pyparsing.helpers", modulecode_pyparsing$helpers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pyparsing.results", modulecode_pyparsing$results, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pyparsing.testing", modulecode_pyparsing$testing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pyparsing.unicode", modulecode_pyparsing$unicode, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pyparsing.util", modulecode_pyparsing$util, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"readline", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"resource", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy", modulecode_scipy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.__config__", modulecode_scipy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._distributor_init", modulecode_scipy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib", modulecode_scipy$_lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy._lib._bunch", modulecode_scipy$_lib$_bunch, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib._ccallback", modulecode_scipy$_lib$_ccallback, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib._ccallback_c", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy._lib._pep440", modulecode_scipy$_lib$_pep440, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib._testutils", modulecode_scipy$_lib$_testutils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib._threadsafety", modulecode_scipy$_lib$_threadsafety, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib._uarray", modulecode_scipy$_lib$_uarray, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy._lib._uarray._backend", modulecode_scipy$_lib$_uarray$_backend, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib._uarray._uarray", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy._lib._util", modulecode_scipy$_lib$_util, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib.decorator", modulecode_scipy$_lib$decorator, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib.deprecation", modulecode_scipy$_lib$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib.doccer", modulecode_scipy$_lib$doccer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy._lib.messagestream", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy._lib.uarray", modulecode_scipy$_lib$uarray, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.constants", modulecode_scipy$constants, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.constants.codata", modulecode_scipy$constants$codata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.constants.constants", modulecode_scipy$constants$constants, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.fft", modulecode_scipy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.fft._backend", modulecode_scipy$fft$_backend, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.fft._basic", modulecode_scipy$fft$_basic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.fft._fftlog", modulecode_scipy$fft$_fftlog, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.fft._helper", modulecode_scipy$fft$_helper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.fft._pocketfft", modulecode_scipy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.fft._pocketfft.basic", modulecode_scipy$fft$_pocketfft$basic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.fft._pocketfft.helper", modulecode_scipy$fft$_pocketfft$helper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.fft._pocketfft.pypocketfft", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.fft._pocketfft.realtransforms", modulecode_scipy$fft$_pocketfft$realtransforms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.fft._realtransforms", modulecode_scipy$fft$_realtransforms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate", modulecode_scipy$integrate, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.integrate._bvp", modulecode_scipy$integrate$_bvp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._dop", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.integrate._ivp", modulecode_scipy$integrate$_ivp, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.integrate._ivp.base", modulecode_scipy$integrate$_ivp$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._ivp.bdf", modulecode_scipy$integrate$_ivp$bdf, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._ivp.common", modulecode_scipy$integrate$_ivp$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._ivp.dop853_coefficients", modulecode_scipy$integrate$_ivp$dop853_coefficients, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._ivp.ivp", modulecode_scipy$integrate$_ivp$ivp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._ivp.lsoda", modulecode_scipy$integrate$_ivp$lsoda, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._ivp.radau", modulecode_scipy$integrate$_ivp$radau, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._ivp.rk", modulecode_scipy$integrate$_ivp$rk, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._ode", modulecode_scipy$integrate$_ode, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._odepack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.integrate._quad_vec", modulecode_scipy$integrate$_quad_vec, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate._quadpack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.integrate._quadrature", modulecode_scipy$integrate$_quadrature, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate.lsoda", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.integrate.odepack", modulecode_scipy$integrate$odepack, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate.quadpack", modulecode_scipy$integrate$quadpack, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.integrate.vode", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.interpolate", modulecode_scipy$interpolate, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.interpolate._bspl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.interpolate._bsplines", modulecode_scipy$interpolate$_bsplines, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.interpolate._cubic", modulecode_scipy$interpolate$_cubic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.interpolate._fitpack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.interpolate._fitpack_impl", modulecode_scipy$interpolate$_fitpack_impl, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.interpolate._pade", modulecode_scipy$interpolate$_pade, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.interpolate._ppoly", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.interpolate._rbfinterp", modulecode_scipy$interpolate$_rbfinterp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.interpolate._rbfinterp_pythran", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.interpolate.dfitpack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.interpolate.fitpack", modulecode_scipy$interpolate$fitpack, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.interpolate.fitpack2", modulecode_scipy$interpolate$fitpack2, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.interpolate.interpnd", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.interpolate.interpolate", modulecode_scipy$interpolate$interpolate, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.interpolate.ndgriddata", modulecode_scipy$interpolate$ndgriddata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.interpolate.polyint", modulecode_scipy$interpolate$polyint, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.interpolate.rbf", modulecode_scipy$interpolate$rbf, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg", modulecode_scipy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.linalg._decomp_cossin", modulecode_scipy$linalg$_decomp_cossin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg._decomp_ldl", modulecode_scipy$linalg$_decomp_ldl, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg._decomp_polar", modulecode_scipy$linalg$_decomp_polar, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg._decomp_qz", modulecode_scipy$linalg$_decomp_qz, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg._decomp_update", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.linalg._expm_frechet", modulecode_scipy$linalg$_expm_frechet, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg._fblas", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.linalg._flapack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.linalg._flinalg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.linalg._interpolative", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.linalg._interpolative_backend", modulecode_scipy$linalg$_interpolative_backend, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg._matfuncs_inv_ssq", modulecode_scipy$linalg$_matfuncs_inv_ssq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg._matfuncs_sqrtm", modulecode_scipy$linalg$_matfuncs_sqrtm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg._matfuncs_sqrtm_triu", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.linalg._procrustes", modulecode_scipy$linalg$_procrustes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg._sketches", modulecode_scipy$linalg$_sketches, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg._solve_toeplitz", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.linalg._solvers", modulecode_scipy$linalg$_solvers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.basic", modulecode_scipy$linalg$basic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.blas", modulecode_scipy$linalg$blas, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.cython_blas", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.linalg.cython_lapack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.linalg.decomp", modulecode_scipy$linalg$decomp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.decomp_cholesky", modulecode_scipy$linalg$decomp_cholesky, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.decomp_lu", modulecode_scipy$linalg$decomp_lu, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.decomp_qr", modulecode_scipy$linalg$decomp_qr, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.decomp_schur", modulecode_scipy$linalg$decomp_schur, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.decomp_svd", modulecode_scipy$linalg$decomp_svd, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.flinalg", modulecode_scipy$linalg$flinalg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.interpolative", modulecode_scipy$linalg$interpolative, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.lapack", modulecode_scipy$linalg$lapack, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.matfuncs", modulecode_scipy$linalg$matfuncs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.misc", modulecode_scipy$linalg$misc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.linalg.special_matrices", modulecode_scipy$linalg$special_matrices, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.misc", modulecode_scipy$misc, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.misc.common", modulecode_scipy$misc$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.misc.doccer", modulecode_scipy$misc$doccer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.ndimage", modulecode_scipy$ndimage, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.ndimage._nd_image", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.ndimage._ni_docstrings", modulecode_scipy$ndimage$_ni_docstrings, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.ndimage._ni_label", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.ndimage._ni_support", modulecode_scipy$ndimage$_ni_support, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.ndimage.filters", modulecode_scipy$ndimage$filters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.ndimage.fourier", modulecode_scipy$ndimage$fourier, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.ndimage.interpolation", modulecode_scipy$ndimage$interpolation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.ndimage.measurements", modulecode_scipy$ndimage$measurements, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.ndimage.morphology", modulecode_scipy$ndimage$morphology, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize", modulecode_scipy$optimize, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.optimize.__nnls", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._basinhopping", modulecode_scipy$optimize$_basinhopping, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._bglu_dense", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._cobyla", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._constraints", modulecode_scipy$optimize$_constraints, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._differentiable_functions", modulecode_scipy$optimize$_differentiable_functions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._differentialevolution", modulecode_scipy$optimize$_differentialevolution, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._dual_annealing", modulecode_scipy$optimize$_dual_annealing, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._group_columns", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._hessian_update_strategy", modulecode_scipy$optimize$_hessian_update_strategy, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._highs", modulecode_scipy$optimize$_highs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.optimize._highs._highs_constants", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._highs._highs_wrapper", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._lbfgsb", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._linprog", modulecode_scipy$optimize$_linprog, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._linprog_doc", modulecode_scipy$optimize$_linprog_doc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._linprog_highs", modulecode_scipy$optimize$_linprog_highs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._linprog_ip", modulecode_scipy$optimize$_linprog_ip, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._linprog_rs", modulecode_scipy$optimize$_linprog_rs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._linprog_simplex", modulecode_scipy$optimize$_linprog_simplex, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._linprog_util", modulecode_scipy$optimize$_linprog_util, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._lsap", modulecode_scipy$optimize$_lsap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._lsap_module", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._lsq", modulecode_scipy$optimize$_lsq, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.optimize._lsq.bvls", modulecode_scipy$optimize$_lsq$bvls, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._lsq.common", modulecode_scipy$optimize$_lsq$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._lsq.dogbox", modulecode_scipy$optimize$_lsq$dogbox, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._lsq.givens_elimination", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._lsq.least_squares", modulecode_scipy$optimize$_lsq$least_squares, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._lsq.lsq_linear", modulecode_scipy$optimize$_lsq$lsq_linear, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._lsq.trf", modulecode_scipy$optimize$_lsq$trf, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._lsq.trf_linear", modulecode_scipy$optimize$_lsq$trf_linear, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._minimize", modulecode_scipy$optimize$_minimize, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._minpack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._nnls", modulecode_scipy$optimize$_nnls, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._numdiff", modulecode_scipy$optimize$_numdiff, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._qap", modulecode_scipy$optimize$_qap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._remove_redundancy", modulecode_scipy$optimize$_remove_redundancy, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._root", modulecode_scipy$optimize$_root, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._root_scalar", modulecode_scipy$optimize$_root_scalar, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._shgo", modulecode_scipy$optimize$_shgo, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._shgo_lib", modulecode_scipy$optimize$_shgo_lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.optimize._shgo_lib.triangulation", modulecode_scipy$optimize$_shgo_lib$triangulation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._slsqp", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._spectral", modulecode_scipy$optimize$_spectral, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trlib", modulecode_scipy$optimize$_trlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.optimize._trlib._trlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize._trustregion", modulecode_scipy$optimize$_trustregion, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_constr", modulecode_scipy$optimize$_trustregion_constr, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.optimize._trustregion_constr.canonical_constraint", modulecode_scipy$optimize$_trustregion_constr$canonical_constraint, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_constr.equality_constrained_sqp", modulecode_scipy$optimize$_trustregion_constr$equality_constrained_sqp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_constr.minimize_trustregion_constr", modulecode_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_constr.projections", modulecode_scipy$optimize$_trustregion_constr$projections, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_constr.qp_subproblem", modulecode_scipy$optimize$_trustregion_constr$qp_subproblem, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_constr.report", modulecode_scipy$optimize$_trustregion_constr$report, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_constr.tr_interior_point", modulecode_scipy$optimize$_trustregion_constr$tr_interior_point, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_dogleg", modulecode_scipy$optimize$_trustregion_dogleg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_exact", modulecode_scipy$optimize$_trustregion_exact, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_krylov", modulecode_scipy$optimize$_trustregion_krylov, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._trustregion_ncg", modulecode_scipy$optimize$_trustregion_ncg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize._zeros", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize.cobyla", modulecode_scipy$optimize$cobyla, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize.lbfgsb", modulecode_scipy$optimize$lbfgsb, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize.linesearch", modulecode_scipy$optimize$linesearch, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize.minpack", modulecode_scipy$optimize$minpack, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize.minpack2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize.moduleTNC", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.optimize.nonlin", modulecode_scipy$optimize$nonlin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize.optimize", modulecode_scipy$optimize$optimize, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize.slsqp", modulecode_scipy$optimize$slsqp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize.tnc", modulecode_scipy$optimize$tnc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.optimize.zeros", modulecode_scipy$optimize$zeros, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal", modulecode_scipy$signal, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.signal._arraytools", modulecode_scipy$signal$_arraytools, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal._max_len_seq", modulecode_scipy$signal$_max_len_seq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal._max_len_seq_inner", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.signal._peak_finding", modulecode_scipy$signal$_peak_finding, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal._peak_finding_utils", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.signal._savitzky_golay", modulecode_scipy$signal$_savitzky_golay, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal._sosfilt", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.signal._spectral", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.signal._upfirdn", modulecode_scipy$signal$_upfirdn, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal._upfirdn_apply", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.signal.bsplines", modulecode_scipy$signal$bsplines, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal.filter_design", modulecode_scipy$signal$filter_design, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal.fir_filter_design", modulecode_scipy$signal$fir_filter_design, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal.lti_conversion", modulecode_scipy$signal$lti_conversion, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal.ltisys", modulecode_scipy$signal$ltisys, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal.signaltools", modulecode_scipy$signal$signaltools, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal.sigtools", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.signal.spectral", modulecode_scipy$signal$spectral, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal.spline", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.signal.waveforms", modulecode_scipy$signal$waveforms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal.wavelets", modulecode_scipy$signal$wavelets, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.signal.windows", modulecode_scipy$signal$windows, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.signal.windows.windows", modulecode_scipy$signal$windows$windows, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse", modulecode_scipy$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.sparse._csparsetools", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse._index", modulecode_scipy$sparse$_index, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse._matrix_io", modulecode_scipy$sparse$_matrix_io, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse._sparsetools", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.base", modulecode_scipy$sparse$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.bsr", modulecode_scipy$sparse$bsr, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.compressed", modulecode_scipy$sparse$compressed, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.construct", modulecode_scipy$sparse$construct, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.coo", modulecode_scipy$sparse$coo, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.csc", modulecode_scipy$sparse$csc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.csgraph", modulecode_scipy$sparse$csgraph, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.sparse.csgraph._flow", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.csgraph._laplacian", modulecode_scipy$sparse$csgraph$_laplacian, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.csgraph._matching", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.csgraph._min_spanning_tree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.csgraph._reordering", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.csgraph._shortest_path", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.csgraph._tools", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.csgraph._traversal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.csgraph._validation", modulecode_scipy$sparse$csgraph$_validation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.csr", modulecode_scipy$sparse$csr, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.data", modulecode_scipy$sparse$data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.dia", modulecode_scipy$sparse$dia, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.dok", modulecode_scipy$sparse$dok, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.extract", modulecode_scipy$sparse$extract, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.lil", modulecode_scipy$sparse$lil, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg", modulecode_scipy$sparse$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.sparse.linalg._expm_multiply", modulecode_scipy$sparse$linalg$_expm_multiply, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg._norm", modulecode_scipy$sparse$linalg$_norm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg._onenormest", modulecode_scipy$sparse$linalg$_onenormest, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.dsolve", modulecode_scipy$sparse$linalg$dsolve, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.sparse.linalg.dsolve._add_newdocs", modulecode_scipy$sparse$linalg$dsolve$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.dsolve._superlu", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.linalg.dsolve.linsolve", modulecode_scipy$sparse$linalg$dsolve$linsolve, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.eigen", modulecode_scipy$sparse$linalg$eigen, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.sparse.linalg.eigen.arpack", modulecode_scipy$sparse$linalg$eigen$arpack, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.sparse.linalg.eigen.arpack._arpack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.linalg.eigen.arpack.arpack", modulecode_scipy$sparse$linalg$eigen$arpack$arpack, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.eigen.lobpcg", modulecode_scipy$sparse$linalg$eigen$lobpcg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.sparse.linalg.eigen.lobpcg.lobpcg", modulecode_scipy$sparse$linalg$eigen$lobpcg$lobpcg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.interface", modulecode_scipy$sparse$linalg$interface, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.isolve", modulecode_scipy$sparse$linalg$isolve, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.sparse.linalg.isolve._gcrotmk", modulecode_scipy$sparse$linalg$isolve$_gcrotmk, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.isolve._iterative", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.sparse.linalg.isolve.iterative", modulecode_scipy$sparse$linalg$isolve$iterative, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.isolve.lgmres", modulecode_scipy$sparse$linalg$isolve$lgmres, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.isolve.lsmr", modulecode_scipy$sparse$linalg$isolve$lsmr, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.isolve.lsqr", modulecode_scipy$sparse$linalg$isolve$lsqr, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.isolve.minres", modulecode_scipy$sparse$linalg$isolve$minres, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.isolve.utils", modulecode_scipy$sparse$linalg$isolve$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.linalg.matfuncs", modulecode_scipy$sparse$linalg$matfuncs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.spfuncs", modulecode_scipy$sparse$spfuncs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.sparse.sputils", modulecode_scipy$sparse$sputils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.spatial", modulecode_scipy$spatial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.spatial._distance_pybind", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.spatial._distance_wrap", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.spatial._geometric_slerp", modulecode_scipy$spatial$_geometric_slerp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.spatial._hausdorff", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.spatial._plotutils", modulecode_scipy$spatial$_plotutils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.spatial._procrustes", modulecode_scipy$spatial$_procrustes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.spatial._spherical_voronoi", modulecode_scipy$spatial$_spherical_voronoi, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.spatial._voronoi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.spatial.ckdtree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.spatial.distance", modulecode_scipy$spatial$distance, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.spatial.kdtree", modulecode_scipy$spatial$kdtree, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.spatial.qhull", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.spatial.transform", modulecode_scipy$spatial$transform, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.spatial.transform._rotation_groups", modulecode_scipy$spatial$transform$_rotation_groups, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.spatial.transform._rotation_spline", modulecode_scipy$spatial$transform$_rotation_spline, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.spatial.transform.rotation", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.special", modulecode_scipy$special, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.special._basic", modulecode_scipy$special$_basic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.special._comb", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.special._ellip_harm", modulecode_scipy$special$_ellip_harm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.special._ellip_harm_2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.special._lambertw", modulecode_scipy$special$_lambertw, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.special._logsumexp", modulecode_scipy$special$_logsumexp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.special._spherical_bessel", modulecode_scipy$special$_spherical_bessel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.special._ufuncs", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.special._ufuncs_cxx", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.special.cython_special", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.special.orthogonal", modulecode_scipy$special$orthogonal, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.special.sf_error", modulecode_scipy$special$sf_error, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.special.specfun", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.special.spfun_stats", modulecode_scipy$special$spfun_stats, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats", modulecode_scipy$stats, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.stats._binned_statistic", modulecode_scipy$stats$_binned_statistic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._binomtest", modulecode_scipy$stats$_binomtest, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._boost", modulecode_scipy$stats$_boost, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"scipy.stats._boost.beta_ufunc", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.stats._boost.binom_ufunc", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.stats._boost.nbinom_ufunc", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.stats._bootstrap", modulecode_scipy$stats$_bootstrap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._common", modulecode_scipy$stats$_common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._constants", modulecode_scipy$stats$_constants, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._continuous_distns", modulecode_scipy$stats$_continuous_distns, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._crosstab", modulecode_scipy$stats$_crosstab, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._discrete_distns", modulecode_scipy$stats$_discrete_distns, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._distn_infrastructure", modulecode_scipy$stats$_distn_infrastructure, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._distr_params", modulecode_scipy$stats$_distr_params, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._entropy", modulecode_scipy$stats$_entropy, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._hypotests", modulecode_scipy$stats$_hypotests, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._ksstats", modulecode_scipy$stats$_ksstats, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._mannwhitneyu", modulecode_scipy$stats$_mannwhitneyu, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._multivariate", modulecode_scipy$stats$_multivariate, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._page_trend_test", modulecode_scipy$stats$_page_trend_test, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._qmc", modulecode_scipy$stats$_qmc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._qmc_cy", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.stats._relative_risk", modulecode_scipy$stats$_relative_risk, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._rvs_sampling", modulecode_scipy$stats$_rvs_sampling, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._sobol", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.stats._stats", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.stats._stats_mstats_common", modulecode_scipy$stats$_stats_mstats_common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._tukeylambda_stats", modulecode_scipy$stats$_tukeylambda_stats, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats._wilcoxon_data", modulecode_scipy$stats$_wilcoxon_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats.biasedurn", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.stats.contingency", modulecode_scipy$stats$contingency, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats.distributions", modulecode_scipy$stats$distributions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats.kde", modulecode_scipy$stats$kde, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats.morestats", modulecode_scipy$stats$morestats, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats.mstats", modulecode_scipy$stats$mstats, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats.mstats_basic", modulecode_scipy$stats$mstats_basic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats.mstats_extras", modulecode_scipy$stats$mstats_extras, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats.mvn", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.stats.qmc", modulecode_scipy$stats$qmc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.stats.statlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"scipy.stats.stats", modulecode_scipy$stats$stats, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"scipy.version", modulecode_scipy$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"setuptools", NULL, 76, 8572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools._deprecation_warning", NULL, 77, 498, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools._imp", NULL, 78, 2033, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.archive_util", NULL, 79, 5762, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command", NULL, 80, 616, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.command.bdist_egg", NULL, 81, 12985, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.bdist_rpm", NULL, 82, 1305, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.develop", NULL, 83, 6404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.easy_install", NULL, 84, 64823, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.egg_info", NULL, 85, 21669, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.install", NULL, 86, 3984, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.install_scripts", NULL, 87, 2298, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.py36compat", NULL, 88, 4537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.sdist", NULL, 89, 7245, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.command.setopt", NULL, 90, 4483, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.config", NULL, 91, 19096, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.depends", NULL, 92, 5197, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.dist", NULL, 93, 32284, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.extension", NULL, 94, 1892, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.extern", NULL, 95, 2654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.glob", NULL, 96, 3642, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.installer", NULL, 97, 2719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.monkey", NULL, 98, 4561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.namespaces", NULL, 99, 3548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.package_index", NULL, 100, 33042, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.py34compat", NULL, 101, 428, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.sandbox", NULL, 102, 15722, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.ssl_support", NULL, 103, 6809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.unicode_utils", NULL, 104, 1062, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.version", NULL, 105, 233, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.wheel", NULL, 106, 7228, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"setuptools.windows_support", NULL, 107, 971, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"slycot", modulecode_slycot, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"slycot._wrapper", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"slycot.analysis", modulecode_slycot$analysis, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"slycot.exceptions", modulecode_slycot$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"slycot.math", modulecode_slycot$math, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"slycot.synthesis", modulecode_slycot$synthesis, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"slycot.transform", modulecode_slycot$transform, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"slycot.version", modulecode_slycot$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"termios", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"typing_extensions", modulecode_typing_extensions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"vlc", modulecode_vlc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"__future__", NULL, 108, 4089, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_aix_support", NULL, 109, 2841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 110, 1190, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_bootsubprocess", NULL, 111, 2208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_collections_abc", NULL, 112, 31669, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 113, 5451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 114, 4161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 115, 7734, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 116, 11546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_py_abc", NULL, 117, 4619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 118, 74446, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 119, 3464, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 120, 15972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_sysconfigdata__arm-linux-gnueabihf", NULL, 121, 21449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_sysconfigdata__linux_arm-linux-gnueabihf", NULL, 122, 21455, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 123, 6469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 124, 7636, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 125, 5301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 126, 25229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 127, 63671, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 128, 52244, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 129, 6785, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 130, 735, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 131, 51987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 132, 1873, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 133, 9375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 134, 1909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 135, 546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 136, 6602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 137, 28066, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.exceptions", NULL, 138, 2518, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 139, 2289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 140, 11794, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 141, 14394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 142, 191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 143, 24314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 144, 8579, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 145, 8481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 146, 2171, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 147, 29796, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 148, 21521, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.staggered", NULL, 149, 4125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 150, 20551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 151, 7299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 152, 24138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.threads", NULL, 153, 943, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 154, 12211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.trsock", NULL, 155, 8534, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.unix_events", NULL, 156, 42020, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 157, 15999, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 158, 16418, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 159, 24503, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 160, 12928, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 161, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 162, 11390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 163, 5058, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 164, 26994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 165, 26445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 166, 10149, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 167, 4804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 168, 12639, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"code", NULL, 169, 9879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 170, 33851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 171, 6421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 172, 48055, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 173, 31668, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 174, 3223, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 175, 12509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 176, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 177, 1064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 178, 22227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 179, 20705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 180, 5725, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 181, 45617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 182, 19451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 183, 208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 184, 6937, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 185, 4393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"crypt", NULL, 186, 3476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 187, 11812, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 188, 16388, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 189, 9799, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 190, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 191, 8298, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"curses", NULL, 192, 1815, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"curses.ascii", NULL, 193, 3796, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"curses.has_key", NULL, 194, 4252, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"curses.panel", NULL, 195, 188, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"curses.textpad", NULL, 196, 5870, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 197, 23122, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 198, 58060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dbm", NULL, 199, 4187, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 200, 7878, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dbm.ndbm", NULL, 201, 167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 202, 160573, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 203, 59584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 204, 15783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 205, 340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.archive_util", NULL, 206, 6550, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 207, 6461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 208, 33150, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 209, 13889, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 210, 429, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 211, 3568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 212, 3551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 213, 12188, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 214, 8670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 215, 3844, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 216, 4763, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 217, 16165, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 218, 10396, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 219, 4293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 220, 4872, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 221, 2045, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 222, 10175, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 223, 14559, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 224, 2248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 225, 3397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 226, 1673, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 227, 5172, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 228, 2096, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 229, 8416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 230, 14443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 231, 5166, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 232, 3492, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 233, 6617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 234, 8466, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 235, 159, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 236, 2679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 237, 6134, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 238, 34311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 239, 5215, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 240, 6880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 241, 10588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 242, 5946, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 243, 9798, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 244, 2278, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 245, 14670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 246, 3310, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 247, 12717, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 248, 8404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 249, 7060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 250, 15553, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 251, 7304, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 252, 5088, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 253, 75969, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email", NULL, 254, 1621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 255, 5645, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 256, 79746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 257, 12334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 258, 14771, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 259, 3202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 260, 11416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 261, 7328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 262, 1585, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 263, 5874, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 264, 10572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 265, 12548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 266, 16395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 267, 21929, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 268, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 269, 37803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 270, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 271, 1424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 272, 2589, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 273, 1010, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 274, 1869, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 275, 1247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 276, 1467, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 277, 729, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 278, 1274, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 279, 5709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 280, 9602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 281, 7637, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 282, 9403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 283, 3851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 284, 6293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 285, 1846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 286, 2333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 287, 1374, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 288, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 289, 3222, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 290, 2856, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 291, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 292, 2463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 293, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 294, 8094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 295, 2377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 296, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 297, 2411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 298, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 299, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 300, 2416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 301, 2435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 302, 2413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 303, 2421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 304, 2419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 305, 2373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 306, 2417, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 307, 7811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 308, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 309, 2484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 310, 8133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 311, 7841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 312, 7472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 313, 7849, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 314, 8102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 315, 2449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 316, 7452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 317, 7442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 318, 7790, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 319, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 320, 7994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 321, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 322, 7949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 323, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 324, 8138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 325, 7829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 326, 2515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 327, 2384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 328, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 329, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 330, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 331, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 332, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 333, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 334, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 335, 1380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 336, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 337, 1372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 338, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 339, 2588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 340, 1370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 341, 5562, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 342, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 343, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 344, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 345, 1401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 346, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 347, 1399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 348, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 349, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 350, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 351, 2485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 352, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 353, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 354, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 355, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 356, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 357, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 358, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 359, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 360, 2431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 361, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 362, 2425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 363, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 364, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 365, 2438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 366, 2349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 367, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 368, 2401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 369, 1858, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 370, 7705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 371, 2433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 372, 2423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 373, 2367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 374, 2407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 375, 2426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 376, 2567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 377, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 378, 2434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 379, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 380, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 381, 2508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 382, 6272, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 383, 2359, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 384, 1727, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 385, 2966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 386, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 387, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 388, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 389, 2476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 390, 2060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 391, 1707, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 392, 4835, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 393, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 394, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 395, 4728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 396, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 397, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 398, 1536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 399, 1595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 400, 4507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 401, 3195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 402, 3043, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 403, 25605, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 404, 8460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 405, 13753, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 406, 3905, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 407, 17502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 408, 18012, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 409, 28503, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 410, 28145, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 411, 3987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 412, 6223, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 413, 4162, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 414, 18151, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 415, 4307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"graphlib", NULL, 416, 7531, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 417, 18464, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 418, 6654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 419, 14003, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 420, 6763, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html", NULL, 421, 3079, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 422, 50484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 423, 10818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http", NULL, 424, 6367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 425, 34654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 426, 53468, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 427, 15253, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 428, 34360, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 429, 42375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 430, 4103, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 431, 9814, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 432, 3787, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 433, 28931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 434, 43683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib._common", NULL, 435, 1662, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 436, 16780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 437, 927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.metadata", NULL, 438, 21584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 439, 6354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 440, 9285, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 441, 81354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"io", NULL, 442, 3371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 443, 62365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json", NULL, 444, 12247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 445, 9771, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 446, 11094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 447, 1916, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 448, 2690, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 449, 879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 450, 256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 451, 4840, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 452, 6111, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 453, 6218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 454, 12133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 455, 91, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 456, 1622, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 457, 1237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 458, 621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 459, 766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 460, 3269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 461, 2764, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 462, 1091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 463, 1639, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 464, 2264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 465, 2400, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 466, 934, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 467, 742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 468, 746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 469, 2861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 470, 3863, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 471, 2741, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 472, 4345, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 473, 504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 474, 908, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 475, 1092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 476, 1509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 477, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 478, 1520, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 479, 663, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 480, 3055, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 481, 5289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 482, 896, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 483, 769, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 484, 3013, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 485, 881, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 486, 981, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 487, 4178, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 488, 1348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 489, 2281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 490, 2207, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 491, 753, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 492, 1086, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 493, 1104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 494, 1961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 495, 803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 496, 1637, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 497, 678, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 498, 1365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 499, 1762, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 500, 4539, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 501, 1791, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 502, 1507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 503, 5818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 504, 1077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 505, 2487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 506, 1077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 507, 1537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 508, 8652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 509, 5568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 510, 121, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 511, 4943, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 512, 5670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 513, 1494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 514, 6443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 515, 9685, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 516, 1852, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 517, 15112, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 518, 1225, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 519, 24258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 520, 20606, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 521, 3990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 522, 34644, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 523, 66117, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 524, 23220, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 525, 43834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 526, 11941, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 527, 60563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 528, 6472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 529, 16006, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 530, 16091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 531, 608, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 532, 25623, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 533, 12983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 534, 3819, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 535, 2548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 536, 8380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 537, 7598, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 538, 40855, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 539, 25101, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_fork", NULL, 540, 2475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_forkserver", NULL, 541, 2408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_posix", NULL, 542, 2311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 543, 10972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 544, 10157, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 545, 8248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 546, 5247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_tracker", NULL, 547, 5420, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.shared_memory", NULL, 548, 14405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 549, 7060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 550, 6684, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 551, 11351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 552, 11470, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 553, 3746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 554, 31726, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 555, 14505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 556, 1566, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 557, 12188, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 558, 5186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 559, 13711, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 560, 47906, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"os", NULL, 561, 31609, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 562, 44355, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 563, 47092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 564, 47062, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 565, 67070, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 566, 7758, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 567, 18502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 568, 26282, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 569, 23510, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 570, 13620, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 571, 10292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 572, 16793, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 573, 14353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 574, 23715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pty", NULL, 575, 3919, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 576, 7327, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 577, 10412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 578, 86156, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 579, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 580, 428528, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 581, 10826, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 582, 5710, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"random", NULL, 583, 21872, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"re", NULL, 584, 14325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 585, 5270, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 586, 5712, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 587, 8472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 588, 6596, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 589, 2143, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 590, 17208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 591, 9507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 592, 7697, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 593, 37321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 594, 2786, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"site", NULL, 595, 14037, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sitecustomize", NULL, 596, 183, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 597, 26487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 598, 35505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 599, 6956, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 600, 29051, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 601, 24130, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 602, 116, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 603, 2461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 604, 1886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 605, 15016, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 606, 6280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 607, 21566, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 608, 44555, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 609, 4335, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 610, 31942, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"string", NULL, 611, 7128, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 612, 9949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 613, 269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 614, 44122, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 615, 16780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 616, 2542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 617, 11129, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 618, 16088, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 619, 7028, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 620, 63037, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 621, 18294, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 622, 26376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 623, 13484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"this", NULL, 624, 1222, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 625, 41443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 626, 11719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter", NULL, 627, 176005, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"tkinter.colorchooser", NULL, 628, 2238, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.commondialog", NULL, 629, 1141, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.constants", NULL, 630, 1619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.dialog", NULL, 631, 1462, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.dnd", NULL, 632, 11250, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.filedialog", NULL, 633, 12506, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.font", NULL, 634, 6345, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.messagebox", NULL, 635, 3045, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.scrolledtext", NULL, 636, 2146, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.simpledialog", NULL, 637, 10639, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.tix", NULL, 638, 79230, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.ttk", NULL, 639, 56714, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"token", NULL, 640, 2459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 641, 17100, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 642, 19702, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 643, 20166, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 644, 17898, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tty", NULL, 645, 1041, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"turtle", NULL, 646, 129434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"types", NULL, 647, 9184, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 648, 71276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 649, 3352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest._log", NULL, 650, 2486, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.async_case", NULL, 651, 4196, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.case", NULL, 652, 48071, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 653, 14481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 654, 7475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 655, 77936, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 656, 7254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 657, 7029, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 658, 2205, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 659, 10208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 660, 4401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 661, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 662, 2789, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 663, 34714, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 664, 72208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 665, 3419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 666, 7290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 667, 3629, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 668, 22473, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 669, 15795, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"warnings", NULL, 670, 13568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 671, 17836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 672, 20121, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 673, 17097, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 674, 680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 675, 16339, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 676, 7697, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 677, 5264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 678, 5358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 679, 14720, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 680, 8206, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 681, 646, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 682, 5492, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 683, 932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 684, 2813, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 685, 27273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 686, 2704, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 687, 56274, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 688, 10654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 689, 12440, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 690, 87, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 691, 2397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 692, 8377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 693, 56215, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 694, 138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 695, 261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 696, 299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 697, 3154, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 698, 5409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 699, 12545, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 700, 12387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 701, 12886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 702, 16809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 703, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 704, 34482, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 705, 29337, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 706, 5948, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 707, 58857, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zoneinfo", NULL, 708, 765, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"zoneinfo._common", NULL, 709, 3069, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zoneinfo._tzpath", NULL, 710, 4009, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zoneinfo._zoneinfo", NULL, 711, 15431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 112, 31669},
    {"_compression", 114, 4161},
    {"_weakrefset", 124, 7636},
    {"abc", 125, 5301},
    {"ast", 128, 52244},
    {"base64", 158, 16418},
    {"bz2", 162, 11390},
    {"codecs", 170, 33851},
    {"collections", 172, -48055},
    {"collections.abc", 173, 31668},
    {"contextlib", 182, 19451},
    {"copyreg", 185, 4393},
    {"dis", 204, 15783},
    {"encodings", 283, -3851},
    {"encodings.aliases", 284, 6293},
    {"encodings.ascii", 285, 1846},
    {"encodings.base64_codec", 286, 2333},
    {"encodings.big5", 287, 1374},
    {"encodings.big5hkscs", 288, 1384},
    {"encodings.bz2_codec", 289, 3222},
    {"encodings.charmap", 290, 2856},
    {"encodings.cp037", 291, 2387},
    {"encodings.cp1006", 292, 2463},
    {"encodings.cp1026", 293, 2391},
    {"encodings.cp1125", 294, 8094},
    {"encodings.cp1140", 295, 2377},
    {"encodings.cp1250", 296, 2414},
    {"encodings.cp1251", 297, 2411},
    {"encodings.cp1252", 298, 2414},
    {"encodings.cp1253", 299, 2427},
    {"encodings.cp1254", 300, 2416},
    {"encodings.cp1255", 301, 2435},
    {"encodings.cp1256", 302, 2413},
    {"encodings.cp1257", 303, 2421},
    {"encodings.cp1258", 304, 2419},
    {"encodings.cp273", 305, 2373},
    {"encodings.cp424", 306, 2417},
    {"encodings.cp437", 307, 7811},
    {"encodings.cp500", 308, 2387},
    {"encodings.cp720", 309, 2484},
    {"encodings.cp737", 310, 8133},
    {"encodings.cp775", 311, 7841},
    {"encodings.cp850", 312, 7472},
    {"encodings.cp852", 313, 7849},
    {"encodings.cp855", 314, 8102},
    {"encodings.cp856", 315, 2449},
    {"encodings.cp857", 316, 7452},
    {"encodings.cp858", 317, 7442},
    {"encodings.cp860", 318, 7790},
    {"encodings.cp861", 319, 7805},
    {"encodings.cp862", 320, 7994},
    {"encodings.cp863", 321, 7805},
    {"encodings.cp864", 322, 7949},
    {"encodings.cp865", 323, 7805},
    {"encodings.cp866", 324, 8138},
    {"encodings.cp869", 325, 7829},
    {"encodings.cp874", 326, 2515},
    {"encodings.cp875", 327, 2384},
    {"encodings.cp932", 328, 1376},
    {"encodings.cp949", 329, 1376},
    {"encodings.cp950", 330, 1376},
    {"encodings.euc_jis_2004", 331, 1390},
    {"encodings.euc_jisx0213", 332, 1390},
    {"encodings.euc_jp", 333, 1378},
    {"encodings.euc_kr", 334, 1378},
    {"encodings.gb18030", 335, 1380},
    {"encodings.gb2312", 336, 1378},
    {"encodings.gbk", 337, 1372},
    {"encodings.hex_codec", 338, 2320},
    {"encodings.hp_roman8", 339, 2588},
    {"encodings.hz", 340, 1370},
    {"encodings.idna", 341, 5562},
    {"encodings.iso2022_jp", 342, 1391},
    {"encodings.iso2022_jp_1", 343, 1395},
    {"encodings.iso2022_jp_2", 344, 1395},
    {"encodings.iso2022_jp_2004", 345, 1401},
    {"encodings.iso2022_jp_3", 346, 1395},
    {"encodings.iso2022_jp_ext", 347, 1399},
    {"encodings.iso2022_kr", 348, 1391},
    {"encodings.iso8859_1", 349, 2386},
    {"encodings.iso8859_10", 350, 2391},
    {"encodings.iso8859_11", 351, 2485},
    {"encodings.iso8859_13", 352, 2394},
    {"encodings.iso8859_14", 353, 2412},
    {"encodings.iso8859_15", 354, 2391},
    {"encodings.iso8859_16", 355, 2393},
    {"encodings.iso8859_2", 356, 2386},
    {"encodings.iso8859_3", 357, 2393},
    {"encodings.iso8859_4", 358, 2386},
    {"encodings.iso8859_5", 359, 2387},
    {"encodings.iso8859_6", 360, 2431},
    {"encodings.iso8859_7", 361, 2394},
    {"encodings.iso8859_8", 362, 2425},
    {"encodings.iso8859_9", 363, 2386},
    {"encodings.johab", 364, 1376},
    {"encodings.koi8_r", 365, 2438},
    {"encodings.koi8_t", 366, 2349},
    {"encodings.koi8_u", 367, 2424},
    {"encodings.kz1048", 368, 2401},
    {"encodings.latin_1", 369, 1858},
    {"encodings.mac_arabic", 370, 7705},
    {"encodings.mac_croatian", 371, 2433},
    {"encodings.mac_cyrillic", 372, 2423},
    {"encodings.mac_farsi", 373, 2367},
    {"encodings.mac_greek", 374, 2407},
    {"encodings.mac_iceland", 375, 2426},
    {"encodings.mac_latin2", 376, 2567},
    {"encodings.mac_roman", 377, 2424},
    {"encodings.mac_romanian", 378, 2434},
    {"encodings.mac_turkish", 379, 2427},
    {"encodings.palmos", 380, 2414},
    {"encodings.ptcp154", 381, 2508},
    {"encodings.punycode", 382, 6272},
    {"encodings.quopri_codec", 383, 2359},
    {"encodings.raw_unicode_escape", 384, 1727},
    {"encodings.rot_13", 385, 2966},
    {"encodings.shift_jis", 386, 1384},
    {"encodings.shift_jis_2004", 387, 1394},
    {"encodings.shift_jisx0213", 388, 1394},
    {"encodings.tis_620", 389, 2476},
    {"encodings.undefined", 390, 2060},
    {"encodings.unicode_escape", 391, 1707},
    {"encodings.utf_16", 392, 4835},
    {"encodings.utf_16_be", 393, 1615},
    {"encodings.utf_16_le", 394, 1615},
    {"encodings.utf_32", 395, 4728},
    {"encodings.utf_32_be", 396, 1508},
    {"encodings.utf_32_le", 397, 1508},
    {"encodings.utf_7", 398, 1536},
    {"encodings.utf_8", 399, 1595},
    {"encodings.utf_8_sig", 400, 4507},
    {"encodings.uu_codec", 401, 3195},
    {"encodings.zlib_codec", 402, 3043},
    {"enum", 403, 25605},
    {"functools", 410, 28145},
    {"genericpath", 411, 3987},
    {"heapq", 419, 14003},
    {"importlib", 432, -3787},
    {"importlib._bootstrap", 433, 28931},
    {"importlib._bootstrap_external", 434, 43683},
    {"importlib.machinery", 437, 927},
    {"inspect", 441, 81354},
    {"io", 442, 3371},
    {"keyword", 449, 879},
    {"linecache", 521, 3990},
    {"locale", 522, 34644},
    {"opcode", 558, 5186},
    {"operator", 559, 13711},
    {"os", 561, 31609},
    {"posixpath", 571, 10292},
    {"quopri", 582, 5710},
    {"re", 584, 14325},
    {"reprlib", 585, 5270},
    {"sre_compile", 605, 15016},
    {"sre_constants", 606, 6280},
    {"sre_parse", 607, 21566},
    {"stat", 609, 4335},
    {"stringprep", 612, 9949},
    {"struct", 613, 269},
    {"threading", 625, 41443},
    {"token", 640, 2459},
    {"tokenize", 641, 17100},
    {"types", 647, 9184},
    {"warnings", 670, 13568},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

