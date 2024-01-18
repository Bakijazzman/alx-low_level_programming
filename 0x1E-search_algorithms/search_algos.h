#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>

/* prototype of functions*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int b_search(int *array, size_t low, size_t high, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);
int advanced_binary(int *array, size_t size, int value);
#endif
