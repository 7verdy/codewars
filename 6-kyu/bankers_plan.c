// https://www.codewars.com/kata/56445c4755d0e45b8c00010a

#define true 1
#define false 0

#include <stdio.h>

int fortune(int f0, double p, int c0, int n, double i)
{
    int bk = f0;
    for (int y = 1; y < n; y++)
    {
        bk = bk * (1 + (float)p / 100) - c0;
        c0 *= 1 + (i / 100);
        if (bk < 0)
            return false;
    }
    return true;
}