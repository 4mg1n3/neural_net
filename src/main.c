#include <stdlib.h>
#include <stdio.h>
#include "../includes/matrix.h"




int main() {

    struct matrix* mat1 = initialize_matrix(2, 3);

    printf("%u, %u \n", mat1->height, mat1->width);

	return 0;
}
