// https://www.codewars.com/kata/5842df8ccbd22792a4000245

#define _GNU_SOURCE

#include <math.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>

char *expandedForm(char *string, unsigned long long n)
{
    unsigned long long dup = n;
    size_t digits = floor(log10(n)) + 1;
    char *p = string;
    for (ssize_t i = digits - 1; i > -1; i--)
    {
        unsigned long long digit = n / powl(10, i);
        if (digit)
        {
            p += sprintf(p, "%llu", digit);
            p += sprintf(p, "%0*llu", i, 0);
            p += sprintf(p, "%s", i && (n - digit * powl(10, i)) ? " + " : "");
            n -= digit * powl(10, i);
        }
    }
    if (p > string)
    {
        p--;
    }
    if (dup % 10 == 0)
    {
        *(p)++ = '0';
    }
    *p = '\0';
    return string;
}