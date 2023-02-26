// https://www.codewars.com/kata/530e15517bc88ac656000716

#define _XOPEN_SOURCE 500

#include <ctype.h>
#include <stddef.h>
#include <string.h>

char *rot13(const char *src)
{
  char *res = strdup(src);
  for (int i = 0; res[i]; i++)
  {
    if (isalpha(src[i]))
    {
      if (islower(src[i])) { res[i] = 'a' + (src[i] - 'a' + 13) % 26; }
      else { res[i] = 'A' + (src[i] - 'A' + 13) % 26; }
    }
    else res[i] = src[i];
  }
  return res;
}