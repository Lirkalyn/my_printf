/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** .h
*/

#ifndef _MY_H_
#define _MY_H_

#include <stdarg.h>

int my_putstr(char *str);
char *wich_switch(char *str, va_list param, int pos, int i);
char *replace_str(char *str, va_list param, int pos, int i);
char *replace_str_ds(char *str, int num, int pos);
char *replace_str_c(char *str, char letter, int pos);
char *replace_str_s(char *str, char *src, int pos, int opt);
char *replace_str_ss(char *str, char *src, int pos);
char *replace_str_p(char *str, void *src, int pos);
char *replace_str_b(char *str, unsigned int src, int pos);
char *replace_str_o(char *str, unsigned int src, int pos);
char *replace_str_pour(char *str, int pos, int opt);
char *replace_str_u(char *str, unsigned int num, int pos);
char *replace_str_x(char *str, int src, int pos);
char *replace_str_xx(char *str, int src, int pos);
void my_printf(char *str, ...);

#endif
