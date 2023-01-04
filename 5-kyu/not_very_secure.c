// https://www.codewars.com/kata/526dbd6c8c0eb53254000110

#include <stdbool.h>
#include <ctype.h>

bool alphanumeric(const char *strin)
{
    if (!*strin)
        return false;
    for (int i = 0; strin[i]; i++)
        if (!isalnum(strin[i]))
            return false;
    return true;
}