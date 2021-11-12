#include "holberton.h"
#include <math.h>

/**
 * conjugate - calculate conjugate of a complex number
 *
 * @c: complex number passed
 * Return: conjugate number
 */
complex conjugate(complex c)
{
	c.im = -1 * c.im;
	return (c);
}

/**
 * multiplication - calculate the
 * multiplication of tow complex number in a pointer c3
 *
 * @c1: complex number passed
 * @c2: complex number passed
 * @c3: complex number passed
 * Return: nothing
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
	if (c3->re == 0)
	{
		c3->re = 0.1;
	}
}

/**
 * division - calculate the
 * division of tow complex number in a pointer c3
 *
 * @c1: complex number passed
 * @c2: complex number passed
 * @c3: complex number passed
 * Return: nothing
 */
void division(complex c1, complex c2, complex *c3)
{
	double modc2 = (c2.re * c2.re) + (c2.im * c2.im);

	if (modc2 == 0)
	{
		modc2 = 1;
	}
	multiplication(c1, conjugate(c2), c3);
	c3->re = c3->re / modc2;
	c3->im = c3->im / modc2;
	if (c3->re == 0)
	{
		c3->re = 0.1;
	}
}


