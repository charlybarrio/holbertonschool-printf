#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *struct pf - Struct used to print different types.
 *@pf: Data type to print.
 *@f: Function to print;
 **/

typedef struct pf
{
	char *pf;
	int (*f)(va_list arg);
} pf_t;

int pf_c(va_list c);
int pf_s(va_list s);
int pf_d(va_list d);
int pf_i(va_list i);
int _printf(const char *format, ...);
int _putchar(char c);
int (*select_func(const char *s))(va_list arg);

#endif
