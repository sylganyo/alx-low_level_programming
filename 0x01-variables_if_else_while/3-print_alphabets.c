#include <stdio.h>

/**
 * main - print alphabet in lowercase and then case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
