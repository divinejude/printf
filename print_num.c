#include "main.h"

/**
 * print_bin - Prints digits in binary
 * @args: Decimal arguments to be printed in binary
 * Return: Binary value of the argument
 */
int print_bin(v_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned long val_d;
	int len = 0;

	val_d = (unsigned long)cal_val(n, BIN);

	while (val_d)
	{
		len += put_char(n / val_d + '0');
		n %= val_d;
		val_d /= BIN;
	}
	return (len);
}

/**
 * print_int - Prints signed integers
 * @args: Arguments to be printed
 * Return: Length of arguments
 */
int print_int(v_list args)
{
	int n = va_arg(args, int);
	int val_d, len = 0;

	if (n < 0)
	{
		len += put_char('-');
		if (n == INT_MIN)
			n = INT_MAX;
		else
			n *= -1;
	}

	val_d = (int)cal_val(n, 10);

	while (val_d)
	{
		len += put_char(n / val_d + '0');
		n %= val_d;
		val_d /= 10;
	}
	return (len);
}

/**
 * print_unint - Prints unsigned integers
 * @args: Arguments to be printed
 * Return: Length of arguments
 */
int print_unint(v_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int val_d;
	int len = 0;

	val_d = (unsigned int)cal_val(n, 10);

	while (val_d)
	{
		len += put_char(n / val_d + '0');
		n %= val_d;
		val_d /= 10;
	}
	return (len);
}

/**
 * cal_val - Calculates the place of the first digit
 * @n: The number given
 * @base: Base of the number
 * Return: Place value
 */
size_t cal_val(size_t n, int base)
{
	int place_val = 1;

	while (n >= (size_t)base)
	{
		place_val *= base;
		n /= base;
	}
	return (place_val);
}

