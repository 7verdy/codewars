// https://www.codewars.com/kata/5208f99aee097e6552000148

#include <ctype.h>
#include <stddef.h>

char* solution(const char *camelCase) {
  char *res = calloc(1024, 1);
  int i = 0, j = 0;
  while (camelCase[j])
  {
    if (isupper(camelCase[j])) { res[i++] = ' '; }
    res[i++] = camelCase[j++];
  }
  return res;
}