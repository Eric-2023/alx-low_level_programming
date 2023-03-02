#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer to the array
 * @n: number of elements in an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
