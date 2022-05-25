#include <stdarg.h>
#include "main.h"
#include <stddef.h>

/**
*_printf- a function to print and output
*@format:format character to output
*Return:the number of charaters printed
*/

int _printf(const char *format, ...)
{
	va_list sd;
	int x = 0, y = 0, printed = 0;
	char *s = NULL;

	va_start(sd, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			_putchar(format[x]);
			printed++;
		}
		else
		{
			if (format[x + 1] == 'c')
			{
				_putchar(va_arg(sd, int));
				printed++;
				x++;
			}
			else if (format[x + 1] == 's')
			{
				x++;
				s = va_arg(sd, char *);
				for (y = 0; s[y] != '\0'; y++)
				{
					_putchar(s[y]);
					printed++;
				}
			}
			else if (format[x + 1] == '%')
			{
				x++;
				_putchar('%');
				printed++;
			}
		}

	}
	va_end(sd);
	return (printed);
}
