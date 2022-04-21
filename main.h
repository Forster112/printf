#ifndef printf_header
#define printf_header
#include <stdio.h>
#include <stdarg.h>
/**
 * struct specifier - struct specifier
 * @valid: the valid character 
 * @f: the associated functions
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
