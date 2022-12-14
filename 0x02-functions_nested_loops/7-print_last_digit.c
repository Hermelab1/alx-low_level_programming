#include "main.h"

/**
 * last_digit - that computes the last digits of the number
 *
 * @n: number which we will give the number
 * Return: lastDigit if success
 */
int print_last_digit(int n)
{
    int lastDigit = n;
    
    lastDigit = lastDigit % 10;
    
    if (lastDigit < 0)
    {
        lastDigit *= -1;
    }
    
    _putchar(lastDigit + '0');
    
    return (lastDigit);
}
