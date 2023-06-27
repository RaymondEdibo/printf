#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *_printf - check the code
 *@format: what to be printed
 *
 *Return: char coumnt
 */
int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_count++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					char_count += handle_c(args);
					break;
				case 's':
					char_count += handle_s(args);
					break;
				case '%':
					char_count += handle_percent();
					break;
				default:
					break;
			}
		}

		format++;
	}

	va_end(args);

	return (char_count);
}
