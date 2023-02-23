// https://www.codewars.com/kata/62e4df54323f44005c54424c

#include <stdlib.h>

unsigned seq(unsigned n)
{
  unsigned *array = calloc(n, sizeof(unsigned));
  for (unsigned i = 2; i < n; i++)
  {
    for (int j = i - 2; j > -1; j--) {
      if (array[j] == array[i - 1]) { array[i] = i - 1 - j; break; }
    }
  }
  return array[n - 1];
}