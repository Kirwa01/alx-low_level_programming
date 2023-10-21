#include <unistd.h>

/**
 * _putchar - writes the character c to stdot
 * @c: the character to print
 * Return:returns 1 in success
 * on error -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
