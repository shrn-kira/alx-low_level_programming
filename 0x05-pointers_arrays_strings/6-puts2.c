#include "main.h"

/**
* puts2 - a function that prints out every other char of the string
* @str: input string to print
* Return: Nothing
*/
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
