// https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7

#include <ctype.h>

char *makeUpperCase(char *string)
{
    for (int i = 0; string[i]; i++)
        string[i] = toupper(string[i]);
    return string;
}