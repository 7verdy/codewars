// https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1

#include <ctype.h>
#include <stddef.h>

size_t duplicate_count(const char *text)
{
    size_t dups = 0;
    int al[26] = {0};
    int num[10] = {0};
    for (int i = 0; text[i]; i++)
    {
        if (isalpha(text[i]))
        {
            if (al[tolower(text[i]) - 'a'] == 1)
                dups++;
            al[tolower(text[i]) - 'a']++;
        }
        else if (isdigit(text[i]))
        {
            if (num[text[i] - '0'] == 1)
                dups++;
            num[text[i] - '0']++;
        }
    }
    return dups;
}