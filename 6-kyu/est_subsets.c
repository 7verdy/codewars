// https://www.codewars.com/kata/584703d76f6cf6ffc6000275

#include <stdlib.h>

unsigned long long est_subsets(size_t length, const char array[length])
{
  int histo[256] = { 0 };
  size_t idx = 0;
  char *dis = calloc(length, sizeof(char));
  for (size_t i = 0; i < length; i++)
    if (!histo[array[i]]) { dis[idx++] = array[i]; histo[array[i]]++;}
  return (1ul << idx) - 1;
}