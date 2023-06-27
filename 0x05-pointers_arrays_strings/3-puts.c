#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
