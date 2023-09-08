#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * print a logical statement
 * using if statement
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		puts("%d is positive," n);
	}
	
	if (n == 0) 
	{
		puts("%d is zero", n);
	}
	if (n < 0)
	{
		puts("%d is negative", n)
	}
	return (0);
}
