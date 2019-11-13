/*
** EPITECH PROJECT, 2019
** azef
** File description:
** azsed
*/

#include "include/my.h"

void main(void)
{
    char rd[4] = "test";
    rd[2] = 6;
    rd[3] = 127;
    //printf("x = %x d = %d X = %X p = %p #x = %#x #X = %#X\n", &rd[0], &rd[0], rd[0], (void *) &rd[0], rd[0], rd[0]);
    //printf("before = %p et = %x\n", (void *) &rd[0], &rd[0]);
    my_printf("test = %d azert = %cbz %s e%Srh, test = %p! bi%%sn50 = %b, octa50 = %o et u = %u::: %xm %X\n", 1852, 'a', "yolo", rd, (void *) &rd[0], 50, 50, 4294967295, 785262, 785263);
}