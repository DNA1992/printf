#include <stdarg.h>
#include "main.h"

/**
*_printf- a function to print and output
*@format:format character to output
*Return:the number of charaters printed
*/

int _printf(const char *format, ...)
{
	va_list sd;
	int x = 0, printed = 0;

	va_start(sd, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			_putchar(format[x]);
		}
		else
		{
			if (format[x + 1] == 'c')
			{
				_putchar(va_arg(sd, int));
				x++;
			}
		}

	}
	va_end(sd);
	return (printed);
}
