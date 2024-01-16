#ifndef SEARCH
#define SEARCH

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t l, size_t r, int value);

#endif
