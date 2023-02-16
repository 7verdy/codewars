// https://www.codewars.com/kata/59cf03496bddd2aa17000015

#include <stdio.h>

int sum_ascii(char string[])
{
  int sum = 0;
  // Because string was not declared in this function, then the variable 'string'
  // is actually a reference to the char array, hence why its size is 8 bytes
  // no matter what the actual input is.
  for (int i = 0; /* i < sizeof(string) / sizeof(string[0]) */ string[i]; ++i)
    sum += string[i];
  return sum;
}