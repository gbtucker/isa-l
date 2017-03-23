/**********************************************************************
  Copyright(c) 2011-2015 Intel Corporation All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions 
  are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the
      distribution.
    * Neither the name of Intel Corporation nor the names of its
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

/* Prototypes for asm functions called from ec_highlevel_x86.c */

void gf_vect_dot_prod_sse(int len, int vlen, unsigned char *gftbls,
			  unsigned char **src, unsigned char *dest);

void gf_vect_dot_prod_avx(int len, int vlen, unsigned char *gftbls,
			  unsigned char **src, unsigned char *dest);

void gf_vect_dot_prod_avx2(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char *dest);

void gf_2vect_dot_prod_sse(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char **dest);

void gf_2vect_dot_prod_avx(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char **dest);

void gf_2vect_dot_prod_avx2(int len, int vlen, unsigned char *gftbls,
			    unsigned char **src, unsigned char **dest);

void gf_3vect_dot_prod_sse(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char **dest);

void gf_3vect_dot_prod_avx(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char **dest);

void gf_3vect_dot_prod_avx2(int len, int vlen, unsigned char *gftbls,
			    unsigned char **src, unsigned char **dest);

void gf_4vect_dot_prod_sse(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char **dest);

void gf_4vect_dot_prod_avx(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char **dest);

void gf_4vect_dot_prod_avx2(int len, int vlen, unsigned char *gftbls,
			    unsigned char **src, unsigned char **dest);

void gf_5vect_dot_prod_sse(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char **dest);


void gf_5vect_dot_prod_avx(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char **dest);

void gf_5vect_dot_prod_avx2(int len, int vlen, unsigned char *gftbls,
			    unsigned char **src, unsigned char **dest);

void gf_6vect_dot_prod_sse(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char **dest);


void gf_6vect_dot_prod_avx(int len, int vlen, unsigned char *gftbls,
			   unsigned char **src, unsigned char **dest);


void gf_6vect_dot_prod_avx2(int len, int vlen, unsigned char *gftbls,
			    unsigned char **src, unsigned char **dest);

void gf_vect_mad_sse(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		     unsigned char *dest);

void gf_vect_mad_avx(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		     unsigned char *dest);

void gf_vect_mad_avx2(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char *dest);

void gf_2vect_mad_sse(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char **dest);

void gf_2vect_mad_avx(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char **dest);

void gf_2vect_mad_avx2(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		       unsigned char **dest);

void gf_3vect_mad_sse(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char **dest);

void gf_3vect_mad_avx(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char **dest);

void gf_3vect_mad_avx2(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		       unsigned char **dest);

void gf_4vect_mad_sse(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char **dest);

void gf_4vect_mad_avx(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char **dest);

void gf_4vect_mad_avx2(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		       unsigned char **dest);

void gf_5vect_mad_sse(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char **dest);

void gf_5vect_mad_avx(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char **dest);

void gf_5vect_mad_avx2(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		       unsigned char **dest);


void gf_6vect_mad_sse(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char **dest);

void gf_6vect_mad_avx(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		      unsigned char **dest);

void gf_6vect_mad_avx2(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		       unsigned char **dest);

#ifdef HAVE_AS_KNOWS_AVX512

int gf_vect_dot_prod_avx512(int len, int k, unsigned char *g_tbls, unsigned char **data,
			    unsigned char *dest);
int gf_2vect_dot_prod_avx512(int len, int k, unsigned char *g_tbls,
			     unsigned char **data, unsigned char **coding);
int gf_3vect_dot_prod_avx512(int len, int k, unsigned char *g_tbls,
			     unsigned char **data, unsigned char **coding);
int gf_4vect_dot_prod_avx512(int len, int k, unsigned char *g_tbls,
			     unsigned char **data, unsigned char **coding);
void gf_vect_mad_avx512(int len, int vec, int vec_i, unsigned char *gftbls,
			unsigned char *src, unsigned char *dest);
void gf_2vect_mad_avx512(int len, int vec, int vec_i, unsigned char *gftbls,
			 unsigned char *src, unsigned char **dest);
void gf_3vect_mad_avx512(int len, int vec, int vec_i, unsigned char *gftbls,
			 unsigned char *src, unsigned char **dest);
void gf_4vect_mad_avx512(int len, int vec, int vec_i, unsigned char *gftbls,
			 unsigned char *src, unsigned char **dest);
#endif
