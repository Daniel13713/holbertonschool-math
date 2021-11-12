#include "holberton.h"

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


