#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 *handle_c - check the code
 *@args:
 *
 *Return: length
 */
int handle_c(va_list args)
{
	char c = (char)va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
/**
 *handle_s - check the code
 *@args:
 *
 *Return: length
 */
int handle_s(va_list args)
{
	char *s = va_arg(args, char*);
	int l = 0;

	if (s == NULL)
		s = "(null)";
	while (s[l])
		l++;
	write(1, s, l);
	return (l);
}
/**
 *handle_percent - check the code
 *
 *Return: length
 */
int handle_percent(void)
{
	write(1, "%", 1);
	return (1);
}
