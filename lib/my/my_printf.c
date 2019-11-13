/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** main
*/

#include <stdarg.h>
//#include <stdio.h>
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

/*void main(void)
{
    char rd[4] = "test";
    rd[2] = 6;
    rd[3] = 127;
    //printf("x = %x d = %d X = %X p = %p #x = %#x #X = %#X\n", &rd[0], &rd[0], rd[0], (void *) &rd[0], rd[0], rd[0]);
    //printf("before = %p et = %x\n", (void *) &rd[0], &rd[0]);
    my_printf("test = %d azert = %cbz %s e%Srh, test = %p! bi%%sn50 = %b, octa50 = %o et u = %u::: %xm %X\n", 1852, 'a', "yolo", rd, (void *) &rd[0], 50, 50, 4294967295, 785262, 785263);
}*/