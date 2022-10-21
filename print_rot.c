/**
 * print_rot - prints rot13 standard library references
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

int print_rot(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int i;
	char *s = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (s == NULL)
	{
		s = "(null)";

		if (precision >= 0)
			s = "";
	}

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 65 && s[i] <= 77) || (s[i] >= 97 && s[i] <= 110))
		{
			s[i] += 13;
		}
		else if ((s[i] >= 78 && s[i] <= 90) || (s[i] >= 110 && s[i] <= 122))
		{
			s[i] -= 13;
		}
	}

	return (write(1, s, i));
}