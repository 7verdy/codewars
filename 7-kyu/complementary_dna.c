// https://www.codewars.com/kata/554e4a2f232cdd87d9000038

#include <stdlib.h>
#include <string.h>

char *dna_strand(const char *dna)
{
    char *res = calloc(strlen(dna) + 1, sizeof(char));
    for (int i = 0; i < strlen(dna); i++)
    {
        if (dna[i] == 'A')
            res[i] = 'T';
        else if (dna[i] == 'T')
            res[i] = 'A';
        else if (dna[i] == 'G')
            res[i] = 'C';
        else if (dna[i] == 'C')
            res[i] = 'G';
    }
    return res;
}