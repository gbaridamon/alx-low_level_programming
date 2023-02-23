#include "alphabet.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0;
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
