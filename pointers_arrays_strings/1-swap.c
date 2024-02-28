#include "main.h"
/**
 * swap_int - a function that swaps two integers.
 * @a: integer.
 * @b: integer.
 * Description: swaps the values of a and b.
*/
void swap_int(int *a, int *b)
{

int tmp;

tmp = *a;
*a = *b;
*b = tmp;

}

