#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural
 * numbers from n to 98
 * @n:integer to start by
 * return: returns nothing
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n <= 98)
			printf("%d, ", n);
			if (n != 98)
			{
				printf(", ");
			}
	}
	else if (n > 98)

	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
}
