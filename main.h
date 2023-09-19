#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
  * string - Typedef for char *
  */
typedef char *string;
/**
  * struct specifier_format - struct for formating
  *
  * @spec: specifier
  * @func: pointer to functions
  */
typedef struct specifier_format
{
	string spec;
	int (*func)(va_list varArg);
} specifier_format;

#include <stddef.h>
int _printf(const string format, ...);
int _putchar(char c);
int _print_char(va_list varArg);
int _print_str(va_list varArg);
int _print_mod(va_list varArg);
int _strlen(string str);
#endif
