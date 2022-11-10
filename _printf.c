#include "main.h"
/**
 * _printf - write an output according to a format
 * @format: the characters to print or the flags.
 * Return: the number of characters printed.i
 */
int _printf(const char *format, ...)
{
	int c = 0, q = 0;
	va_list arg;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (format[c] != '\0')
	{
		while (format[c] != '%' && format[c] != '\0')
		{
			_putchar(format[c]);
			q++, c++; }
		if (format[c] == '\0')
			return (q);
		f = select_func(&format[c + 1]);
		if (f != NULL)
		{
			q += f(arg), c += 2;
			continue; }
		else if (format[c + 1] == '\0')
			return (-1);
		else if (format[c + 1] == '%')
		{
			_putchar(format[c]);
			c += 2, q++; }
		else
		{
			_putchar(format[c]);
			q++, c++; }
	}
	va_end(arg);
	return (q); }
