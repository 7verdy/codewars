// https://www.codewars.com/kata/52fb87703c1351ebd200081f

#define _POSIX_C_SOURCE 200809L

#include <stdio.h>

char *century_from_year (char *century_string, const char year[4 + 1])
{
  short century = (year[0] - '0') * 10 + (year[1] - '0') + (year[3] != '0' || year[2] != '0');
  sprintf(century_string, "%d%s", century,
         century < 11 || century > 19 ? (century % 10 == 1 ? "st" : century % 10 == 2 ? "nd"
          : century % 10 == 3 ? "rd" : "th") : "th");
  return century_string;
}