#ifndef printf_header
#define printf_header
#include <stdio.h>
#include <stdarg.h>
/**
 * struct fmt_spec - struct specifier
 * @specifier: the valid character
 * @func: the associated functions
 */
typedef struct fmt_spec
{
        char *specifier;
        int (*func)(va_list);
} fmt_spec;
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_int(va_list args);
int _putchar(char c);
int (*spec_checker(char x))(va_list);

#endif
