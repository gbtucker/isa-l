/* appropriate copyright header goes here */

#include "erasure_code.h"

void ec_encode_data(int len, int k, int rows, unsigned char *g_tbls, unsigned char **data,
		    unsigned char **coding)
{
	ec_encode_data_base(len, k, rows, g_tbls, data, coding);
}

void ec_encode_data_update(int len, int k, int rows, int vec_i, unsigned char *g_tbls,
			   unsigned char *data, unsigned char **coding)
{
	ec_encode_data_update_base(len, k, rows, vec_i, g_tbls, data, coding);
}

void gf_vect_dot_prod(int len, int vlen, unsigned char *gftbls,
		      unsigned char **src, unsigned char *dest)
{
	gf_vect_dot_prod_base(len, vlen, gftbls, src, dest);
}

void gf_vect_mad(int len, int vec, int vec_i, unsigned char *gftbls, unsigned char *src,
		 unsigned char *dest)
{
	gf_vect_mad_base(len, vec, vec_i, gftbls, src, dest);
}

int gf_vect_mul(int len, unsigned char *gftbl, void *src, 
		 void *dest)
{
	gf_vect_mul_base(len, gftbl, (unsigned char *)src,
			 (unsigned char *)dest);
	return 0;
}

