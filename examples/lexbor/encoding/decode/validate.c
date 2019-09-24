/*
 * Copyright (C) 2019 Alexander Borisov
 *
 * Author: Alexander Borisov <borisov@lexbor.com>
 */

#include <string.h>

#include <lexbor/encoding/encoding.h>


int
main(int argc, const char *argv[])
{
    lxb_codepoint_t cp;
    lxb_encoding_decode_t ctx = {0};
    const lxb_encoding_data_t *encoding;
    const lxb_char_t *pos;

    /* Prepare buffer */
    const lxb_char_t *data = (const lxb_char_t *) "Привет,\x80 мир!";
    const lxb_char_t *end = data + strlen((char *) data);

    encoding = lxb_encoding_data(LXB_ENCODING_UTF_8);

    printf("Decode and validate UTF-8 string \"%s\" to code points:\n",
           (char *) data);

    while (data < end) {
        pos = data;

        cp = encoding->decode(&ctx, &data, end);
        if (cp > LXB_ENCODING_DECODE_MAX_CODEPOINT) {

            printf("Bad byte sequences: 0x%04X; Replaced to: 0x%04X ('%s')\n", 
                   *pos, LXB_ENCODING_REPLACEMENT_CODEPOINT,
                   LXB_ENCODING_REPLACEMENT_BYTES);

            continue;
        }

        printf("%.*s: 0x%04X\n", (int) (data - pos), pos, cp);
    }

    return EXIT_SUCCESS;
}
