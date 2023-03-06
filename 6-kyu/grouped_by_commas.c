// https://www.codewars.com/kata/5274e122fc75c0943d000148

#include <stdlib.h>
#include <string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

char *group_by_commas(int n) {
  char *res = calloc(32, 1);
  int i = 0, t = 0;
  for (; n; i++, n /= 10)
  {
    if (t && t % 3 == 0) { res[i++] = ','; t = 0; }
    res[i] = n % 10 + '0';
    t++;
  }
  return strrev(res);
}