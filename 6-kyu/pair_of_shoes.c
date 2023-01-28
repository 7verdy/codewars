// https://www.codewars.com/kata/58885a7bf06a3d466e0000e3

#include <stdbool.h>
#include <stdlib.h>

bool pair_of_shoes (int n, const int shoes[n][2])
{
  bool *found = calloc(n, sizeof(bool));
  for (int i = 0; i < n - 1; i++)
  {
    if (!found[i])
    {
      for (int j = i + 1; j < n; j++)
      {
        if (shoes[j][0] == !shoes[i][0] && shoes[j][1] == shoes[i][1] && !found[j])
        {
          found[i] = true;
          found[j] = true;
          break;
        }
      }
    }
  }
  for (int i = 0; i < n; i++) if (!found[i]) return false;
  return true;
}
