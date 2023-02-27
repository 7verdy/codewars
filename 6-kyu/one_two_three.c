// https://www.codewars.com/kata/5873b2010565844b9100026d

#include <stddef.h>
#include <stdio.h>

void one_two_three(unsigned char n, char *a, char *b)
{
  if (!n) {
    a[0] = '0';
    a[1] = '\0';
    b[0] = '0';
    b[1] = '\0';
    return;
  }
  unsigned char i = 0, d = n;
  while (d)
  {
    if (d >= 9) {
      a[i++] = '9';
      d -= 9;
    } else {
      a[i++] = d + '0';
      d = 0;
    }
  }
  a[i] = '\0';
  for (unsigned char j = 0; j < n; j++)
    b[j] = '1';
  b[n] = '\0';
}