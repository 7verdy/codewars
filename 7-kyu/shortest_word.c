// https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9

#include <string.h>

// Generic solution using strcspn.
size_t find_short(const char *s)
{
    size_t min = 0;
    const char *seps = " ";

    while (*s)
    {
        s += strspn(s, seps);
        if (*s)
        {
            size_t len = strcspn(s, seps);
            if (min == 0 || (len > 0 && len < min))
                min = len;
            s += len;
        }
    }
    return min;
}