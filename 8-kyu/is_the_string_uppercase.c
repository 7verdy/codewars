// https://www.codewars.com/kata/56cd44e1aa4ac7879200010b

#include <stdbool.h>
#include <ctype.h>

bool is_uppercase(const char *source)
{
    for (; *source; source++)
        if (isalpha(*source) && !isupper(*source))
            return false;
    return true;
}