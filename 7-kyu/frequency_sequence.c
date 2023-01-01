// https://www.codewars.com/kata/585a033e3a36cdc50a00011c

#define _XOPEN_SOURCE 500

#include <stdio.h>

char *char_frequencies(const char *string, char separator, char *result)
{
    int frequencies[256] = {0};
    *result = '\0';
    if (!*string)
        return result;
    for (int i = 0; string[i]; i++)
        frequencies[(int)string[i]] += 1;

    for (int i = 0, idx = 0; string[i]; i++)
    {
        idx += sprintf(result + idx, "%d", frequencies[(int)string[i]]);
        if (string[i + 1])
            result[idx++] = separator;
    }
    return result;
}