/* Handle the 0 flag character for non-custom conversion specifiers. */

/**
 * zero_flag_non_custom - handles 0 flag for non-custom conversion specifiers
 * 
 * @width: field width
 * 
 * @count: number of characters written
 * 
 * @flags: active flags
 * 
 * @pad_char: padding specifier
 * 
 * Return: Number of characters printed to stdout
 */

int zero_flag_non_custom(int width, int *count, int flags, char pad_char)
{
	int i;

	if (flags & ZERO_FLAG)
	{
		for (i = 0; i < width; i++)
		{
			write(1, &pad_char, 1);
			*count += 1;
		}
	}

	return (i);
}