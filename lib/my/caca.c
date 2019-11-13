/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** main
*/

void count(char *str, int *num)
{
    int i;
    int j;
    char test[7][2] = {"%d", "%c", "%s", "%S", "%p", "%b", 0};
    int ok = 0;
    int pos = 0;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < 2; j++) {
            if (str[(i + j)] == test[pos][j])
                ok++;
            else if (pos < 7) {
                pos++;
                j = 0;
            }
        }
        if (ok == 2)
            *num += 1;
        ok = 0;
        pos = 0;
    }
}

void count2(char *str, int *num)
{
    int i;
    int j;
    char test[3][3] = {"%ld", "%hd", 0};
    int ok = 0;
    int pos = 0;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < 3; j++) {
            if (str[(i + j)] == test[pos][j])
                ok++;
            else if (pos < 3) {
                pos++;
                j = 0;
            }
        }
        if (ok == 3)
            *num += 1;
        pos = 0;
        ok = 0;
    }
}


    my_printf("tetdtddte%s", 1, "aaa", 'v');
    printf("ok = %d\n", va_arg(param, int));
    printf("ok = %s\n", va_arg(param, char *));
    printf("ok = %c\n", va_arg(param, int));


    /*char test[18][2] = {"%d", "%c", "%s", "%S", "%p", "%b",
        "%e", "%E", "%f", "%g", "%G", "%o", "%u", "%x", "%X", "%n", "%%", 0}; //e et*/

void main(void)
{
    char rd[4] = "test";
    rd[2] = 6;
    rd[3] = 127;
    //printf("x = %x d = %d X = %X p = %p #x = %#x #X = %#X\n", &rd[0], &rd[0], rd[0], (void *) &rd[0], rd[0], rd[0]);
    //printf("before = %p et = %x\n", (void *) &rd[0], &rd[0]);
    my_printf("test = %d azert = %cbz %s e%Srh, test = %p! bi%%sn50 = %b, octa50 = %o et u = %u::: %xm %X\n", 1852, 'a', "yolo", rd, (void *) &rd[0], 50, 50, 4294967295, 785262, 785263);
}