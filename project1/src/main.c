#include <stdio.h>
#include <stdlib.h>
#include "reciprocal.h"

int main(int argc, char **argv) {
	double res;
	
	res = reciprocal(atof(argv[1]));
	printf("Reciprocal(%s)=%g.\n", argv[1], res);

	exit(EXIT_SUCCESS); 
}

