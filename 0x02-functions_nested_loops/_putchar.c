#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On erro, -1 is returned, and errni is set apprpriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

