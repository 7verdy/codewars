// https://www.codewars.com/kata/57c15d314677bb2bd4000017/solutions/c

#include <stdlib.h>

unsigned doors(unsigned n)
{
    int *rooms = calloc(n, sizeof(int));
    for (unsigned i = 0; i < n; i++)
        for (unsigned j = i; j < n; j += i + 1)
            rooms[j] = !rooms[j];

    unsigned opened = 0;
    for (unsigned i = 0; i < n; i++)
        if (rooms[i])
            opened++;
    return opened;
}