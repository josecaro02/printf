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

char *reversed_new_pointer_str(char *str);
int check_reverse(char *str);
void reverse(char *str);

void (*s_func(char c))(char *f, va_list, xbuf *);

int _printf(const char *format, ...);

char *n_converter(unsigned int n, int base, char *ascci);
void real_string(char *str, va_list valist, xbuf *buf);
void real_n_converter(char *str, va_list valist, xbuf *buf);
void real_char(char *str, va_list valist, xbuf *buf);
int _nlen(unsigned int n);
#endif
