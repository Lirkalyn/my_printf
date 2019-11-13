/*
** EPITECH PROJECT, 2019
** Day_06
** File description:
** my_getnbr_base
*/

#include <stddef.h>

int check_error20(char const *str, char const *base)
{
    if (str == NULL)
        return (1);
    else if (base == NULL)
        return (1);
    return (0);
}

int my_strlen14(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int convert(char const *str, int num[])
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9'){
            num[i] = (str[i] - '0');
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            num[i] = (str[i] - 55);
            }
        i++;
    }
}

int convertbase(char const *base)
{
    int i = 0;
    int res = 0;
    while (base[i] != '\0') {
        res *= 10;
        res += ((base[i] - '0'));
        i++;
    }
    return (res);
}

int my_getnbr_base(char const *str, char const *base)
{
    if (check_error20(str, base))
        return (0);

    int i = 0;
    int len = my_strlen14(str);
    int num[len];
    int power = 1;
    int res = 0;
    int convbase = 0;

    while (i <= len) {
        num[i] = 0;
        i++;
    }
    i = 0;
    convert(str, num);
    convbase = convertbase(base);
    for (i = (len - 1); i >= 0; i--)
    {
        if (num[i] >= convbase)
            return (0);
        res += num[i] * power;
        power *= convbase;
    }
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == '-' && res > 0)
            res *= (-1);
        else if (str[i] == '+' && res < 0)
            res *= (-1);
        i++;
    }
    return (res);
}
