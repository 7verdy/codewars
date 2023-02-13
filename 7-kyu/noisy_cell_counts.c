// https://www.codewars.com/kata/63ebadc7879f2500315fa07e

#include <stddef.h>

void cleaned_counts(size_t length, unsigned *data, unsigned *output) {
  for (size_t i = 0; i < length; i++)
  {
    if (i && output[i - 1] > data[i]) output[i] = data[i] + 1;
    else output[i] = data[i];
  }
}