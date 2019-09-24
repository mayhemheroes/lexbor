/*
 * Copyright (C) 2019 Alexander Borisov
 *
 * Author: Alexander Borisov <borisov@lexbor.com>
 */

/*
 * Caution!
 * This file generated by the script "utils/lexbor/encoding/res.py"!
 * Do not change this file!
 */

#include "lexbor/encoding/base.h"
#include "lexbor/encoding/encode.h"
#include "lexbor/encoding/decode.h"

#include "lexbor/core/shs.h"


const lxb_encoding_data_t lxb_encoding_res_map[LXB_ENCODING_LAST_ENTRY] = 
{
    {LXB_ENCODING_DEFAULT, lxb_encoding_encode_default, lxb_encoding_decode_default, (lxb_char_t *) "DEFAULT"},
    {LXB_ENCODING_AUTO, lxb_encoding_encode_auto, lxb_encoding_decode_auto, (lxb_char_t *) "AUTO"},
    {LXB_ENCODING_UNDEFINED, lxb_encoding_encode_undefined, lxb_encoding_decode_undefined, (lxb_char_t *) "UNDEFINED"},
    {LXB_ENCODING_BIG5, lxb_encoding_encode_big5, lxb_encoding_decode_big5, (lxb_char_t *) "Big5"},
    {LXB_ENCODING_EUC_JP, lxb_encoding_encode_euc_jp, lxb_encoding_decode_euc_jp, (lxb_char_t *) "EUC-JP"},
    {LXB_ENCODING_EUC_KR, lxb_encoding_encode_euc_kr, lxb_encoding_decode_euc_kr, (lxb_char_t *) "EUC-KR"},
    {LXB_ENCODING_GBK, lxb_encoding_encode_gbk, lxb_encoding_decode_gbk, (lxb_char_t *) "GBK"},
    {LXB_ENCODING_IBM866, lxb_encoding_encode_ibm866, lxb_encoding_decode_ibm866, (lxb_char_t *) "IBM866"},
    {LXB_ENCODING_ISO_2022_JP, lxb_encoding_encode_iso_2022_jp, lxb_encoding_decode_iso_2022_jp, (lxb_char_t *) "ISO-2022-JP"},
    {LXB_ENCODING_ISO_8859_10, lxb_encoding_encode_iso_8859_10, lxb_encoding_decode_iso_8859_10, (lxb_char_t *) "ISO-8859-10"},
    {LXB_ENCODING_ISO_8859_13, lxb_encoding_encode_iso_8859_13, lxb_encoding_decode_iso_8859_13, (lxb_char_t *) "ISO-8859-13"},
    {LXB_ENCODING_ISO_8859_14, lxb_encoding_encode_iso_8859_14, lxb_encoding_decode_iso_8859_14, (lxb_char_t *) "ISO-8859-14"},
    {LXB_ENCODING_ISO_8859_15, lxb_encoding_encode_iso_8859_15, lxb_encoding_decode_iso_8859_15, (lxb_char_t *) "ISO-8859-15"},
    {LXB_ENCODING_ISO_8859_16, lxb_encoding_encode_iso_8859_16, lxb_encoding_decode_iso_8859_16, (lxb_char_t *) "ISO-8859-16"},
    {LXB_ENCODING_ISO_8859_2, lxb_encoding_encode_iso_8859_2, lxb_encoding_decode_iso_8859_2, (lxb_char_t *) "ISO-8859-2"},
    {LXB_ENCODING_ISO_8859_3, lxb_encoding_encode_iso_8859_3, lxb_encoding_decode_iso_8859_3, (lxb_char_t *) "ISO-8859-3"},
    {LXB_ENCODING_ISO_8859_4, lxb_encoding_encode_iso_8859_4, lxb_encoding_decode_iso_8859_4, (lxb_char_t *) "ISO-8859-4"},
    {LXB_ENCODING_ISO_8859_5, lxb_encoding_encode_iso_8859_5, lxb_encoding_decode_iso_8859_5, (lxb_char_t *) "ISO-8859-5"},
    {LXB_ENCODING_ISO_8859_6, lxb_encoding_encode_iso_8859_6, lxb_encoding_decode_iso_8859_6, (lxb_char_t *) "ISO-8859-6"},
    {LXB_ENCODING_ISO_8859_7, lxb_encoding_encode_iso_8859_7, lxb_encoding_decode_iso_8859_7, (lxb_char_t *) "ISO-8859-7"},
    {LXB_ENCODING_ISO_8859_8, lxb_encoding_encode_iso_8859_8, lxb_encoding_decode_iso_8859_8, (lxb_char_t *) "ISO-8859-8"},
    {LXB_ENCODING_ISO_8859_8_I, lxb_encoding_encode_iso_8859_8_i, lxb_encoding_decode_iso_8859_8_i, (lxb_char_t *) "ISO-8859-8-I"},
    {LXB_ENCODING_KOI8_R, lxb_encoding_encode_koi8_r, lxb_encoding_decode_koi8_r, (lxb_char_t *) "KOI8-R"},
    {LXB_ENCODING_KOI8_U, lxb_encoding_encode_koi8_u, lxb_encoding_decode_koi8_u, (lxb_char_t *) "KOI8-U"},
    {LXB_ENCODING_SHIFT_JIS, lxb_encoding_encode_shift_jis, lxb_encoding_decode_shift_jis, (lxb_char_t *) "Shift_JIS"},
    {LXB_ENCODING_UTF_16BE, lxb_encoding_encode_utf_16be, lxb_encoding_decode_utf_16be, (lxb_char_t *) "UTF-16BE"},
    {LXB_ENCODING_UTF_16LE, lxb_encoding_encode_utf_16le, lxb_encoding_decode_utf_16le, (lxb_char_t *) "UTF-16LE"},
    {LXB_ENCODING_UTF_8, lxb_encoding_encode_utf_8, lxb_encoding_decode_utf_8, (lxb_char_t *) "UTF-8"},
    {LXB_ENCODING_GB18030, lxb_encoding_encode_gb18030, lxb_encoding_decode_gb18030, (lxb_char_t *) "gb18030"},
    {LXB_ENCODING_MACINTOSH, lxb_encoding_encode_macintosh, lxb_encoding_decode_macintosh, (lxb_char_t *) "macintosh"},
    {LXB_ENCODING_REPLACEMENT, lxb_encoding_encode_replacement, lxb_encoding_decode_replacement, (lxb_char_t *) "replacement"},
    {LXB_ENCODING_WINDOWS_1250, lxb_encoding_encode_windows_1250, lxb_encoding_decode_windows_1250, (lxb_char_t *) "windows-1250"},
    {LXB_ENCODING_WINDOWS_1251, lxb_encoding_encode_windows_1251, lxb_encoding_decode_windows_1251, (lxb_char_t *) "windows-1251"},
    {LXB_ENCODING_WINDOWS_1252, lxb_encoding_encode_windows_1252, lxb_encoding_decode_windows_1252, (lxb_char_t *) "windows-1252"},
    {LXB_ENCODING_WINDOWS_1253, lxb_encoding_encode_windows_1253, lxb_encoding_decode_windows_1253, (lxb_char_t *) "windows-1253"},
    {LXB_ENCODING_WINDOWS_1254, lxb_encoding_encode_windows_1254, lxb_encoding_decode_windows_1254, (lxb_char_t *) "windows-1254"},
    {LXB_ENCODING_WINDOWS_1255, lxb_encoding_encode_windows_1255, lxb_encoding_decode_windows_1255, (lxb_char_t *) "windows-1255"},
    {LXB_ENCODING_WINDOWS_1256, lxb_encoding_encode_windows_1256, lxb_encoding_decode_windows_1256, (lxb_char_t *) "windows-1256"},
    {LXB_ENCODING_WINDOWS_1257, lxb_encoding_encode_windows_1257, lxb_encoding_decode_windows_1257, (lxb_char_t *) "windows-1257"},
    {LXB_ENCODING_WINDOWS_1258, lxb_encoding_encode_windows_1258, lxb_encoding_decode_windows_1258, (lxb_char_t *) "windows-1258"},
    {LXB_ENCODING_WINDOWS_874, lxb_encoding_encode_windows_874, lxb_encoding_decode_windows_874, (lxb_char_t *) "windows-874"},
    {LXB_ENCODING_X_MAC_CYRILLIC, lxb_encoding_encode_x_mac_cyrillic, lxb_encoding_decode_x_mac_cyrillic, (lxb_char_t *) "x-mac-cyrillic"},
    {LXB_ENCODING_X_USER_DEFINED, lxb_encoding_encode_x_user_defined, lxb_encoding_decode_x_user_defined, (lxb_char_t *) "x-user-defined"}
};

const lexbor_shs_entry_t lxb_encoding_res_shs_entities[] = 
{
    {NULL, NULL, 202, 0}, {"koi8", (void *) &lxb_encoding_res_map[22], 4, 4}, 
    {"iso8859-2", (void *) &lxb_encoding_res_map[14], 9, 0}, {"iso-8859-2", (void *) &lxb_encoding_res_map[14], 10, 15}, 
    {"iso88592", (void *) &lxb_encoding_res_map[14], 8, 8}, {"gb2312", (void *) &lxb_encoding_res_map[6], 6, 17}, 
    {"gb_2312", (void *) &lxb_encoding_res_map[6], 7, 28}, {"euc-jp", (void *) &lxb_encoding_res_map[4], 6, 30}, 
    {"gb_2312-80", (void *) &lxb_encoding_res_map[6], 10, 0}, {"ecma-114", (void *) &lxb_encoding_res_map[18], 8, 37}, 
    {"ibm819", (void *) &lxb_encoding_res_map[33], 6, 39}, {"x-sjis", (void *) &lxb_encoding_res_map[24], 6, 40}, 
    {"iso88599", (void *) &lxb_encoding_res_map[35], 8, 42}, {"cp1254", (void *) &lxb_encoding_res_map[35], 6, 43}, 
    {"iso-ir-149", (void *) &lxb_encoding_res_map[5], 10, 44}, {"iso_8859-2", (void *) &lxb_encoding_res_map[14], 10, 0}, 
    {"windows-31j", (void *) &lxb_encoding_res_map[24], 11, 0}, {"cp1252", (void *) &lxb_encoding_res_map[33], 6, 0}, 
    {"csisolatin4", (void *) &lxb_encoding_res_map[16], 11, 49}, {"iso_8859-9:1989", (void *) &lxb_encoding_res_map[35], 15, 0}, 
    {"cp866", (void *) &lxb_encoding_res_map[7], 5, 0}, {"cp1256", (void *) &lxb_encoding_res_map[37], 6, 0}, 
    {"sjis", (void *) &lxb_encoding_res_map[24], 4, 50}, {"l6", (void *) &lxb_encoding_res_map[9], 2, 51}, 
    {"csmacintosh", (void *) &lxb_encoding_res_map[29], 11, 0}, {"x-cp1258", (void *) &lxb_encoding_res_map[39], 8, 0}, 
    {"csisolatin6", (void *) &lxb_encoding_res_map[9], 11, 0}, {"latin6", (void *) &lxb_encoding_res_map[9], 6, 58}, 
    {"csiso58gb231280", (void *) &lxb_encoding_res_map[6], 15, 0}, {"l2", (void *) &lxb_encoding_res_map[14], 2, 61}, 
    {"euc-kr", (void *) &lxb_encoding_res_map[5], 6, 31}, {"csgb2312", (void *) &lxb_encoding_res_map[6], 8, 0}, 
    {"windows-1251", (void *) &lxb_encoding_res_map[32], 12, 0}, {"latin2", (void *) &lxb_encoding_res_map[14], 6, 70}, 
    {"iso885914", (void *) &lxb_encoding_res_map[11], 9, 73}, {"iso8859-14", (void *) &lxb_encoding_res_map[11], 10, 77}, 
    {"iso-8859-14", (void *) &lxb_encoding_res_map[11], 11, 0}, {"ecma-118", (void *) &lxb_encoding_res_map[19], 8, 38}, 
    {"elot_928", (void *) &lxb_encoding_res_map[19], 8, 0}, {"csisolatin2", (void *) &lxb_encoding_res_map[14], 11, 0}, 
    {"windows-1250", (void *) &lxb_encoding_res_map[31], 12, 0}, {"x-euc-jp", (void *) &lxb_encoding_res_map[4], 8, 0}, 
    {"unicode-1-1-utf-8", (void *) &lxb_encoding_res_map[27], 17, 0}, {"iso8859-9", (void *) &lxb_encoding_res_map[35], 9, 0}, 
    {"iso-ir-109", (void *) &lxb_encoding_res_map[15], 10, 45}, {"iso-8859-9", (void *) &lxb_encoding_res_map[35], 10, 46}, 
    {"iso_8859-9", (void *) &lxb_encoding_res_map[35], 10, 0}, {"koi", (void *) &lxb_encoding_res_map[22], 3, 0}, 
    {"logical", (void *) &lxb_encoding_res_map[21], 7, 0}, {"iso-2022-kr", (void *) &lxb_encoding_res_map[30], 11, 0}, 
    {"replacement", (void *) &lxb_encoding_res_map[30], 11, 0}, {"csibm866", (void *) &lxb_encoding_res_map[7], 8, 52}, 
    {"x-cp1251", (void *) &lxb_encoding_res_map[32], 8, 0}, {"x-x-big5", (void *) &lxb_encoding_res_map[3], 8, 83}, 
    {"iso-2022-cn-ext", (void *) &lxb_encoding_res_map[30], 15, 0}, {"ksc5601", (void *) &lxb_encoding_res_map[5], 7, 0}, 
    {"ksc_5601", (void *) &lxb_encoding_res_map[5], 8, 90}, {"hz-gb-2312", (void *) &lxb_encoding_res_map[30], 10, 0}, 
    {"shift-jis", (void *) &lxb_encoding_res_map[24], 9, 59}, {"shift_jis", (void *) &lxb_encoding_res_map[24], 9, 0}, 
    {"cseuckr", (void *) &lxb_encoding_res_map[5], 7, 91}, {"greek8", (void *) &lxb_encoding_res_map[19], 6, 62}, 
    {"cp1258", (void *) &lxb_encoding_res_map[39], 6, 0}, {"ibm866", (void *) &lxb_encoding_res_map[7], 6, 0}, 
    {"csiso2022kr", (void *) &lxb_encoding_res_map[30], 11, 0}, {"iso88596", (void *) &lxb_encoding_res_map[18], 8, 0}, 
    {"iso8859-6", (void *) &lxb_encoding_res_map[18], 9, 0}, {"iso-8859-6", (void *) &lxb_encoding_res_map[18], 10, 93}, 
    {"iso-8859-16", (void *) &lxb_encoding_res_map[13], 11, 0}, {"l9", (void *) &lxb_encoding_res_map[12], 2, 0}, 
    {"iso88594", (void *) &lxb_encoding_res_map[16], 8, 0}, {"koi8-r", (void *) &lxb_encoding_res_map[22], 6, 100}, 
    {"866", (void *) &lxb_encoding_res_map[7], 3, 0}, {"iso8859-4", (void *) &lxb_encoding_res_map[16], 9, 0}, 
    {"windows-1253", (void *) &lxb_encoding_res_map[34], 12, 0}, {"l5", (void *) &lxb_encoding_res_map[35], 2, 0}, 
    {"arabic", (void *) &lxb_encoding_res_map[18], 6, 105}, {"iso-8859-4", (void *) &lxb_encoding_res_map[16], 10, 80}, 
    {"koi8-u", (void *) &lxb_encoding_res_map[23], 6, 106}, {"latin5", (void *) &lxb_encoding_res_map[35], 6, 108}, 
    {"iso_8859-4", (void *) &lxb_encoding_res_map[16], 10, 82}, {"l1", (void *) &lxb_encoding_res_map[33], 2, 117}, 
    {"iso-ir-144", (void *) &lxb_encoding_res_map[17], 10, 0}, {"x-cp1255", (void *) &lxb_encoding_res_map[36], 8, 84}, 
    {"windows-1252", (void *) &lxb_encoding_res_map[33], 12, 0}, {"latin1", (void *) &lxb_encoding_res_map[33], 6, 0}, 
    {"iso88591", (void *) &lxb_encoding_res_map[33], 8, 0}, {"iso8859-1", (void *) &lxb_encoding_res_map[33], 9, 122}, 
    {"iso-ir-101", (void *) &lxb_encoding_res_map[14], 10, 125}, {"iso-8859-11", (void *) &lxb_encoding_res_map[40], 11, 0}, 
    {"csiso2022jp", (void *) &lxb_encoding_res_map[8], 11, 0}, {"cskoi8r", (void *) &lxb_encoding_res_map[22], 7, 92}, 
    {"dos-874", (void *) &lxb_encoding_res_map[40], 7, 0}, {"iso_8859-6", (void *) &lxb_encoding_res_map[18], 10, 96}, 
    {"windows-874", (void *) &lxb_encoding_res_map[40], 11, 0}, {"utf-16", (void *) &lxb_encoding_res_map[26], 6, 135}, 
    {"iso-ir-126", (void *) &lxb_encoding_res_map[19], 10, 0}, {"asmo-708", (void *) &lxb_encoding_res_map[18], 8, 136}, 
    {"iso-ir-58", (void *) &lxb_encoding_res_map[6], 9, 138}, {"iso-8859-8", (void *) &lxb_encoding_res_map[20], 10, 140}, 
    {"koi8_r", (void *) &lxb_encoding_res_map[22], 6, 0}, {"x-mac-cyrillic", (void *) &lxb_encoding_res_map[41], 14, 0}, 
    {"cp1251", (void *) &lxb_encoding_res_map[32], 6, 144}, {"ansi_x3.4-1968", (void *) &lxb_encoding_res_map[33], 14, 0}, 
    {"iso_8859-3:1988", (void *) &lxb_encoding_res_map[15], 15, 146}, {"ks_c_5601-1987", (void *) &lxb_encoding_res_map[5], 14, 0}, 
    {"sun_eu_greek", (void *) &lxb_encoding_res_map[19], 12, 0}, {"csisolatin1", (void *) &lxb_encoding_res_map[33], 11, 0}, 
    {"koi8-ru", (void *) &lxb_encoding_res_map[23], 7, 0}, {"chinese", (void *) &lxb_encoding_res_map[6], 7, 0}, 
    {"cp1253", (void *) &lxb_encoding_res_map[34], 6, 154}, {"visual", (void *) &lxb_encoding_res_map[20], 6, 160}, 
    {"csisolatincyrillic", (void *) &lxb_encoding_res_map[17], 18, 0}, {"csiso88596e", (void *) &lxb_encoding_res_map[18], 11, 161}, 
    {"iso-8859-6-e", (void *) &lxb_encoding_res_map[18], 12, 162}, {"csisolatin3", (void *) &lxb_encoding_res_map[15], 11, 0}, 
    {"windows-1255", (void *) &lxb_encoding_res_map[36], 12, 0}, {"x-cp1252", (void *) &lxb_encoding_res_map[33], 8, 0}, 
    {"csbig5", (void *) &lxb_encoding_res_map[3], 6, 163}, {"cn-big5", (void *) &lxb_encoding_res_map[3], 7, 166}, 
    {"iso8859-13", (void *) &lxb_encoding_res_map[10], 10, 175}, {"iso-8859-13", (void *) &lxb_encoding_res_map[10], 11, 180}, 
    {"iso885911", (void *) &lxb_encoding_res_map[40], 9, 0}, {"csisolatin5", (void *) &lxb_encoding_res_map[35], 11, 0}, 
    {"us-ascii", (void *) &lxb_encoding_res_map[33], 8, 0}, {"iso-8859-1", (void *) &lxb_encoding_res_map[33], 10, 128}, 
    {"cp1257", (void *) &lxb_encoding_res_map[38], 6, 0}, {"l4", (void *) &lxb_encoding_res_map[16], 2, 0}, 
    {"iso_8859-1", (void *) &lxb_encoding_res_map[33], 10, 132}, {"gbk", (void *) &lxb_encoding_res_map[6], 3, 181}, 
    {"x-mac-roman", (void *) &lxb_encoding_res_map[29], 11, 0}, {"greek", (void *) &lxb_encoding_res_map[19], 5, 187}, 
    {"iso8859-11", (void *) &lxb_encoding_res_map[40], 10, 0}, {"cp819", (void *) &lxb_encoding_res_map[33], 5, 191}, 
    {"x-mac-ukrainian", (void *) &lxb_encoding_res_map[41], 15, 0}, {"windows-1254", (void *) &lxb_encoding_res_map[35], 12, 0}, 
    {"iso88598", (void *) &lxb_encoding_res_map[20], 8, 0}, {"big5-hkscs", (void *) &lxb_encoding_res_map[3], 10, 192}, 
    {"iso8859-8", (void *) &lxb_encoding_res_map[20], 9, 0}, {"x-cp1253", (void *) &lxb_encoding_res_map[34], 8, 193}, 
    {"iso-ir-138", (void *) &lxb_encoding_res_map[20], 10, 142}, {"csisolatingreek", (void *) &lxb_encoding_res_map[19], 15, 0}, 
    {"iso_8859-8", (void *) &lxb_encoding_res_map[20], 10, 143}, {"iso-ir-148", (void *) &lxb_encoding_res_map[35], 10, 0}, 
    {"tis-620", (void *) &lxb_encoding_res_map[40], 7, 145}, {"cyrillic", (void *) &lxb_encoding_res_map[17], 8, 0}, 
    {"iso_8859-4:1988", (void *) &lxb_encoding_res_map[16], 15, 147}, {"iso_8859-5:1988", (void *) &lxb_encoding_res_map[17], 15, 149}, 
    {"ks_c_5601-1989", (void *) &lxb_encoding_res_map[5], 14, 0}, {"iso_8859-8:1988", (void *) &lxb_encoding_res_map[20], 15, 0}, 
    {"iso88595", (void *) &lxb_encoding_res_map[17], 8, 0}, {"iso885915", (void *) &lxb_encoding_res_map[12], 9, 194}, 
    {"x-gbk", (void *) &lxb_encoding_res_map[6], 5, 195}, {"iso-8859-15", (void *) &lxb_encoding_res_map[12], 11, 203}, 
    {"utf-16be", (void *) &lxb_encoding_res_map[25], 8, 155}, {"utf-16le", (void *) &lxb_encoding_res_map[26], 8, 157}, 
    {"iso-2022-cn", (void *) &lxb_encoding_res_map[30], 11, 0}, {"csisolatinarabic", (void *) &lxb_encoding_res_map[18], 16, 0}, 
    {"windows-1257", (void *) &lxb_encoding_res_map[38], 12, 0}, {"x-user-defined", (void *) &lxb_encoding_res_map[42], 14, 0}, 
    {"x-cp1256", (void *) &lxb_encoding_res_map[37], 8, 0}, {"csiso88598e", (void *) &lxb_encoding_res_map[20], 11, 0}, 
    {"iso-8859-8-e", (void *) &lxb_encoding_res_map[20], 12, 0}, {"cp1255", (void *) &lxb_encoding_res_map[36], 6, 165}, 
    {"ms_kanji", (void *) &lxb_encoding_res_map[24], 8, 0}, {"iso88593", (void *) &lxb_encoding_res_map[15], 8, 0}, 
    {"iso885913", (void *) &lxb_encoding_res_map[10], 9, 170}, {"x-cp1250", (void *) &lxb_encoding_res_map[31], 8, 0}, 
    {"csshiftjis", (void *) &lxb_encoding_res_map[24], 10, 0}, {"hebrew", (void *) &lxb_encoding_res_map[20], 6, 204}, 
    {"iso8859-3", (void *) &lxb_encoding_res_map[15], 9, 0}, {"ascii", (void *) &lxb_encoding_res_map[33], 5, 0}, 
    {"iso885910", (void *) &lxb_encoding_res_map[9], 9, 0}, {"iso8859-10", (void *) &lxb_encoding_res_map[9], 10, 205}, 
    {"iso-8859-10", (void *) &lxb_encoding_res_map[9], 11, 0}, {"iso-8859-3", (void *) &lxb_encoding_res_map[15], 10, 177}, 
    {"ms932", (void *) &lxb_encoding_res_map[24], 5, 0}, {"iso_8859-3", (void *) &lxb_encoding_res_map[15], 10, 0}, 
    {"iso-8859-6-i", (void *) &lxb_encoding_res_map[18], 12, 207}, {"l3", (void *) &lxb_encoding_res_map[15], 2, 208}, 
    {"cseucpkdfmtjapanese", (void *) &lxb_encoding_res_map[4], 19, 0}, {"korean", (void *) &lxb_encoding_res_map[5], 6, 185}, 
    {"iso88597", (void *) &lxb_encoding_res_map[19], 8, 0}, {"latin3", (void *) &lxb_encoding_res_map[15], 6, 211}, 
    {"iso-ir-157", (void *) &lxb_encoding_res_map[9], 10, 212}, {"csiso88596i", (void *) &lxb_encoding_res_map[18], 11, 186}, 
    {"csiso88598i", (void *) &lxb_encoding_res_map[21], 11, 0}, {"latin4", (void *) &lxb_encoding_res_map[16], 6, 0}, 
    {"iso-2022-jp", (void *) &lxb_encoding_res_map[8], 11, 0}, {"iso_8859-2:1987", (void *) &lxb_encoding_res_map[14], 15, 215}, 
    {"csisolatinhebrew", (void *) &lxb_encoding_res_map[20], 16, 0}, {"csksc56011987", (void *) &lxb_encoding_res_map[5], 13, 0}, 
    {"windows-1256", (void *) &lxb_encoding_res_map[37], 12, 0}, {"csisolatin9", (void *) &lxb_encoding_res_map[12], 11, 0}, 
    {"iso8859-5", (void *) &lxb_encoding_res_map[17], 9, 0}, {"iso8859-15", (void *) &lxb_encoding_res_map[12], 10, 196}, 
    {"iso-8859-5", (void *) &lxb_encoding_res_map[17], 10, 198}, {"x-cp1254", (void *) &lxb_encoding_res_map[35], 8, 0}, 
    {"iso_8859-5", (void *) &lxb_encoding_res_map[17], 10, 0}, {"cp1250", (void *) &lxb_encoding_res_map[31], 6, 218}, 
    {"gb18030", (void *) &lxb_encoding_res_map[28], 7, 0}, {"utf8", (void *) &lxb_encoding_res_map[27], 4, 0}, 
    {"utf-8", (void *) &lxb_encoding_res_map[27], 5, 219}, {"iso_8859-15", (void *) &lxb_encoding_res_map[12], 11, 0}, 
    {"x-cp1257", (void *) &lxb_encoding_res_map[38], 8, 0}, {"iso-ir-110", (void *) &lxb_encoding_res_map[16], 10, 206}, 
    {"iso-ir-100", (void *) &lxb_encoding_res_map[33], 10, 0}, {"iso-8859-8-i", (void *) &lxb_encoding_res_map[21], 12, 0}, 
    {"mac", (void *) &lxb_encoding_res_map[29], 3, 209}, {"big5", (void *) &lxb_encoding_res_map[3], 4, 210}, 
    {"windows-1258", (void *) &lxb_encoding_res_map[39], 12, 0}, {"iso8859-7", (void *) &lxb_encoding_res_map[19], 9, 0}, 
    {"iso-ir-127", (void *) &lxb_encoding_res_map[18], 10, 213}, {"iso-8859-7", (void *) &lxb_encoding_res_map[19], 10, 214}, 
    {"iso_8859-7", (void *) &lxb_encoding_res_map[19], 10, 0}, {"iso_8859-6:1987", (void *) &lxb_encoding_res_map[18], 15, 216}, 
    {"iso_8859-7:1987", (void *) &lxb_encoding_res_map[19], 15, 217}, {"iso_8859-1:1987", (void *) &lxb_encoding_res_map[33], 15, 0}, 
    {"windows-949", (void *) &lxb_encoding_res_map[5], 11, 0}, {"macintosh", (void *) &lxb_encoding_res_map[29], 9, 0}
};

