#include "main.h"

int print_remaining(const char *, int *, int *);
/**
 * _printf - Produces a formatted output
 * @format: Character string to be formatted & printed
 * Return: Length of the formatted output
 */
int _printf(const char *format, ...)
{
	v_list args;
	int pos = 0, len = 0;

	if (!format)
		return (-1);

	va_start(args, format);
	while (format[pos])
	{
		if (format[pos] == '%')
		{
			pos++;
			if (format[pos] == '\0')
				return (-1);
			if (format[pos] == '%')
				len += put_char(format[pos++]);
			else
				if (format_spec(format, &len, &pos, args) == -1)
					return (-1);
		}
		else
			len += put_char(format[pos++]);
	}
	va_end(args);
	return (len);
}

/**
 * format_spec - Checks for a format specifier
 * @format: The argument string
 * @len: A pointer to the length of characters being printed
 * @pos: Current position in the format string
 * @args: Next argument to be printed
 * Return: The length of characters printed
 */
int format_spec(const char *format, int *len, int *pos, v_list args)
{
	spec_conv fmt[] = {
		{'c', print_ch},
		{'d', print_int},
		{'i', print_int},
		{'s', print_str},
		{'u', print_unint},
		{'o', print_oct},
		{'b', print_bin},
		{'x', print_hex_l},
		{'X', print_hex_u},
		{'\0', NULL}};
	int i = 0;

	while (fmt[i].c != '\0')
	{
		if (fmt[i].c == format[*pos])
		{
			(*pos)++;
			*len += fmt[i].f(args);
			return (*len);
		}
		i++;
	}
	if (print_remaining(format, pos, len) == -1)
		return (-1);
	return (*len);
}

/**
 * print_remaining - Helper function
 * @format: A pointer to the format string
 * @pos: A pointer to the position in the format string
 * @len: A pointer to the length of the characters printed
 * Return: Length of the characters printed
 */
int print_remaining(const char *format, int *pos, int *len)
{
	int i = *pos;

	if (format[i - 2] == '%')
		return (-1);
	*len += put_char(format[i - 1]);
	*len += put_char(format[i++]);

	*pos = i;
	return (*len);
}

