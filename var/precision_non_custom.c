/**
 * precision_non_custom - handles precision for non-custom conversion specifiers 
 * 
 * @precision: precision specifier
 * 
 * @count: number of characters written
 * 
 * @flags: active flags
 * 
 * @pad_char: padding specifier
 *
 * Return: Number of characters printed to stdout
 */

int precision_non_custom(int precision, int *count, int flags, char pad_char)
{
	int i;

	if (precision > 0)
	{
		for (i = 0; i < precision; i++)
		{
			write(1, &pad_char, 1);
			*count += 1;
		}
	}

	return (i);
}