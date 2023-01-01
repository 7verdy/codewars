// https://www.codewars.com/kata/57f609022f4d534f05000024

#include <stddef.h>

int stray(size_t n, int arr[n])
{
    int imposter = 0;
    for (int i = 0; i < n; i++)
        imposter ^= arr[i];
    return imposter;
}