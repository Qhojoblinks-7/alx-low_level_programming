#ifndef MAIN_H
#define MAIN_H

void flush_buffer(char *buffer, int *buffer_index);
void hexadecimal(int num);
void Hexadecimal(int num);
int _printf(const char *format, ...);
void _binary(int b);
void octal(int oct);
int my_printf_string(const char *format, ...);
int my_printf_integer(const char *format, ...);
int my_printf_unsigned(const char *format, ...);
int my_printf_hex(const char *format, ...);
int my_printf_octal(const char *format, ...);
int my_printf_bin(const char *format, ...);
int my_printf_pointer(const char *format, ...);
#endif
