#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * char_print - check the code
 * @list: macro
 */
void char_print(va_list *list)
{
	printf("%c", va_arg(*list, int));
}
/**
 * int_print - check the code
 * @list: macro
 */
void int_print(va_list *list)
{
	printf("%d", va_arg(*list, int));
}
/**
 *  float_print - check the code
 * @list: macro
 */
void float_print(va_list *list)
{
	printf("%f", va_arg(*list, double));
}
/**
 * string_print - check the code
 * @list: macro
 */
void string_print(va_list *list)
{
	char *str = va_arg(*list, char *);

	printf("%s", (str == NULL) ? "(nil)" : str);
}
/**
 *  print_all - check the code
 * @format: char
 */
void print_all(const char *const format, ...)
{
	fmt f[] = {
		{'c', char_print},
		{'i', int_print},
		{'f', float_print},
		{'s', string_print},
		{'\0', NULL}};
	const char *sepa = "";
	va_list list;
	int i = 0, j;

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (f[j].type)
		{
			if (f[j].type == format[i])
			{
				printf("%s", sepa);
				f[j].function(&list);
				sepa = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
