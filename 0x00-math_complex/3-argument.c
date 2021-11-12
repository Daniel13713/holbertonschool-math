#include "holberton.h"
#include <math.h>

/**
 * argument - calculate argument of a complex number
 *
 * @c: complex number passed
 * Return: argument of the number
 */
double argument(complex c)
{
	double angle = atan(c.im / c.re);

	return (angle);
}


