// https://www.codewars.com/kata/5a19226646d843de9000007d

#include <ctype.h>
#include <stdio.h>

int is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

unsigned count_consonants(const char *str)
{
    unsigned ab[26] = {0}, unique = 0;
    for (int i = 0; str && str[i]; i++)
    {
        if (!isalpha(str[i]))
            continue;
        if (!ab[tolower(str[i]) - 'a'] && !is_vowel(tolower(str[i])))
            unique++;
        ab[tolower(str[i]) - 'a']++;
    }
    return unique;
}