// https://www.codewars.com/kata/5511b2f550906349a70004e1

#include <math.h>
#include <string.h>

int mod(int base, char *exp)
{
    int mod = 0;
    for (int i = 0; i < strlen(exp); i++)
        mod = (mod * 10 + exp[i] - '0') % base;
    return mod;
}

int last_digit(const char *a, const char *b)
{
    if ((strlen(a) == 1 && strlen(b) == 1 && a[0] == '0' && b[0] == '0') || (strlen(a) == 1 && a[0] == '0'))
        return 0;

    if (strlen(b) == 1 && b[0] == '0')
        return 1;

    int rem = mod(4, b);
    if (!rem)
        rem = 4;

    return (int)pow(a[strlen(a) - 1] - '0', rem) % 10;
}