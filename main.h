#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/* Function Prototypes */
int format_spec(const char *, int *, int *, v_list args);
int print_ch(v_list args);
int print_int(v_list args);
int print_unint(v_list args);
int print_hex_l(v_list args);
int print_hex_u(v_list args);
int print_bin(v_list args);
int print_oct(v_list args);
int print_str(v_list args);
int _printf(const char *format, ...);
int put_char(char);
size_t cal_val(size_t n, int base);

/**
 * struct conv - Format conversion template
 * @c: The format specifier character
 * @f: Pointer to the corresponding function for the format specifier
 */
typedef struct conv
{
	char c;
	int (*f)(v_list);
} spec_conv;

/* Constants */
#define HEX 16
#define BIN 2
#define OCT 8

#endif
