#include "holberton.h"

/**
 * swap_int - swaps two integer
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Description: swaps the values of two integers
 * Return: Always (0);
 */

void swap_int(int *a, int *b)
{

int temp;

temp = *a;
*a = *b;
*b = temp;
}
