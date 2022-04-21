#include <unistd.h>

/**
 * _putchar - prints out a single character to the stdout
 *
 * @c: the char to be printed out
 *
 *Return: returns an integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
