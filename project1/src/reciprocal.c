#include <assert.h>

double reciprocal(double x) {
	assert(x != 0);
	double res;

	res = 1. / x;
	return res;
}
