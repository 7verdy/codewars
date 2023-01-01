// https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d

#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    return strlen(ending) > strlen(string) ? 0 :
        !strncmp(string + strlen(string) - strlen(ending), ending, strlen(ending));
}