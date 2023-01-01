// https://www.codewars.com/kata/5287e858c6b5a9678200083c

#include <stdbool.h>
#include <math.h>

bool narcissistic(int num)
{
    int sum = 0;
    for (int v = num, ndigits = log10(num) + 1; v; v /= 10)
    {
        sum += pow(v % 10, ndigits);
        if (sum > num)
            return false;
    }
    return sum == num;
}