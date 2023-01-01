// https://www.codewars.com/kata/569b5cec755dd3534d00000f

#include <math.h>
#include <stdlib.h>

long long newAvg(double *arr, size_t szArray, double navg)
{
    double sum = 0;
    for (size_t i = 0; i < szArray; i++)
        sum += arr[i];
    long long last = ceil(navg * (szArray + 1) - sum);
    if (last <= 0)
        return -1;
    return last;
}