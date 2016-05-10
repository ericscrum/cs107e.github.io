/*
 * Apple II font stored as a bitmap.
 * Each character is 14 bits wide and 16 bits tall (long story
 * about some C conversion), which is then transformed to a 14x16
 * 32-bit image. Black pixels in the image are 0x00000000, white
 * pixels are 0xFFFFFFFF.
 *
 * Generated from a screenshot of the original font, turned into
 * a 32-bit color C structure with GIMP, then turned into a bitmap
 * C structure with a simple C program.
 *
 * Author: Philip Levis <pal@cs.stanford.edu>
 * Last modified: 3/17/16
 */

static const struct {
    unsigned int 	 width;
    unsigned int 	 height;
    unsigned int 	 bits_per_pixel;
    unsigned char	 pixel_data[1330 * 16 / 8];
} font = {
    1330, 16, 1,
    "\014\000\314\003\060\003\000\360\000\300\000\300\003\000\014\000"
    "\060\000\000\000\000\000\000\000\000\000\017\300\014\000\374\017"
    "\374\000\300\377\300\077\017\374\017\300\077\000\000\000\000\000"
    "\300\000\000\300\003\360\017\300\014\003\374\003\360\077\300\377"
    "\303\377\003\374\060\060\077\000\003\014\014\060\000\300\303\003"
    "\003\360\077\300\077\003\374\003\360\077\360\300\303\003\014\014"
    "\060\060\300\303\377\017\374\000\000\377\300\000\000\000\014\000"
    "\000\003\000\000\000\000\060\000\000\074\000\000\060\000\014\000"
    "\014\014\000\017\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\014\000\000\000\000\000\000\000\000\000\000\000\000\374\003"
    "\000\374\000\363\000\000\003\000\063\000\314\000\300\074\000\060"
    "\000\060\000\300\003\000\014\000\000\000\000\000\000\000\000\000"
    "\003\360\003\000\077\003\377\000\060\077\360\017\303\377\003\360"
    "\017\300\000\000\000\000\060\000\000\060\000\374\003\360\003\000"
    "\377\000\374\017\360\077\360\377\300\377\014\014\017\300\000\303"
    "\003\014\000\060\060\300\300\374\017\360\017\300\377\000\374\017"
    "\374\060\060\300\303\003\014\014\060\060\377\303\377\000\000\077"
    "\360\000\000\000\003\000\000\000\300\000\000\000\014\000\000\017"
    "\000\000\014\000\003\000\003\003\000\003\300\000\000\000\000\000"
    "\000\000\000\000\000\000\000\003\000\000\000\000\000\000\000\000"
    "\000\000\000\000\077\000\300\077\000\074\300\000\000\300\014\300"
    "\063\000\377\017\014\063\000\014\000\300\000\060\063\060\014\000"
    "\000\000\000\000\000\000\303\003\003\300\060\060\000\300\074\014"
    "\000\014\000\000\303\003\014\014\000\000\000\000\060\000\000\003"
    "\000\300\303\003\003\060\060\060\300\303\003\014\000\060\000\300"
    "\003\003\000\300\000\060\303\003\000\017\074\060\060\300\303\003"
    "\014\014\060\060\300\300\060\014\014\060\060\300\303\003\014\014"
    "\000\060\360\003\000\000\074\000\000\000\000\060\000\000\060\000"
    "\000\000\003\000\000\014\060\000\003\000\000\000\000\000\300\000"
    "\060\000\000\000\000\000\000\000\000\000\000\000\000\000\300\000"
    "\000\000\000\000\000\000\000\000\000\000\074\000\060\000\360\063"
    "\300\314\300\060\003\060\014\300\077\303\303\014\300\003\000\060"
    "\000\014\014\314\003\000\000\000\000\000\000\000\060\300\300\360"
    "\014\014\000\060\017\003\000\003\000\000\060\300\303\003\000\000"
    "\000\000\014\000\000\000\300\060\060\300\300\314\014\014\060\060"
    "\300\303\000\014\000\060\000\300\300\060\000\014\060\300\300\003"
    "\317\014\014\060\060\300\303\003\014\014\060\060\014\003\003\014"
    "\014\060\060\300\303\003\000\014\074\000\300\000\017\000\000\000"
    "\000\014\000\000\014\000\000\000\000\300\000\003\014\000\000\300"
    "\000\000\000\000\060\000\014\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\060\000\000\000\000\000\000\000\000\000\000\000"
    "\017\000\014\000\074\014\360\063\060\014\000\314\017\374\063\000"
    "\003\003\060\000\300\060\000\000\300\374\000\300\000\000\000\000"
    "\000\000\060\060\360\014\000\003\000\060\014\300\377\003\000\000"
    "\060\060\060\300\300\060\000\300\014\000\377\300\014\000\060\063"
    "\060\300\303\003\014\000\060\060\300\003\000\014\000\060\060\014"
    "\000\003\014\300\060\000\314\303\303\014\014\060\060\300\303\003"
    "\014\000\003\000\300\303\003\014\014\014\300\063\000\014\017\000"
    "\014\000\003\300\060\000\000\000\300\077\003\374\003\374\017\360"
    "\077\000\300\003\360\077\300\074\000\074\014\014\003\000\363\303"
    "\374\003\360\077\300\077\303\077\003\374\077\300\300\303\003\014"
    "\014\060\060\300\303\377\003\300\003\000\017\000\000\003\060\003"
    "\000\063\003\377\014\300\000\300\314\000\060\014\000\000\060\077"
    "\000\060\000\000\000\000\000\000\014\014\074\003\000\000\300\014"
    "\003\060\077\300\300\000\014\014\014\060\060\014\000\060\003\000"
    "\077\360\003\000\014\014\314\060\060\300\303\000\014\014\060\000"
    "\300\003\000\014\014\003\000\000\303\060\014\000\063\060\360\303"
    "\003\014\014\060\060\300\303\000\000\300\060\060\300\303\003\003"
    "\060\014\300\003\003\300\003\000\000\360\014\000\000\000\060\017"
    "\300\377\000\377\003\374\017\300\060\000\374\017\360\017\000\017"
    "\003\003\000\300\074\360\377\000\374\017\360\017\360\317\300\377"
    "\017\360\060\060\300\303\003\014\014\060\060\377\300\360\000\300"
    "\003\300\000\000\314\000\300\000\000\063\000\374\000\300\014\000"
    "\000\003\000\000\014\003\000\377\300\000\017\374\000\000\014\003"
    "\063\000\300\003\300\017\003\014\000\014\077\300\014\000\374\003"
    "\374\000\000\000\003\000\000\000\000\060\014\003\077\014\014\077"
    "\300\300\003\003\017\360\077\300\300\003\377\000\300\000\060\360"
    "\003\000\014\314\063\060\300\303\374\014\014\077\300\077\000\060"
    "\014\014\060\060\314\300\060\000\300\003\000\360\000\060\000\074"
    "\014\300\000\000\000\000\014\060\060\300\003\003\014\014\077\300"
    "\300\303\003\000\300\000\300\303\000\060\014\314\060\060\300\303"
    "\003\014\014\074\000\300\000\300\014\014\060\060\300\300\314\014"
    "\014\000\300\360\000\060\000\074\000\000\314\300\060\000\000\014"
    "\300\077\000\060\003\000\000\000\300\000\003\000\300\077\360\000"
    "\003\377\000\000\003\000\314\300\060\000\360\003\300\303\000\003"
    "\017\360\003\000\077\000\377\000\000\000\000\300\000\000\000\014"
    "\003\000\317\303\003\017\360\060\000\300\303\374\017\360\060\000"
    "\377\300\060\000\014\074\000\300\003\063\014\314\060\060\377\003"
    "\003\017\360\017\300\014\003\003\014\014\063\060\014\000\060\000"
    "\300\074\000\014\000\017\003\060\000\000\000\000\003\014\014\060"
    "\000\300\303\003\017\360\060\060\300\300\060\000\060\060\300\014"
    "\003\063\014\014\060\060\300\303\003\017\000\060\000\060\003\003"
    "\014\014\060\060\063\003\003\000\060\074\000\014\000\017\000\000"
    "\063\060\014\000\000\017\374\003\060\060\003\063\000\000\060\000"
    "\000\300\374\000\300\003\000\000\000\000\003\000\074\060\014\000"
    "\300\000\014\077\360\000\303\003\003\000\060\060\000\300\060\000"
    "\300\014\000\377\300\014\000\300\063\300\377\303\003\014\000\060"
    "\060\300\003\000\014\074\060\060\014\000\003\014\300\060\000\300"
    "\303\017\014\014\060\000\314\303\060\000\014\003\000\300\303\003"
    "\014\314\014\300\014\000\300\017\000\000\300\003\303\003\000\000"
    "\000\000\077\303\003\014\000\060\060\377\300\300\014\014\060\060"
    "\014\000\014\017\300\003\000\314\303\003\014\014\060\060\300\303"
    "\000\003\360\014\000\300\303\003\014\314\003\000\300\300\060\003"
    "\300\003\000\017\000\000\003\060\003\000\000\003\377\000\314\014"
    "\000\314\300\000\014\000\000\060\077\000\060\000\300\000\000\000"
    "\000\300\017\014\003\000\060\000\003\017\374\000\060\300\300\300"
    "\014\014\000\060\014\000\060\003\000\077\360\003\000\060\014\360"
    "\077\360\300\303\000\014\014\060\000\300\003\017\014\014\003\000"
    "\000\303\060\014\000\060\060\303\303\003\014\000\063\060\314\000"
    "\003\000\300\060\060\300\303\063\003\060\003\000\060\003\300\000"
    "\060\000\360\300\300\000\000\000\017\360\300\303\000\014\014\077"
    "\360\060\003\003\014\014\003\000\003\003\360\000\300\063\060\300"
    "\303\003\014\014\060\060\300\000\374\003\000\060\060\300\303\063"
    "\000\300\060\060\014\000\360\000\300\003\300\000\000\314\000\000"
    "\000\000\063\003\374\014\074\060\300\000\000\300\000\060\063\060"
    "\014\000\060\000\000\000\000\300\003\003\000\300\060\000\300\300"
    "\014\014\014\060\060\060\003\003\000\060\000\000\014\000\060\000"
    "\000\003\000\000\003\000\014\014\060\060\300\303\003\014\000\060"
    "\000\300\303\003\000\300\060\060\303\003\000\014\014\060\060\300"
    "\303\000\014\060\060\300\300\300\060\014\014\014\300\363\303\003"
    "\000\300\060\000\360\000\003\000\074\000\000\000\000\000\014\014"
    "\060\060\300\003\003\014\000\014\000\077\303\003\000\300\000\300"
    "\303\000\060\014\314\060\060\300\303\374\003\374\060\000\000\300"
    "\303\014\074\014\300\314\300\314\003\374\014\000\074\000\060\000"
    "\360\000\000\314\300\000\000\000\014\300\377\003\017\014\060\000"
    "\000\060\000\014\014\314\003\000\014\000\000\000\000\060\000\300"
    "\300\060\014\000\060\060\003\003\003\014\014\014\000\300\300\014"
    "\000\000\003\000\014\000\000\000\300\000\000\300\003\003\014\014"
    "\060\060\300\303\000\014\000\060\060\300\300\060\014\014\060\300"
    "\300\003\003\014\014\060\060\300\003\014\014\060\060\060\014\003"
    "\003\003\060\074\360\300\300\060\014\000\074\000\000\300\017\000"
    "\000\000\000\000\003\003\014\014\060\000\300\303\000\003\000\017"
    "\360\300\300\060\000\060\060\300\014\003\063\014\014\060\060\377"
    "\000\377\014\000\000\060\060\303\017\003\060\063\060\063\000\377"
    "\003\000\017\000\014\000\074\000\000\063\060\014\000\000\003\060"
    "\003\000\003\300\363\000\000\003\000\014\000\060\000\000\014\000"
    "\000\000\060\000\000\017\300\077\003\377\003\360\000\300\077\000"
    "\374\003\000\017\300\374\000\000\003\000\000\300\000\000\300\000"
    "\300\017\360\300\303\374\003\360\077\300\377\303\000\003\374\060"
    "\060\077\000\374\014\014\077\360\300\303\003\003\360\060\000\074"
    "\303\003\003\360\003\000\077\000\060\014\014\060\060\014\003\377"
    "\017\374\000\000\377\300\000\000\000\000\000\077\303\374\003\374"
    "\017\360\077\300\300\000\014\060\060\077\003\014\014\014\017\300"
    "\300\303\003\003\360\060\000\000\303\000\017\360\003\300\074\300"
    "\060\017\074\060\060\000\303\377\000\374\003\000\374\000\000\000"
    "\000\003\000\000\000\314\000\300\000\360\074\300\000\000\300\003"
    "\000\014\000\000\003\000\000\000\014\000\000\003\360\017\300\377"
    "\300\374\000\060\017\300\077\000\300\003\360\077\000\000\000\300"
    "\000\060\000\000\060\000\060\003\374\060\060\377\000\374\017\360"
    "\077\360\300\000\377\014\014\017\300\077\003\003\017\374\060\060"
    "\300\300\374\014\000\017\060\300\300\374\000\300\017\300\014\003"
    "\003\014\014\003\000\377\303\377\000\000\077\360\000\000\000\000"
    "\000\017\360\377\000\377\003\374\017\360\060\000\003\014\014\017"
    "\300\303\003\003\003\360\060\060\300\300\374\014\000\000\060\300"
    "\003\374\000\360\017\060\014\003\317\014\014\000\060\377\300\077"
    "\000\300\077\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\003\377\370\000\000\000\000\000\000\000\000\000\000"
    "\000\000\077\000\000\000\000\017\000\000\000\000\000\000\000\000"
    "\000\003\000\000\014\000\000\000\000\000\000\000\000\000\000\000"
    "\000\003\360\000\000\000\000\060\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\000\000\377\376\000\000\000\000"
    "\000\000\000\000\000\000\000\000\017\300\000\000\000\003\300\000"
    "\000\000\000\000\000\000\000\000\300\000\003\000\000\000\000\000"
    "\000\000\000\000\000\000\000\000\374\000\000\000\000\014\000\000"
    "\000\000\000\000",
};

/* The pixel height of a character. */
int font_get_height() {
    return 16;
}

/* The pixel width of a character. */
int font_get_width() {
    return 14;
}

/* The depth (in bytes) of a character pixel. */
int font_get_depth() {
    return 4;
}

/* The number of bytes needed to store a character
   image. This is equal to height * width * depth. */
int font_get_size() {
    return font_get_width() * font_get_height() * font_get_depth();
}

/* Fill in the image of character `ch` into the buffer
   pointed by `buf`. Returns 0 on failure and 1 on success.
   Failure is when `buflen` does not equal the value
   returned by font_buflen(), used as a basic sanity
   check. After this function returns, buf is a width*height
   image of the pixel, i.e., a char[height][width][depth]
   array. */

int font_get_char(char ch, char* buf, int buflen) {
  if (buflen != font_get_size() ||
      ch < ' ' || // Too low
      ch > '~') { // Too high
    return 0;
  }

  if (ch == ' ') { // Handle space specially
    for (int i = 0; i < buflen; i++) {
      buf[i] = 0;
    }
    return 1;
  }

  // Only if this is true: ' ' < ch <= '~'
  int char_x_start = ((ch - '!') * font_get_width());
  for (int y = 0; y < font_get_height(); y++) {
    for (int x = 0; x < font_get_width(); x++) {
      int bit_index = y * font.width;
      bit_index += (x + char_x_start);
      int bit_start = (bit_index * font.bits_per_pixel) / 8;
      int bit_offset = bit_index % 8;
      int val = font.pixel_data[bit_start] & (1 << (7 - bit_offset));

      for(int index = 0; index < 4; index++) {
        if(val) {
          buf[index] = 0xFF;
        } else {
          buf[index] = 0x00;
        }
      }

    }
  }
  return 1;
}

/* Copyright (c) 2016 Stanford University.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Stanford University nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL STANFORD
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */
