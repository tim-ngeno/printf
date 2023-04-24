#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

#define BUFSIZE 1024
#define TRUE (1 == 1)
#define FALSE !TRUE
#define LOWHEX 0
#define UPHEX 1

typedef struct stock_s
{
	const char *fmt;
	int i;
	va_list *args;
	char *buffer;
	int buf_index;
	int flag;
	int space;
	char c0;
	char c1;
	char c2;
	char c3;
	int error;
} stock_t;

typedef struct matches_s
{
	char ch;
	void (*func)(stock_t *stk);
} matches_t;

int _printf(const char *format, ...);
stock_t *build_stock(va_list *args_list, const char *format);
int end_func(stock_t *arg_stk);

void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void write_buffer(stock_t *stk);
void puts_buffer(stock_t *stk, char *str);

void rev_string(char *s);
int _strlen(char *s);
int _strlenconst(const char *s);
int _putchar(char c);
void puts_mod(char *str, unsigned int l);

void (*match_specifier(stock_t *stk))(stock_t *stk);
void parse_specifiers(stock_t *stk);

void print_hex(stock_t *stk, unsigned long int n, int hexcase, int size);
void p_longlowhex(stock_t *stk);
void p_longuphex(stock_t *stk);
void p_lowhex(stock_t *stk);
void p_uphex(stock_t *stk);

void print_integers(stock_t *stk, long int n);
void p_int(stock_t *stk);
void p_longint(stock_t *stk);
void print_unsign(stock_t *stk, unsigned long int n);
void p_uint(stock_t *stk);
void p_ulongint(stock_t *stk);

void print_oct(stock_t *stk, unsigned long int n, int size);
void p_oct(stock_t *stk);
void p_longoct(stock_t *stk);

void p_char(stock_t *stk);
void p_string(stock_t *stk);
void p_string_hex(stock_t *stk);
void p_pointer(stock_t *stk);
void p_rev_string(stock_t *stk);
void p_rot13(stock_t *stk);
void p_percent(stock_t *stk);
void p_binary(stock_t *stk);

#endif
