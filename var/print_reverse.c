#include "main.h"

/**
 * print_reverse - prints reversed string
 *
 * @types: list of arguments
 *
 * @buffer: buffer array to handle print
 *
 * @flags: calculates active flags
 *
 * @width: get width
 *
 * @precision: precision specification
 *
 * @size: size specifier
 *
 * Return: numbers of characters printed
 */

int print_reverse(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char *str;
	int length = 0;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	str = va_arg(types, char *);
	if (str == NULL)
		str = "(nil)";

	length = _strlen(str);

	while (length > 0)
	{
		write(1, &str[--length], 1);
	}

	return (_strlen(str));
}
