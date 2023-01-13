// https://www.codewars.com/kata/556deca17c58da83c00002db

#include <stdlib.h>

long long *tribonacci(const long long signature[3], size_t n)
{
    if (!n)
        return NULL;
    long long *res = malloc(n * sizeof(long long));
    res[0] = signature[0], res[1] = signature[1], res[2] = signature[2];
    for (size_t i = 0; i < n - 3 && n > 3; i++)
        res[i + 3] = res[i] + res[i + 1] + res[i + 2];
    return res;
}