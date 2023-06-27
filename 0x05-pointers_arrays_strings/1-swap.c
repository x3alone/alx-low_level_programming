#include <stdio.h>
/**
 * this function swaps the value of *a and *b to an outcome be a = 42; b = 98
 * return 0
 */
void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
}
