// https://www.codewars.com/kata/513e08acc600c94f01000001

#include <stdio.h>

void rgb (int r, int g, int b, char hex[6 + 1])
{
  sprintf(hex, "%02X%02X%02X", r < 0 ? 0 : r > 255 ? 255 : r, g < 0 ? 0 : g > 255 ? 255 : g, b < 0 ? 0 : b > 255 ? 255 : b);
}