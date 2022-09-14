#include <unistd.h>
#include "main.h"


/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and error is set appropriately.
 */

int main(void)
{
	char c[8] = "_putchar";
		int i = 0;
		char a;

		while (i <= 8)
		{
			a = c[i];
			_putchar(a);
			i++
		}
		_putchar('\n');
		return(0);
}
int _putchar(char c)

{

		return (write(1, &c, 1));

}
