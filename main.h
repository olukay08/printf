#ifndef PRINT_F
#define PRINT_F
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct convert - defines a structure for symbols and functions
 * @sym: The operator
 * @f: The function associated
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert con_t;
int _putchar(char);
int _printf(const char *format, ...);
int convert_func(const char *format, con_t f_list[], va_list arg_list);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_integer(va_list list);
int print_number(va_list args);
#endif
