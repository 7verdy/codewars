// https://www.codewars.com/kata/5410c0e6a0e736cf5b000e69

#include <stddef.h>

size_t hamming_distance (const char *a, const char *b)
{
  size_t diffs = 0;
  for (size_t i = 0; a[i]; i++)
    if (a[i] != b[i]) diffs++;
  return diffs;
}