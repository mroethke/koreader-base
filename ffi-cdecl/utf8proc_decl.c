#include <utf8proc.h>

#include "ffi-cdecl.h"

cdecl_type(utf8proc_int8_t)
cdecl_type(utf8proc_uint8_t)
cdecl_type(utf8proc_int16_t)
cdecl_type(utf8proc_uint16_t)
cdecl_type(utf8proc_int32_t)
cdecl_type(utf8proc_uint32_t)
cdecl_type(utf8proc_ssize_t)
cdecl_type(utf8proc_size_t)
cdecl_type(utf8proc_bool)

cdecl_type(utf8proc_option_t)

cdecl_const(UTF8PROC_ERROR_NOMEM)
cdecl_const(UTF8PROC_ERROR_OVERFLOW)
cdecl_const(UTF8PROC_ERROR_INVALIDUTF8)
cdecl_const(UTF8PROC_ERROR_NOTASSIGNED)
cdecl_const(UTF8PROC_ERROR_INVALIDOPTS)

cdecl_type(utf8proc_propval_t)

cdecl_struct(utf8proc_property_struct)
cdecl_type(utf8proc_property_t)

cdecl_type(utf8proc_category_t)
cdecl_type(utf8proc_bidi_class_t)
cdecl_type(utf8proc_decomp_type_t)
cdecl_type(utf8proc_boundclass_t)

cdecl_type(utf8proc_custom_func)

cdecl_func(utf8proc_utf8class)
cdecl_func(utf8proc_version)
cdecl_func(utf8proc_unicode_version)
cdecl_func(utf8proc_errmsg)
cdecl_func(utf8proc_iterate)
cdecl_func(utf8proc_codepoint_valid)
cdecl_func(utf8proc_encode_char)
cdecl_func(utf8proc_get_property)
cdecl_func(utf8proc_decompose_char)
cdecl_func(utf8proc_decompose)
cdecl_func(utf8proc_decompose_custom)
cdecl_func(utf8proc_normalize_utf32)
cdecl_func(utf8proc_reencode)
cdecl_func(utf8proc_grapheme_break_stateful)
cdecl_func(utf8proc_grapheme_break)
cdecl_func(utf8proc_tolower)
cdecl_func(utf8proc_toupper)
cdecl_func(utf8proc_totitle)
cdecl_func(utf8proc_islower)
cdecl_func(utf8proc_isupper)
cdecl_func(utf8proc_charwidth)
cdecl_func(utf8proc_category)
cdecl_func(utf8proc_category_string)
cdecl_func(utf8proc_map)
cdecl_func(utf8proc_map_custom)
cdecl_func(utf8proc_NFD)
cdecl_func(utf8proc_NFC)
cdecl_func(utf8proc_NFKD)
cdecl_func(utf8proc_NFKC)
cdecl_func(utf8proc_NFKC_Casefold)
