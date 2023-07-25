#include "main.h"

/**
 * get_flags - Extracts active flags from the format string.
 * @format: The formatted string in which to print the arguments.
 * @i: Pointer to the current index in the format string.
 *
 * Return: The calculated flags based on the format specifier.
 */
int get_flags(const char *format, int *i)
{
	/*
	 * Flags in the format string:
	 * - : Left-align the output.
	 * + : Precede the output with a plus sign (+) if positive,
	 * or minus sign (-) if negative.
	 * 0 : Pad numeric values with zeros.
	 * # : Use an alternative form (e.g., 0x for hexadecimal).
	 * ' ' : Leave a space before positive numbers.
	 */
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	int j, curr_i;
	int flags = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
		{
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}
		}

		if (FLAGS_CH[j] == '\0')
			break;
	}

	*i = curr_i - 1;

	return (flags);
}

