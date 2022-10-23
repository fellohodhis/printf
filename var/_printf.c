#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - produces output according to a format
 * @format: the format
 * Return: printed chars
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}
/**
 * print_buffer - prints buffer contents
 * @buffer: array of chars
 * @buff_ind: rep the length
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}

/**
 * handle_print - handles the print
 * @format: the format
 * @i: index
 * @list: list of arguments
 * @buffer: buffer array
 * @flags: calculates active flags
 * @width: get width
 * @precision: precision specification
 * @size: size specifier
 * Return: number of chars printed
 */

int handle_print(const char *format, int *i, va_list list, char buffer[],
		int flags, int width, int precision, int size)
{
	int printed = 0;

	switch (format[*i])
	{
		case 'c':
			printed = print_char(list, buffer, flags, width, precision, size);
			break;
		case 's':
			printed = print_string(list, buffer, flags, width, precision, size);
			break;
		case 'd':
		case 'i':
			printed = print_int(list, buffer, flags, width, precision, size);
			break;
		case 'b':
			printed = print_binary(list, buffer, flags, width, precision, size);
			break;
		case 'u':
			printed = print_unsigned(list, buffer, flags, width, precision, size);
			break;
		case 'o':
			printed = print_octal(list, buffer, flags, width, precision, size);
			break;
		case 'x':
			printed = print_hex(list, buffer, flags, width, precision, size, 0);
			break;
		case 'X':
			printed = print_hex(list, buffer, flags, width, precision, size, 1);
			break;
		case 'p':
			printed = print_pointer(list, buffer, flags, width, precision, size);
			break;
		case 'S':
			printed = print_S(list, buffer, flags, width, precision, size);
			break;
		case 'r':
			printed = print_rev(list, buffer, flags, width, precision, size);
			break;
		case 'R':
			printed = print_rot13(list, buffer, flags, width, precision, size);
			break;
		case '%':
			printed = print_percent(list, buffer, flags, width, precision, size);
			break;
		case '\0':
			return (-1);
		default:
			printed = print_unknown(format, i, buffer, flags, width, precision, size);
			break;
	}
	return (printed);
}