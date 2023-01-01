// https://www.codewars.com/kata/5f7c38eb54307c002a2b8cc8

#include <stdbool.h>

bool is_outside(int oppar, int clpar)
{
    return ((!oppar && !clpar) ||
            ((oppar && clpar) && (oppar == clpar)));
}

void remove_parentheses(const char *str_in, char *str_out)
{
    int idx = 0;
    int oppar = 0;
    int clpar = 0;
    while (*(str_in))
    {
        if (*str_in == '(')
            oppar++;
        else if (*str_in == ')')
            clpar++;
        else if (is_outside(oppar, clpar))
            str_out[idx++] = *str_in;
        str_in++;
    }
    str_out[idx] = '\0';
}