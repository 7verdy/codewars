// https://www.codewars.com/kata/55c04b4cc56a697bb0000048

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool scramble(const char *str1, const char *str2)
{
  int histo[26] = { 0 };
  for (int i = 0; str2[i]; i++)
    histo[str2[i] - 'a']++;
  for (int i = 0; str1[i]; i++)
    if (histo[str1[i] - 'a']) histo[str1[i] - 'a']--;

  for (int i = 0; i < 26; i++) if (histo[i]) return false;
  return true;
}