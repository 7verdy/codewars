// https://www.codewars.com/kata/586dd26a69b6fd46dd0000c0

#include <stdlib.h>

char *my_first_interpreter(const char *code)
{
    int cell = 0;
    char *msg = malloc(1);
    int idx = 0;
    for (int i = 0; code[i]; i++)
    {
        if (code[i] == '+')
            cell++;
        if (code[i] == '.')
        {
            msg[idx] = (char)cell;
            msg = realloc(msg, 1 + idx++);
        }
    }
    msg[idx] = '\0';
    return msg;
}
