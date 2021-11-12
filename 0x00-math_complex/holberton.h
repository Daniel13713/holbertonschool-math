#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

/**
 * struct complex_number - struct
 * @re: part real
 * @im: part imaginary
 */

typedef struct complex_number
{
	int re;
	int im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);

#endif
