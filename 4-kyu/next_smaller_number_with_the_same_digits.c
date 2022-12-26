// https://www.codewars.com/kata/5659c6d896bc135c4c00021e

#define _GNU_SOURCE
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

long long next_smaller_number(unsigned long long n)
{
    char *ntos;
    asprintf(&ntos, "%llu", n);
    int x = -1, y = -1;
    for (long i = strlen(ntos) - 2; i != -1; i--)
    {
        if (x != -1)
            break;
        if (ntos[i] - '0' > ntos[i + 1] - '0')
        {
            x = i;
            for (unsigned long j = i + 1; j < strlen(ntos); j++)
            {
                if ((y == -1 || ntos[j] > ntos[y]) && ntos[j] < ntos[x])
                {
                    y = j;
                }
            }
        }
    }
    char tmp = ntos[x];
    ntos[x] = ntos[y];
    ntos[y] = tmp;

    y = x + 1;
    for (int a = x + 1; a - 1 < strlen(ntos); a++)
    {
        for (int b = a + 1; b < strlen(ntos); b++)
        {
            if (ntos[b] > ntos[a])
            {
                char tmp = ntos[a];
                ntos[a] = ntos[b];
                ntos[b] = tmp;
            }
        }
    }
    if (ntos[0] == '0' || strtoul(ntos, NULL, 10) >= n)
        return -1;
    return strtoul(ntos, NULL, 10);
}