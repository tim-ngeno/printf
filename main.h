#ifndef MAIN_H
#define MAIN_H

/*header files*/
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>


/*function prototypes*/
int _printf(const char *format, ...);

int _putchar(char s);

int print_string(char *s);

int print_d(int d);

int print_octal(unsigned int n);

#endif /* MAIN_H */
