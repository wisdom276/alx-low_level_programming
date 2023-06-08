#include "main."
/**
 * _print_rev_recursion - Print a string in reverse
 * @s: The sring to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
