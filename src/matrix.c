#include "../includes/matrix.h"


/*  Returns an initialized matrix of size height x width
 *  All entries are initialized a 0
 *  Assumes user calls free
 * */
struct matrix* initialize_matrix(int height, int width) {
    struct matrix* mat = malloc(sizeof(struct matrix) + height * width * sizeof(float));
    mat->height = height;
    mat->width = width;
    printf("sizeof mat struct = %d\n", sizeof(struct matrix));
    printf("sizeof height = %d\n", sizeof(mat->height));
    return mat;
}
