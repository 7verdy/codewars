// https://www.codewars.com/kata/587731fda577b3d1b0001196

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *camel_case(const char *s)
{
  char *res = calloc(strlen(s) + 1, 1);
  int i = 0, j = 0;
  while (s[i])
  {
    if (s[i] == ' ')                     i++;
    else if (i == 0 || s[i - 1] == ' ')  res[j++] = toupper(s[i++]);
    else                                 res[j++] = s[i++];
  }
  return res;
}