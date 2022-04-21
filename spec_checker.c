#include "main.h"

/**
 * @brief 
 * 
 */

int (*spec_checker(char x))(va_list)
{
    int i = 0;

    fmt_spec arr[] = {
        {"c", print_char},
        {"s", print_str},
        {"%", print_percent},
        {"d", print_decimal},
        {"i", print_int},
        {NULL, NULL}
    };
    while (arr[i].specifier)
    {
        if (x == arr[i].specifier)
        {
            return (arr[i].func);
        }
        i++;
    }
    return (NULL);
    
}