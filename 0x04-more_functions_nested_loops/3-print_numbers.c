/**
 * print_numbers - to print numbers
 *
 * @n: number
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
