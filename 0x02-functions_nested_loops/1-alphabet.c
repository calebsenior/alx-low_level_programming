#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a_to_z;

	for (a_to_z = 'a'; a_to_z <= 'z'; a_to_z++)
	{
		_putchar(a_to_z);
	}
	_putchar('\n');
}
