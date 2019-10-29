#ifndef _PRINTF_
#define _PRINTF_
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024

typedef struct buffer
{
	char buffer[BUF_SIZE];
	int n_chars;
	int buf_init_pox;
} xbuf;

typedef struct valid_string
{
	char format;
	void (*create)(char*, va_list, xbuf *buf);
} v_string;
int _strl(const char *s);
char *takes_format_string(const char *format);
int check_cformatter(char c);
 void reconoced_format_string(char *change, xbuf *buf);

void fill(char *buffer);
void p_buffer(char *buffer, int size);
xbuf *string_to_buff(xbuf *buf, const char *c, int size);
xbuf *char_to_buff(xbuf *buf, char c);

/**
 *Int to string functions
 */
void real_number(char *str, va_list valist, xbuf *buf);
int int_to_str(int num, char *str, int digit);
int digits(int num);

/**
 *Function to save an address into an string
 *
 */
void real_address(char *str, va_list valist, xbuf *buf);
char *str_concat(char *s1, char *s2);
char *reversed_new_pointer_str(char *str);
char *rot13(char *str);
int check_reverse(char *str);
void reverse(char *str);
void reverse_numbers(char *a, int n);
char *S(char *str);

void (*s_func(char c))(char *f, va_list, xbuf *);

int _printf(const char *format, ...);

char *n_converter(unsigned long int n, int base, char *ascci);
void real_string(char *str, va_list valist, xbuf *buf);
void real_n_converter(char *str, va_list valist, xbuf *buf);
void real_char(char *str, va_list valist, xbuf *buf);
int _nlen(unsigned int n);
#endif
