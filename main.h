#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_37(void);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_bin(va_list val);

#endif
