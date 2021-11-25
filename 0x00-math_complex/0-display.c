#include "holberton.h"
/* Task 0 0x00. Math - Complex  */

/**
 * display_complex_number -  displays the complex numbers
 * @c: Number to display
 *
 * Return: void
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
		printf("%.0lf\n", c.re);
	else
		printf("%.0lf + %.0lfi\n", c.re, c.im);
}
