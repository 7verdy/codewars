// https://www.codewars.com/kata/54b42f9314d9229fd6000d9c

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *DuplicateEncoder (const char *string)
{
  char *res = calloc(1, strlen(string) + 1);
  short seen[256] = { 0 };

  for (int i = 0; string[i]; i++) seen[(int)tolower(string[i])]++;
  for (int i = 0; string[i]; i++) res[i] = seen[(int)tolower(string[i])] > 1 ? ')' : '(';

  return res;
}