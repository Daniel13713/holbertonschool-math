#include "holberton.h"

/**
 * display_complex_number - print a complex number
 *
 * @c: complex number passed
 * Return: Nothing
 */

void display_complex_number(complex c)
{
	if (!c.re && !c.im)
	{
		return;
	}
	if (c.re)
	{
		printf("%0.1f", c.re);
	}
	if (c.im > 0)
	{
		if (c.im == 1 && c.re == 0)
		{
			printf("i");
		}
		else if (c.im == 1 && c.re != 0)
		{
			printf(" + i");
		}
		else
		{
			printf(" + %0.1fi", c.im);
		}
	}
	else if (c.im < 0)
	{
		if (c.im == -1 && c.re != 0)
		{
			printf(" - i");
		}
		else if (c.im == -1 && c.re == 0)
		{
			printf("-i");
		}
		else
		{
			printf(" - %0.1fi", -1 * c.im);
		}
	}
	printf("\n");
}


