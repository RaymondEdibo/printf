#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int handle_c(va_list args);
int handle_s(va_list args);
int handle_percent(void);
int print_number(int num);

#endif
