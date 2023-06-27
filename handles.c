#include <stdarg.h>
#include <unistd.h>
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
 *handle_d - check the code
 *@args:
 *
 *Return: length
 */
int handle_d(va_list args)
{
    int num = va_arg(args, int);
    int l = 0;

    if (num < 0)
	{
        write(1, "-", 1);
        num = -num;
        l++;
    }

    l += print_number(num);

    return (l);
}
/**
 *print_number - check the code
 *@args:
 *
 *Return: length
 */
int print_number(int num)
{
	char digit;

    if (num / 10 != 0)
        print_number(num / 10);
    digit = (num % 10) + '0';
    write(1, &digit, 1);

    return (1);
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
