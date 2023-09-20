#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
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
int recursive_print(long num, int len);
int _print_int(va_list varArg);
#endif
