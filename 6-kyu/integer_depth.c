// https://www.codewars.com/kata/59b401e24f98a813f9000026

#include <stdbool.h>

bool is_done(int *digits)
{
  for (int i = 0; i < 10; i++)
    if (!digits[i]) return false;
  return true;
}

unsigned integer_depth(unsigned n)
{
  int digits[10] = { 0 };
  int mult = 1;
  while (!is_done(digits))
  {
    unsigned current = n * mult++;
    while (current)
    {
      digits[current % 10] = 1;
      current /= 10;
    }
  }
  return --mult;
}