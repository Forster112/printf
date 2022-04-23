#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The associate function
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert converter_func;

int parse_func(const char *format, converter_func f_list[], va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(__attribute__((unused))va_list args);
int print_int(va_list args);
int print_number(va_list args);
int unsigned_integer(va_list args);
int print_binary(va_list list);
int print_rev(va_list arg);
int rot13(va_list strs);
int octal_print(va_list list);
int hex_print(va_list list);
int heX_print(va_list list);
int hex_check(int num, char x);
int print_unsigned_num(unsigned int d);

unsigned int base_len(unsigned int num, int base);
char *string_inv(char *s);
void base_print(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
