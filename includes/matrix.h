#ifndef MATRIX_HEADER
#define MATRIX_HEADER


struct matrix {
	size_t height;
	size_t width;
	float* array;
};


struct matrix* initialize_mat(int heigh, int width);

#endif
