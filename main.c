/*
** EPITECH PROJECT, 2019
** test
** File description:
** test
*/

#include <stdarg.h>
#include <stdio.h>
#include "include/my.h"

void main(void)
{
    int b;
    char rd[4] = "test";
    rd[2] = 6;
    rd[3] = 127;
    //printf("x = %x d = %d X = %X p = %p #x = %#x #X = %#X\n", &rd[0], &rd[0], rd[0], (void *) &rd[0], rd[0], rd[0]);
    //printf("before = %p et = %x\n", (void *) &rd[0], &rd[0]);
    my_printf("test = %d aze%+drt = %cbz %s e%Srh, te%nst = %p! bi%%sn50 = %b, oc%#ota50 = %o et u = %u::: %xm %X almost over : %#x and %#X\n", 1852, 3, 'a', "yolo", rd, &b, (void *) &rd[0], 50, 4294967295, 50, 4294967295, 785262, 785263, 785262, 785263);
    printf("---.b = %d\n", b);
}