#include "main.h"

/**
 * check_null - checks if constant char pointer is NULL
 * 
 * @format: the char pointer to be checked
 * 
 * Return: 0
 */

void check_null(const char *format)
{
	if (format == NULL)
	{
		write(1, "(null)", 6);
		exit(98)
	}
}