// https://www.codewars.com/kata/51b6249c4612257ac0000005

#include <ctype.h>
#include <stddef.h>
#include <string.h>

static unsigned lut[] = { ['I'] = 1, ['V'] = 5, ['X'] = 10, ['L'] = 50, ['C'] = 100, ['D'] = 500, ['M'] = 1000 };

unsigned decode_roman (const char *roman_number)
{
  const char *bigger;
  unsigned current, number = 0;
  while (*roman_number)
  {
     current = lut[toupper(*roman_number)];
     bigger = roman_number;

     while (lut[toupper(*bigger)] <= current && *++bigger);
     if (!*bigger) number += current;
     else {
       number += lut[toupper(*bigger)];
       while (roman_number < bigger)
         number -= lut[toupper(*(roman_number++))];
     }
    roman_number++;
  }
  return number;
}