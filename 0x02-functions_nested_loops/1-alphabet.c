#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */
int main(void)
{
	print_alphabet();

	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
