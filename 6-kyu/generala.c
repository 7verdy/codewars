// https://www.codewars.com/kata/5f70c55c40b1c90032847588

#define _XOPEN_SOURCE 500

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b)
{
  return *(char*)a - *(char*)b;
}

bool is_straight(unsigned short *values)
{
  for (int i = 0; i < 6; i++)
    if (values[i] > 1) return false;
  return true;
}

unsigned short points(const char *dice)
{
  char *d = strdup(dice);
  qsort((void*)d, 5, sizeof(char), comp);
  unsigned short values[6] = { 0 };
  int min = d[0] - '0', count = 1;
  for (int i = 0; d[i]; i++) {
    values[d[i] - '1']++;
    if (i) {
      if (d[i] - '0' == min + 1 || (min == 1 && i == 1)) { count++; min = d[i] - '0'; }
    }
  }
  if (values[d[0] - '1'] == 5) return 50;
  if (count == 5) return 20;
  for (int i = 0; i < 6; i++)
  {
    if (values[i] == 4) return 40;
    else if (values[i] == 3)
      for (int i = 0; i < 6; i++) if (values[i] == 2) return 30;
  }
  return 0;
}