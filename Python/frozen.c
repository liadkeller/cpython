
/* Frozen modules initializer
 *
 * Frozen modules are written to header files by Programs/_freeze_module.
 * These files are typically put in Python/frozen_modules/.  Each holds
 * an array of bytes named "_Py_M__<module>", which is used below.
 *
 * These files must be regenerated any time the corresponding .pyc
 * file would change (including with changes to the compiler, bytecode
 * format, marshal format).  This can be done with "make regen-frozen".
 * That make target just runs Tools/build/freeze_modules.py.
 *
 * The freeze_modules.py script also determines which modules get
 * frozen.  Update the list at the top of the script to add, remove,
 * or modify the target modules.  Then run the script
 * (or run "make regen-frozen").
 *
 * The script does the following:
 *
 * 1. run Programs/_freeze_module on the target modules
 * 2. update the includes and _PyImport_FrozenModules[] in this file
 * 3. update the FROZEN_FILES variable in Makefile.pre.in
 * 4. update the per-module targets in Makefile.pre.in
 * 5. update the lists of modules in PCbuild/_freeze_module.vcxproj and
 *    PCbuild/_freeze_module.vcxproj.filters
 *
 * (Note that most of the data in this file is auto-generated by the script.)
 *
 * Those steps can also be done manually, though this is not recommended.
 * Expect such manual changes to be removed the next time
 * freeze_modules.py runs.
 * */

/* In order to test the support for frozen modules, by default we
   define some simple frozen modules: __hello__, __phello__ (a package),
   and __phello__.spam.  Loading any will print some famous words... */

#include "Python.h"
#include "pycore_import.h"

#include <stdbool.h>

/* Includes for frozen modules: */
#include "frozen_modules/importlib._bootstrap.h"
#include "frozen_modules/importlib._bootstrap_external.h"
#include "frozen_modules/zipimport.h"
#include "frozen_modules/abc.h"
#include "frozen_modules/codecs.h"
#include "frozen_modules/io.h"
#include "frozen_modules/encodings.h"
#include "frozen_modules/encodings.aliases.h"
#include "frozen_modules/encodings.ascii.h"
#include "frozen_modules/encodings.base64_codec.h"
#include "frozen_modules/encodings.charmap.h"
#include "frozen_modules/encodings.hex_codec.h"
#include "frozen_modules/encodings.koi8_t.h"
#include "frozen_modules/encodings.koi8_u.h"
#include "frozen_modules/encodings.kz1048.h"
#include "frozen_modules/encodings.latin_1.h"
#include "frozen_modules/encodings.mac_arabic.h"
#include "frozen_modules/encodings.mac_croatian.h"
#include "frozen_modules/encodings.mac_cyrillic.h"
#include "frozen_modules/encodings.mac_farsi.h"
#include "frozen_modules/encodings.mac_greek.h"
#include "frozen_modules/encodings.mac_iceland.h"
#include "frozen_modules/encodings.mac_latin2.h"
#include "frozen_modules/encodings.mac_roman.h"
#include "frozen_modules/encodings.mac_romanian.h"
#include "frozen_modules/encodings.mac_turkish.h"
#include "frozen_modules/encodings.mbcs.h"
#include "frozen_modules/encodings.oem.h"
#include "frozen_modules/encodings.palmos.h"
#include "frozen_modules/encodings.ptcp154.h"
#include "frozen_modules/encodings.punycode.h"
#include "frozen_modules/encodings.quopri_codec.h"
#include "frozen_modules/encodings.raw_unicode_escape.h"
#include "frozen_modules/encodings.rot_13.h"
#include "frozen_modules/encodings.shift_jis.h"
#include "frozen_modules/encodings.shift_jis_2004.h"
#include "frozen_modules/encodings.undefined.h"
#include "frozen_modules/encodings.unicode_escape.h"
#include "frozen_modules/encodings.utf_16.h"
#include "frozen_modules/encodings.utf_16_be.h"
#include "frozen_modules/encodings.utf_16_le.h"
#include "frozen_modules/encodings.utf_32.h"
#include "frozen_modules/encodings.utf_32_be.h"
#include "frozen_modules/encodings.utf_32_le.h"
#include "frozen_modules/encodings.utf_8.h"
#include "frozen_modules/encodings.utf_8_sig.h"
#include "frozen_modules/encodings.uu_codec.h"
#include "frozen_modules/encodings.zlib_codec.h"
#include "frozen_modules/_collections_abc.h"
#include "frozen_modules/_sitebuiltins.h"
#include "frozen_modules/genericpath.h"
#include "frozen_modules/ntpath.h"
#include "frozen_modules/posixpath.h"
#include "frozen_modules/os.h"
#include "frozen_modules/site.h"
#include "frozen_modules/stat.h"
#include "frozen_modules/importlib.util.h"
#include "frozen_modules/importlib.machinery.h"
#include "frozen_modules/runpy.h"
#include "frozen_modules/__hello__.h"
#include "frozen_modules/__phello__.h"
#include "frozen_modules/__phello__.ham.h"
#include "frozen_modules/__phello__.ham.eggs.h"
#include "frozen_modules/__phello__.spam.h"
#include "frozen_modules/frozen_only.h"
/* End includes */

#define GET_CODE(name) _Py_get_##name##_toplevel

/* Start extern declarations */
extern PyObject *_Py_get_importlib__bootstrap_toplevel(void);
extern PyObject *_Py_get_importlib__bootstrap_external_toplevel(void);
extern PyObject *_Py_get_zipimport_toplevel(void);
extern PyObject *_Py_get_abc_toplevel(void);
extern PyObject *_Py_get_codecs_toplevel(void);
extern PyObject *_Py_get_io_toplevel(void);
extern PyObject *_Py_get_encodings_toplevel(void);
extern PyObject *_Py_get_encodings_toplevel(void);
extern PyObject *_Py_get_encodings_aliases_toplevel(void);
extern PyObject *_Py_get_encodings_ascii_toplevel(void);
extern PyObject *_Py_get_encodings_base64_codec_toplevel(void);
extern PyObject *_Py_get_encodings_charmap_toplevel(void);
extern PyObject *_Py_get_encodings_hex_codec_toplevel(void);
extern PyObject *_Py_get_encodings_koi8_t_toplevel(void);
extern PyObject *_Py_get_encodings_koi8_u_toplevel(void);
extern PyObject *_Py_get_encodings_kz1048_toplevel(void);
extern PyObject *_Py_get_encodings_latin_1_toplevel(void);
extern PyObject *_Py_get_encodings_mac_arabic_toplevel(void);
extern PyObject *_Py_get_encodings_mac_croatian_toplevel(void);
extern PyObject *_Py_get_encodings_mac_cyrillic_toplevel(void);
extern PyObject *_Py_get_encodings_mac_farsi_toplevel(void);
extern PyObject *_Py_get_encodings_mac_greek_toplevel(void);
extern PyObject *_Py_get_encodings_mac_iceland_toplevel(void);
extern PyObject *_Py_get_encodings_mac_latin2_toplevel(void);
extern PyObject *_Py_get_encodings_mac_roman_toplevel(void);
extern PyObject *_Py_get_encodings_mac_romanian_toplevel(void);
extern PyObject *_Py_get_encodings_mac_turkish_toplevel(void);
extern PyObject *_Py_get_encodings_mbcs_toplevel(void);
extern PyObject *_Py_get_encodings_oem_toplevel(void);
extern PyObject *_Py_get_encodings_palmos_toplevel(void);
extern PyObject *_Py_get_encodings_ptcp154_toplevel(void);
extern PyObject *_Py_get_encodings_punycode_toplevel(void);
extern PyObject *_Py_get_encodings_quopri_codec_toplevel(void);
extern PyObject *_Py_get_encodings_raw_unicode_escape_toplevel(void);
extern PyObject *_Py_get_encodings_rot_13_toplevel(void);
extern PyObject *_Py_get_encodings_shift_jis_toplevel(void);
extern PyObject *_Py_get_encodings_shift_jis_2004_toplevel(void);
extern PyObject *_Py_get_encodings_undefined_toplevel(void);
extern PyObject *_Py_get_encodings_unicode_escape_toplevel(void);
extern PyObject *_Py_get_encodings_utf_16_toplevel(void);
extern PyObject *_Py_get_encodings_utf_16_be_toplevel(void);
extern PyObject *_Py_get_encodings_utf_16_le_toplevel(void);
extern PyObject *_Py_get_encodings_utf_32_toplevel(void);
extern PyObject *_Py_get_encodings_utf_32_be_toplevel(void);
extern PyObject *_Py_get_encodings_utf_32_le_toplevel(void);
extern PyObject *_Py_get_encodings_utf_8_toplevel(void);
extern PyObject *_Py_get_encodings_utf_8_sig_toplevel(void);
extern PyObject *_Py_get_encodings_uu_codec_toplevel(void);
extern PyObject *_Py_get_encodings_zlib_codec_toplevel(void);
extern PyObject *_Py_get__collections_abc_toplevel(void);
extern PyObject *_Py_get__sitebuiltins_toplevel(void);
extern PyObject *_Py_get_genericpath_toplevel(void);
extern PyObject *_Py_get_ntpath_toplevel(void);
extern PyObject *_Py_get_posixpath_toplevel(void);
extern PyObject *_Py_get_ntpath_toplevel(void);
extern PyObject *_Py_get_os_toplevel(void);
extern PyObject *_Py_get_site_toplevel(void);
extern PyObject *_Py_get_stat_toplevel(void);
extern PyObject *_Py_get_importlib_util_toplevel(void);
extern PyObject *_Py_get_importlib_machinery_toplevel(void);
extern PyObject *_Py_get_runpy_toplevel(void);
extern PyObject *_Py_get___hello___toplevel(void);
extern PyObject *_Py_get___hello___toplevel(void);
extern PyObject *_Py_get___hello___toplevel(void);
extern PyObject *_Py_get___hello___toplevel(void);
extern PyObject *_Py_get___phello___toplevel(void);
extern PyObject *_Py_get___phello___toplevel(void);
extern PyObject *_Py_get___phello___ham_toplevel(void);
extern PyObject *_Py_get___phello___ham_toplevel(void);
extern PyObject *_Py_get___phello___ham_eggs_toplevel(void);
extern PyObject *_Py_get___phello___spam_toplevel(void);
extern PyObject *_Py_get_frozen_only_toplevel(void);
/* End extern declarations */

static const struct _frozen bootstrap_modules[] = {
    {"_frozen_importlib", _Py_M__importlib__bootstrap, (int)sizeof(_Py_M__importlib__bootstrap), false},
    {"_frozen_importlib_external", _Py_M__importlib__bootstrap_external, (int)sizeof(_Py_M__importlib__bootstrap_external), false},
    {"zipimport", _Py_M__zipimport, (int)sizeof(_Py_M__zipimport), false},
    {0, 0, 0} /* bootstrap sentinel */
};
static const struct _frozen stdlib_modules[] = {
    /* stdlib - startup, without site (python -S) */
    {"abc", _Py_M__abc, (int)sizeof(_Py_M__abc), false},
    {"codecs", _Py_M__codecs, (int)sizeof(_Py_M__codecs), false},
    {"io", _Py_M__io, (int)sizeof(_Py_M__io), false},
    {"encodings", _Py_M__encodings, (int)sizeof(_Py_M__encodings), true},
    {"encodings.__init__", _Py_M__encodings, (int)sizeof(_Py_M__encodings), false},
    {"encodings.aliases", _Py_M__encodings_aliases, (int)sizeof(_Py_M__encodings_aliases), false},
    {"encodings.ascii", _Py_M__encodings_ascii, (int)sizeof(_Py_M__encodings_ascii), false},
    {"encodings.base64_codec", _Py_M__encodings_base64_codec, (int)sizeof(_Py_M__encodings_base64_codec), false},
    {"encodings.charmap", _Py_M__encodings_charmap, (int)sizeof(_Py_M__encodings_charmap), false},
    {"encodings.hex_codec", _Py_M__encodings_hex_codec, (int)sizeof(_Py_M__encodings_hex_codec), false},
    {"encodings.koi8_t", _Py_M__encodings_koi8_t, (int)sizeof(_Py_M__encodings_koi8_t), false},
    {"encodings.koi8_u", _Py_M__encodings_koi8_u, (int)sizeof(_Py_M__encodings_koi8_u), false},
    {"encodings.kz1048", _Py_M__encodings_kz1048, (int)sizeof(_Py_M__encodings_kz1048), false},
    {"encodings.latin_1", _Py_M__encodings_latin_1, (int)sizeof(_Py_M__encodings_latin_1), false},
    {"encodings.mac_arabic", _Py_M__encodings_mac_arabic, (int)sizeof(_Py_M__encodings_mac_arabic), false},
    {"encodings.mac_croatian", _Py_M__encodings_mac_croatian, (int)sizeof(_Py_M__encodings_mac_croatian), false},
    {"encodings.mac_cyrillic", _Py_M__encodings_mac_cyrillic, (int)sizeof(_Py_M__encodings_mac_cyrillic), false},
    {"encodings.mac_farsi", _Py_M__encodings_mac_farsi, (int)sizeof(_Py_M__encodings_mac_farsi), false},
    {"encodings.mac_greek", _Py_M__encodings_mac_greek, (int)sizeof(_Py_M__encodings_mac_greek), false},
    {"encodings.mac_iceland", _Py_M__encodings_mac_iceland, (int)sizeof(_Py_M__encodings_mac_iceland), false},
    {"encodings.mac_latin2", _Py_M__encodings_mac_latin2, (int)sizeof(_Py_M__encodings_mac_latin2), false},
    {"encodings.mac_roman", _Py_M__encodings_mac_roman, (int)sizeof(_Py_M__encodings_mac_roman), false},
    {"encodings.mac_romanian", _Py_M__encodings_mac_romanian, (int)sizeof(_Py_M__encodings_mac_romanian), false},
    {"encodings.mac_turkish", _Py_M__encodings_mac_turkish, (int)sizeof(_Py_M__encodings_mac_turkish), false},
    {"encodings.mbcs", _Py_M__encodings_mbcs, (int)sizeof(_Py_M__encodings_mbcs), false},
    {"encodings.oem", _Py_M__encodings_oem, (int)sizeof(_Py_M__encodings_oem), false},
    {"encodings.palmos", _Py_M__encodings_palmos, (int)sizeof(_Py_M__encodings_palmos), false},
    {"encodings.ptcp154", _Py_M__encodings_ptcp154, (int)sizeof(_Py_M__encodings_ptcp154), false},
    {"encodings.punycode", _Py_M__encodings_punycode, (int)sizeof(_Py_M__encodings_punycode), false},
    {"encodings.quopri_codec", _Py_M__encodings_quopri_codec, (int)sizeof(_Py_M__encodings_quopri_codec), false},
    {"encodings.raw_unicode_escape", _Py_M__encodings_raw_unicode_escape, (int)sizeof(_Py_M__encodings_raw_unicode_escape), false},
    {"encodings.rot_13", _Py_M__encodings_rot_13, (int)sizeof(_Py_M__encodings_rot_13), false},
    {"encodings.shift_jis", _Py_M__encodings_shift_jis, (int)sizeof(_Py_M__encodings_shift_jis), false},
    {"encodings.shift_jis_2004", _Py_M__encodings_shift_jis_2004, (int)sizeof(_Py_M__encodings_shift_jis_2004), false},
    {"encodings.undefined", _Py_M__encodings_undefined, (int)sizeof(_Py_M__encodings_undefined), false},
    {"encodings.unicode_escape", _Py_M__encodings_unicode_escape, (int)sizeof(_Py_M__encodings_unicode_escape), false},
    {"encodings.utf_16", _Py_M__encodings_utf_16, (int)sizeof(_Py_M__encodings_utf_16), false},
    {"encodings.utf_16_be", _Py_M__encodings_utf_16_be, (int)sizeof(_Py_M__encodings_utf_16_be), false},
    {"encodings.utf_16_le", _Py_M__encodings_utf_16_le, (int)sizeof(_Py_M__encodings_utf_16_le), false},
    {"encodings.utf_32", _Py_M__encodings_utf_32, (int)sizeof(_Py_M__encodings_utf_32), false},
    {"encodings.utf_32_be", _Py_M__encodings_utf_32_be, (int)sizeof(_Py_M__encodings_utf_32_be), false},
    {"encodings.utf_32_le", _Py_M__encodings_utf_32_le, (int)sizeof(_Py_M__encodings_utf_32_le), false},
    {"encodings.utf_8", _Py_M__encodings_utf_8, (int)sizeof(_Py_M__encodings_utf_8), false},
    {"encodings.utf_8_sig", _Py_M__encodings_utf_8_sig, (int)sizeof(_Py_M__encodings_utf_8_sig), false},
    {"encodings.uu_codec", _Py_M__encodings_uu_codec, (int)sizeof(_Py_M__encodings_uu_codec), false},
    {"encodings.zlib_codec", _Py_M__encodings_zlib_codec, (int)sizeof(_Py_M__encodings_zlib_codec), false},

    /* stdlib - startup, with site */
    {"_collections_abc", _Py_M___collections_abc, (int)sizeof(_Py_M___collections_abc), false},
    {"_sitebuiltins", _Py_M___sitebuiltins, (int)sizeof(_Py_M___sitebuiltins), false},
    {"genericpath", _Py_M__genericpath, (int)sizeof(_Py_M__genericpath), false},
    {"ntpath", _Py_M__ntpath, (int)sizeof(_Py_M__ntpath), false},
    {"posixpath", _Py_M__posixpath, (int)sizeof(_Py_M__posixpath), false},
    {"os.path", _Py_M__ntpath, (int)sizeof(_Py_M__ntpath), false},
    {"os", _Py_M__os, (int)sizeof(_Py_M__os), false},
    {"site", _Py_M__site, (int)sizeof(_Py_M__site), false},
    {"stat", _Py_M__stat, (int)sizeof(_Py_M__stat), false},

    /* runpy - run module with -m */
    {"importlib.util", _Py_M__importlib_util, (int)sizeof(_Py_M__importlib_util), false},
    {"importlib.machinery", _Py_M__importlib_machinery, (int)sizeof(_Py_M__importlib_machinery), false},
    {"runpy", _Py_M__runpy, (int)sizeof(_Py_M__runpy), false},
    {0, 0, 0} /* stdlib sentinel */
};
static const struct _frozen test_modules[] = {
    {"__hello__", _Py_M____hello__, (int)sizeof(_Py_M____hello__), false},
    {"__hello_alias__", _Py_M____hello__, (int)sizeof(_Py_M____hello__), false},
    {"__phello_alias__", _Py_M____hello__, (int)sizeof(_Py_M____hello__), true},
    {"__phello_alias__.spam", _Py_M____hello__, (int)sizeof(_Py_M____hello__), false},
    {"__phello__", _Py_M____phello__, (int)sizeof(_Py_M____phello__), true},
    {"__phello__.__init__", _Py_M____phello__, (int)sizeof(_Py_M____phello__), false},
    {"__phello__.ham", _Py_M____phello___ham, (int)sizeof(_Py_M____phello___ham), true},
    {"__phello__.ham.__init__", _Py_M____phello___ham, (int)sizeof(_Py_M____phello___ham), false},
    {"__phello__.ham.eggs", _Py_M____phello___ham_eggs, (int)sizeof(_Py_M____phello___ham_eggs), false},
    {"__phello__.spam", _Py_M____phello___spam, (int)sizeof(_Py_M____phello___spam), false},
    {"__hello_only__", _Py_M__frozen_only, (int)sizeof(_Py_M__frozen_only), false},
    {0, 0, 0} /* test sentinel */
};
const struct _frozen *_PyImport_FrozenBootstrap = bootstrap_modules;
const struct _frozen *_PyImport_FrozenStdlib = stdlib_modules;
const struct _frozen *_PyImport_FrozenTest = test_modules;

static const struct _module_alias aliases[] = {
    {"_frozen_importlib", "importlib._bootstrap"},
    {"_frozen_importlib_external", "importlib._bootstrap_external"},
    {"encodings.__init__", "<encodings"},
    {"os.path", "ntpath"},
    {"__hello_alias__", "__hello__"},
    {"__phello_alias__", "__hello__"},
    {"__phello_alias__.spam", "__hello__"},
    {"__phello__.__init__", "<__phello__"},
    {"__phello__.ham.__init__", "<__phello__.ham"},
    {"__hello_only__", NULL},
    {0, 0} /* aliases sentinel */
};
const struct _module_alias *_PyImport_FrozenAliases = aliases;


/* Embedding apps may change this pointer to point to their favorite
   collection of frozen modules: */

const struct _frozen *PyImport_FrozenModules = NULL;
