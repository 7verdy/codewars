// https://www.codewars.com/kata/5f25f475420f1b002412bb1f

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

char *find_the_number_plate(int id)
{
  char *res;
  int third = id / 999 / 26 / 26;
  int second = (id / 999 / 26) % 26;
  int first = (id / 999) % 26;

  asprintf(&res, "%c%c%c%03u", first + 'a', second + 'a', third + 'a', (id % 999) + 1);
  return res;
}