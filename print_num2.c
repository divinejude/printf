#include "main.h"

/**
 * print_oct - Prints decimal digits in octal form
 * @args: Arguments passed
 * Return: Length of octal digits printed
 */
int print_oct(v_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int val_d;
	int len = 0;

	val_d = cal_val(n, OCT);

	while (val_d)
	{
		len += put_char(n / val_d + '0');
		n %= val_d;
		val_d /= OCT;
	}
	return (len);
}

/**
 * print_hex_l - Prints a number in hexadecimal lowercase
 * @args: The number to be printed in hexadecimal
 * Return: The length of the number printed
 */
int print_hex_l(v_list args)
{
	const char *hex_l = "0123456789abcdef";
	unsigned int n = va_arg(args, unsigned int);
	unsigned int val_d;
	int len = 0;

	val_d = (unsigned int)cal_val(n, HEX);

	while (val_d)
	{
		char c = hex_l[n / val_d];

		len += put_char(c);
		n %= val_d;
		val_d /= HEX;
	}
	return (len);
}

/**
 * print_hex_u - Prints a number in hexadecimal uppercase
 * @args: The number to be printed in hexadecimal
 * Return: The length of the number printed
 */
int print_hex_u(v_list args)
{
	const char *hex_u = "0123456789ABCDEF";
	unsigned int n = va_arg(args, unsigned int);
	unsigned int val_d;
	int len = 0;

	val_d = (unsigned int)cal_val(n, HEX);

	while (val_d)
	{
		char c = hex_u[n / val_d];

		len += put_char(c);
		n %= val_d;
		val_d /= HEX;
	}
	return (len);
}

