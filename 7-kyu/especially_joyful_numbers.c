// https://www.codewars.com/kata/570523c146edc287a50014b1

#include <stdbool.h>
#include <stdio.h>

unsigned reverse(unsigned n)
{
    unsigned r = 0;
    while (n)
    {
        unsigned rem = n % 10;
        r = r * 10 + rem;
        n /= 10;
    }
    return r;
}

bool number_joy(unsigned number)
{
    unsigned sum = 0;
    for (unsigned dup = number; dup; dup /= 10)
    {
        sum += dup % 10;
    }
    return sum * reverse(sum) == number;
}