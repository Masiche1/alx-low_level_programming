#include "main.h"     

#include <stdio.h>

/**                                                                        
 * main - Entry point
 * Description - Prints the sum of two diagonals
 * Return: void
 */                                                                                                                                       
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = size - 1, j = 0; j < (size * size); j+= size + 1, i = size - 1)
		sum1 += a[j], sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
