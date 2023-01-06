// https://www.codewars.com/kata/51edd51599a189fe7f000015/train/c

#include <stddef.h>
#include <math.h>
double mean_square_error(size_t n, const int a[n], const int b[n])
{
    double res = 0;
    for (size_t i = 0; i < n; i++)
        res += (abs(a[i] - b[i]) * abs(a[i] - b[i]));
    return res / n;
}