#ifndef printf_header
#define printf_header
#include <stdio.h>
#include <stdarg.h>
/**
 * struct specifier - struct specifier
 * @valid: the valid character 
 * @f: the associated functions
 */
typedef struct specifier
{
        char *valid;
        int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_int(va_list args);

#endif