/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** main
*/

#include <stdarg.h>
#include <stdint.h>
#include "my.h"

char *pre_replace_str(char *str, va_list param, int *i, int *j)
{
    char test[13][2] = {"%d", "%c", "%s", "%S", "%p", "%b",
        "%o", "%%", "%u", "%x", "%X", "%l", 0};
    int ok = 0;
    int pos = 0;

    for (*i = 0; str[*i] != '\0'; *i += 1) {
        for (*j = 0; *j < 2; *j += 1) {
            if (str[(*i + *j)] == test[pos][*j])
                ok++;
            else if (pos < 13) {
                pos++;
                *j = 0;
            }
        }
        if (ok == 2)
            str = wich_switch(str, param, pos, *i);
        ok = 0;
        pos = 0;
    }
    return str;
}

void my_printf(char *str, ...)
{
    char *res;
    int i;
    int j;
    int num = 0;
    va_list param;

    va_start (param, str);
    str = pre_replace_str(str, param, &i, &j);
    my_putstr(str);
}