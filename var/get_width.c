#include "main.h"

/**
 * get_width - calculates the width for printing
 * 
 * @format: formatted string in which to print the arguments
 * 
 * @i: list of arguments to be printed
 * 
 * @list: list of arguments
 * 
 * Return: width
*/

int get_width(const char *format, int *i, va_list list)
{
	int width = 0;

	if (format[*i] == '*')
	{
		width = va_arg(list, int);
		(*i)++;
	}
	else
	{
		while (format[*i] >= '0' && format[*i] <= '9')
		{
			width = width * 10 + (format[*i] - '0');
			(*i)++;
		}
	}

	return (width);

}