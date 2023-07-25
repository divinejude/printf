#include "main.h"

/**
 * put_char - Prints a single character
 * @c: Character to be printed
 * Return: Length of character
 */
int put_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - Prints a string literal pointed to by the parameter
 * @args: String to be printed
 * Return: The length of the string
 */
int print_str(v_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
		put_char(str[i++]);

	return (i);
}

/**
 * print_ch - Prints a single character
 * @args: Character to be printed
 * Return: Length of character
 */
int print_ch(v_list args)
{
	char c = va_arg(args, int);

	return (put_char(c));
}

