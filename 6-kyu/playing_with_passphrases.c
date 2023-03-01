// https://www.codewars.com/kata/559536379512a64472000053

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char* playPass(char* s, int n)
{
  size_t length = strlen(s);
  char *res = calloc(length + 1, 1);
  for (int i = 0; s[i]; i++)
  {
    char base = islower(s[i]) ? 'a' : 'A', offset = i & 1 ? 'a' : 'A';
    if (isalpha(s[i])) {
      res[length - 1 - i] = offset + ((s[i] - base + n) % 26);
    } else if (isdigit(s[i])) {
      res[length - 1 - i] = '9' - s[i] + '0';
    } else {
      res[length - 1 - i] = s[i];
    }
  }
  return res;
}