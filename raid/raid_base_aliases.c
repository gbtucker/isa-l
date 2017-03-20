/* insert appropriate copyright header */

#include "raid.h"

int xor_gen(int vects, int len, void **array) {
	return xor_gen_base(vects, len, array);
}

int xor_check(int vects, int len, void **array) {
	return xor_check_base(vects, len, array);
}

int pq_gen(int vects, int len, void **array) {
	return pq_gen_base(vects, len, array);
}

int pq_check(int vects, int len, void **array) {
	return pq_check_base(vects, len, array);
}
