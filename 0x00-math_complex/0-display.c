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
		printf("%.0f\n", c.re);
	else
	{
		if (c.im < 0)
		{
			if (c.im == -1)
				printf("%.0f - i\n", c.re);
			else
			{
				c.im = c.im * (-1);
				printf("%.0f - %.0fi\n", c.re, c.im);
			}
		}
		else
		{
			if (c.im == 1)
				printf("%.0f - i\n", c.re);
			else
				printf("%.0f + %.0fi\n", c.re, c.im);

		}
	}
}
