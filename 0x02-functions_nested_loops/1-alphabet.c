#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Return:0 (success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putcher(c);
		c++;

	}
	_putcher('\n');

}
