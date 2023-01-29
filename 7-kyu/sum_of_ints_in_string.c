// https://www.codewars.com/kata/598f76a44f613e0e0b000026

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

unsigned sum_string_integers (const char *string)
{
  char *end = string + strlen(string) + 1;
  int sum = 0;
  char *tmp;
  while (*string)
  {
    while (!isdigit(*string)) string++;
    if (string >= end) break;
    sum += strtoul(string, &tmp, 10);
    string = tmp;
  }
  return sum;
}
