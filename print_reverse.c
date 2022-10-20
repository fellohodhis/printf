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

/* The code above does the following, explained in English:
1. Declare a function named print_reverse with the following arguments:
  a. va_list types - which is a list of arguments
  b. char buffer[] - which is a character array
  c. int flags - which is an integer
  d. int width - which is an integer
  e. int precision - which is an integer
  f. int size - which is an integer
2. Declare a variable named str, which is a pointer to a character
3. Declare a variable named length and initialize it to 0
4. Call the UNUSED macro with the arguments buffer, flags, width, precision,
and size
5. Set str to the next argument in types, which should be a pointer to a
character
6. If str is NULL, set it to "(nil)"
7. Set length to the length of str
8. While length is greater than 0, decrement it by 1
  a. Write the character at the index of str that is equal to the value of
length to the standard output
9. Return the length of str */
