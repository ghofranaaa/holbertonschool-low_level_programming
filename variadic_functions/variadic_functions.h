#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/* Function prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
void print_string(va_list *args);
void print_float(va_list *args);
void print_int(va_list *args);
void print_char(va_list *args);

/**
 * struct fmt - struct declaration.
 * @type: format specifier.
 * @function: pointer to function.
 */
typedef struct fmt
{
	char type;
	void (*function)(va_list *);
} fmt;

#endif /* MAIN_H */
