#define _POSIX_C_SOURCE 200809L

#include <string.h>

int comparator(const void *a, const void *b)
{
    const char **aa = (const char **)a;
    const char **bb = (const char **)b;

    const char *cmp[] = {
        "On", "12", "11", "10", "9 ", "8 ", "7 ",
        "6 ", "5 ", "4 ", "3 ", "2 ", "a "};

    char *ap = strndup(*aa, 2);
    char *bp = strndup(*bb, 2);

    int ai = 0;
    int bi = 0;
    for (int i = 0; i < 13; i++)
    {
        if (!strcmp(cmp[i], ap))
            ai = i;
        if (!strcmp(cmp[i], bp))
            bi = i;
    }
    return ai - bi;
}