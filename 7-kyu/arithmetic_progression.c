// https://www.codewars.com/kata/55caf1fd8063ddfa8e000018

#include <stdlib.h>

char *arithmetic_sequence_elements(int a, int d, size_t n)
{
  if (!n) return calloc(1, 1);
  char *res;
  asprintf(&res, "%d", a);
  for (int current = a + d, i = 1; i < n; i++, current += d) {
    strcat(res, ", ");
    char *tmp;
    asprintf(&tmp, "%d", current);
    strcat(res, tmp);
  }
  return res;
}