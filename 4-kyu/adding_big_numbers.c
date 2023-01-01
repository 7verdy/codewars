// https://www.codewars.com/kata/525f4206b73515bffb000b21

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *add(const char *a, const char *b)
{
    size_t al = strlen(a), bl = strlen(b);
    size_t max = al > bl ? al : bl;
    char *res = calloc(max + 2, sizeof(char));

    int carry = 0;
    for (size_t i = 0; i < max; i++)
    {
        if (al - i <= 0 || bl - i <= 0)
            break;
        int ai = a[al - i - 1] - '0';
        int bi = b[bl - i - 1] - '0';
        int sum = (ai + bi + carry) % 10;
        if (ai + bi + carry >= 10)
            carry = 1;
        else
            carry = 0;
        res[max - i - 1] = sum + '0';
    }
    if (al > bl)
    {
        size_t left = al - bl;
        for (; left; left--)
        {
            res[left - 1] = (a[left - 1] - '0' + carry) % 10 + '0';
            if (a[left - 1] - '0' + carry >= 10)
                carry = 1;
            else
                carry = 0;
        }
    }
    else
    {
        size_t left = bl - al;
        for (; left; left--)
        {
            res[left - 1] = (b[left - 1] - '0' + carry) % 10 + '0';
            if (b[left - 1] - '0' + carry >= 10)
                carry = 1;
            else
                carry = 0;
        }
    }
    if (carry)
    {
        memmove(&res[1], &res[0], max * sizeof(int));
        res[0] = '1';
    }
    return res;
}