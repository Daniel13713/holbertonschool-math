#include "holberton.h"

/**
 * display_complex_number - print a complex number
 *
 * @c: complex number passed
 * Return: Nothing
 */

void display_complex_number(complex c)
{
	if (c.re)
	{
		printf("%f", c.re);
	}
	if (c.im > 0)
	{
		printf(" + %fi", c.im);
	}
	else if (c.im < 0 && c.re != 0)
	{
		printf(" - %fi", -1 * c.im);
	}
	else if (c.im < 0 && c.re == 0)
	{
		printf("%fi", c.im);
	}
	printf("\n");
}


