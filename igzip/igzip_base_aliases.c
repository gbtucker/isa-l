/* copyright header */

#include "igzip_lib.h"

// ergh

void isal_update_histogram_base(uint8_t * start_stream, int length, struct isal_huff_histogram * histogram);
uint32_t crc32_gzip_base(uint32_t crc, uint8_t * start, uint32_t length);
void isal_deflate_body_base(struct isal_zstream *stream);
void isal_deflate_finish_base(struct isal_zstream *stream);
int decode_huffman_code_block_stateless_base(struct inflate_state *state);

// aliases
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
