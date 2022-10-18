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
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
#endif
