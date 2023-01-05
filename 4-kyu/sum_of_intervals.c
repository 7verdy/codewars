// https://www.codewars.com/kata/52b7ed099cdc285c300001cd

#include <stdlib.h>

struct interval
{
    int first;
    int second;
};

int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int comparator(const void *a, const void *b)
{
    struct interval *i1 = (struct interval *)a;
    struct interval *i2 = (struct interval *)b;
    return (i1->first - i2->first);
}

int sum_intervals(const struct interval *v, size_t n)
{
    struct interval *dup = (struct interval *)v;

    qsort(dup, n, sizeof(struct interval), comparator);

    int index = 0;
    for (size_t i = 1; i < n; i++)
    {
        if (dup[index].second >= dup[i].first)
        {
            dup[index].second = max(dup[index].second, dup[i].second);
        }
        else
        {
            index++;
            dup[index] = dup[i];
        }
    }

    int sum = 0;
    for (int i = 0; i <= index; i++)
        sum += (dup[i].second - dup[i].first);

    return sum;
}