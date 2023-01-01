// https://www.codewars.com/kata/58039f8efca342e4f0000023

#include <ctype.h>
int isvowel(int ch)
{
    char c = tolower(ch);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

char *change_it_up(char *str_out, const char *str_in)
{
    *str_out = '\0';
    if (!*str_in)
        return str_out;
    for (int i = 0; str_in[i]; i++)
    {
        if (isalpha(str_in[i]))
        {
            char c = isupper(str_in[i]) ? ((str_in[i] - 'A' + 1) % 26 + 'A') : ((str_in[i] - 'a' + 1) % 26 + 'a');
            str_out[i] = isvowel(c) ? toupper(c) : tolower(c);
        }
        else
            str_out[i] = str_in[i];
        if (!str_in[i + 1])
            str_out[i + 1] = '\0';
    }
    return str_out;
}