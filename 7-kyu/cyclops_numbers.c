// https://www.codewars.com/kata/56b0bc0826814364a800005a/train/c

#include <stdbool.h>

bool cyclops(unsigned long n)
{
    int right = 0, left = 0;
    bool middle = false;
    for (int i = 0; n >> i; i++)
    {
        if (middle && (n >> i) & 1)
            left++;
        else if (!middle && (n >> i) & 1)
            right++;
        else if (!((n >> i) & 1))
            middle = true;
    }
    return right == left;
}