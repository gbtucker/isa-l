/**********************************************************************
  Copyright(c) 2017 IBM Corporation All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions 
  are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the
      distribution.
    * Neither the name of IBM Corporation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**********************************************************************/

#include "igzip_lib.h"

/* prototypes */
void isal_update_histogram_base(uint8_t * start_stream, int length, struct isal_huff_histogram * histogram);
uint32_t crc32_gzip_base(uint32_t crc, uint8_t * start, uint32_t length);
void isal_deflate_body_base(struct isal_zstream *stream);
void isal_deflate_finish_base(struct isal_zstream *stream);
int decode_huffman_code_block_stateless_base(struct inflate_state *state);

/* aliases */
void isal_update_histogram(uint8_t * start_stream, int length, struct isal_huff_histogram * histogram)
{
	return isal_update_histogram_base(start_stream, length, histogram);
}

uint32_t crc32_gzip(uint32_t crc, uint8_t * start, uint32_t length)
{
	return crc32_gzip_base(crc, start, length);
}

void isal_deflate_body(struct isal_zstream *stream)
{
	isal_deflate_body_base(stream);
}

void isal_deflate_finish(struct isal_zstream *stream)
{
	isal_deflate_finish_base(stream);
}

int decode_huffman_code_block_stateless(struct inflate_state *state)
{
	return decode_huffman_code_block_stateless_base(state);
}
