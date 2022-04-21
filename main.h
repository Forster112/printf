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
        char *specifier; //the specifier to be checked
        int (*func)(va_list); //the function that will be passed depending on the value of the specifier
} fmt_spec;
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_int(va_list args);

#endif