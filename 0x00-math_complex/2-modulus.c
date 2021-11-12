#include <math.h>
#include "holberton.h"


/**
 * modulus - calculate modulus of a complex number
 *
 * @c: complex number passed
 * Return: module of the number
 */
double modulus(complex c)
{
	double mod = sqrt(c.im * c.im + c.re * c.re);

	return (mod);
}


