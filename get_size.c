#include "main.h"

/**
 * get_size - gets the size specifier
 *
 * @format: the format
 *
 * @i: the index
 *
 * Return: the size specifier
 */

int get_size(const char *format, int *i)
{
	int size = 0;

	if (format[*i] == 'l')
	{
		size = 1;
		++(*i);
		if (format[*i] == 'l')
		{
			size = 2;
			++(*i);
		}
	}
	else if (format[*i] == 'h')
	{
		size = -1;
		++(*i);
		if (format[*i] == 'h')
		{
			size = -2;
			++(*i);
		}
	}
	return (size);
}