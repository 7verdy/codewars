// https://www.codewars.com/kata/609eee71109f860006c377d1

#include <stddef.h>
#include <string.h>

char last_survivor (const char *letters, size_t nb_indexes, const size_t indexes[nb_indexes])
{
  char *dup = strdup(letters);
  for (size_t i = 0; i < nb_indexes; i++)
    memmove(&dup[indexes[i]], &dup[indexes[i] + 1], strlen(dup) - indexes[i]);
  return dup[0];
}