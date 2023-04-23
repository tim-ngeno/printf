#ifndef MAIN_H
#define MAIN_H

/*header files*/
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

/*memory allocation*/
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void write_buffer(unsigned int bits_c, *bin);
void puts_buffer(unsigned int bits_c, *bin, char *str);

int _printf(const char *format, ...);

int _putchar(char s);

void print_binary(unsigned int bits_c, *bin);

#endif /* MAIN_H */
