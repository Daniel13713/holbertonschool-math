#include "holberton.h"
#include <math.h>

/**
 * substraction - calculate the
 * rest of tow complex number in a pointer c3
 *
 * @c1: complex number passed
 * @c2: complex number passed
 * @c3: complex number passed
 * Return: nothing
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
	if (c3->re == 0)
	{
		c3->re = 0.1;
	}
}


