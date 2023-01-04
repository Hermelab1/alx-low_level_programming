#include "main.h"

/**
 * _puts_recursion - print a string
 *
 * @s: char pointer to the string
 */
void _puts_recursion(char *s)
{
    if (*s != '\0')
    {
        putchar(*s);
        _puts_recursion(s + 1);
    }
    else
    {
        putchar('\n');
    }
}
