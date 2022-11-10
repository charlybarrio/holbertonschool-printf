#include "main.h"
/**
 * pf_c - add a char
 * @c:char
 * Return: 1
 */

int pf_c(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * pf_s - adds the string
 * @s:string
 * Return: q
 */

int pf_s(va_list s)
{
	int q = 0;
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(null)";
	while (str[q] != '\0')
	{
		_putchar(str[q]);
		q++;
	}

	return (q);
}
/**
 * pf_i - add a int
 * @i:int
 * Return: q
 */
int pf_d(va_list d)
{
	int x, den = 1, q = 0;
	unsigned int num;

	x = va_arg(d, int);

	if (x < 0)
	{
		q += _putchar('-');
		num = x * -1;
	}

	else
	{
		num = x;
	}

	while (num / den > 9)
		den = den * 10;

	while (den != 0)
	{
		q += _putchar((num / den) + '0');
		num = num % den;
		den = den / 10;
	}
	return (q);
}
int pf_i(va_list i)
{
        int x, den = 1, q = 0;
        unsigned int num;

        x = va_arg(i, int);

        if (x < 0)
        {
                q += _putchar('-');
                num = x * -1;
        }

        else
        {
                num = x;
        }

        while (num / den > 9)
                den = den * 10;

        while (den != 0)
        {
                q += _putchar((num / den) + '0');
                num = num % den;
                den = den / 10;
        }
        return (q);
}
