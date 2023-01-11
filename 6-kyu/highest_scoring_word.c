// https://www.codewars.com/kata/57eb8fcdf670e99d9b000272

#define _POSIX_C_SOURCE 200809L

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
** @param str: a C-string containing only lowercase letters and spaces (' ')
** @return:    a C-string allocated on the heap containing the highest scoring word of str
*/

char *getCurrentWord(const char *str, unsigned start, unsigned *len)
{
    while (str[start + *len] != ' ')
        (*len)++;
    return strndup(str + start, *len);
}
char *highestScoringWord(const char *str)
{
    unsigned idx = 0;
    unsigned start = 0, end = 0, max_score = 0;
    while (idx < strlen(str))
    {
        unsigned len = 0, score = 0;
        char *current = getCurrentWord(str, idx, &len);
        for (int i = 0; current[i]; i++)
            score += current[i] - 'a' + 1;
        if (score > max_score)
        {
            start = idx;
            end = len;
            max_score = score;
        }
        idx += len + 1;
        while (str[idx] == ' ')
            idx++;
    }
    return strndup(str + start, !end ? 1 : end);
}