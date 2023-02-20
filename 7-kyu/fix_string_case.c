// https://www.codewars.com/kata/5b180e9fedaa564a7000009a

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *solve(const char *str) {
  unsigned lower = 0, upper = 0;
  char *res = calloc(strlen(str) + 1, 1);

  for (unsigned i = 0; str[i]; i++)
    islower(str[i]) ? lower++ : upper++;
  for (unsigned i = 0; str[i]; i++)
    res[i] = lower < upper ? toupper(str[i]) : tolower(str[i]);

  return res;
}