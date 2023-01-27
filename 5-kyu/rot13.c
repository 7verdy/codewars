#include <ctype.h>

char *rot13 (char *str_out, const char *str_in)
{
  int i = 0;
  for (; str_in[i]; i++)
  {
    char base = 'a';
    if (isupper(str_in[i])) base = 'A';
    if (isalpha(str_in[i])) str_out[i] = base + ((str_in[i] - base + 13) % 26);
    else                    str_out[i] = str_in[i];
  }
  str_out[i] = '\0';
  return str_out;
}
