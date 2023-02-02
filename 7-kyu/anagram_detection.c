// https://www.codewars.com/kata/529eef7a9194e0cbc1000255

#include <ctype.h>
#include <stdbool.h>

bool is_anagram(const char *s1, const char *s2)
{
  if (strlen(s1) != strlen(s2)) return false;
  int histos1[26] = { 0 };
  int histos2[26] = { 0 };
  for (int i = 0; s1[i]; i++)
  {
    histos1[tolower(s1[i]) - 'a']++;
    histos2[tolower(s2[i]) - 'a']++;
  }
  for (int i = 0; i < 26; i++) { if (histos1[i] != histos2[i]) return false; }
  return true;
}