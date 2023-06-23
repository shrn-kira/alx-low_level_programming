#include "main.h"

/**
* swap_int - swaps the value of two ints.
* @a: int number one.
* @b: int number two.
*
*  Return: void.
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
