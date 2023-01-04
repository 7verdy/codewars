// https://www.codewars.com/kata/5d41e16d8bad42002208fe1a/train/c

#include <stdlib.h>
#include <string.h>

int includes(const char *str, char c)
{
    for (size_t i = 0; str[i]; i++)
        if (str[i] == c)
            return 1;
    return 0;
}

char *more_zeroes(const char *str)
{
    char *res = calloc(sizeof(str) + 1, sizeof(char));
    size_t idx = 0;
    for (size_t i = 0; str[i]; i++)
    {
        char c = str[i];
        size_t zeros = 0, ones = 0;
        for (size_t j = 0; c >> j; j++)
        {
            if (c >> j & 1)
                ones++;
            else
                zeros++;
        }
        if ((zeros > ones) & !includes(res, c))
            res[idx++] = c;
    }
    return res;
}