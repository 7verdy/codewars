// https://www.codewars.com/kata/58663693b359c4a6560001d6

#include <stddef.h>

char *maze_runner(const int *maze, size_t n, const char *directions)
{
  size_t current = 0, prev = 0;
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < n; j++)
      if (maze[i * n + j] == 2) { current = i * n + j; prev = current; }
  }
  for (int i = 0; directions[i]; i++)
  {
    if (directions[i] == 'N')
    {
      if (prev / n == 0) return "Dead";
      current -= n;
    }
    else if (directions[i] == 'S')
    {
      if (prev / n == n - 1) return "Dead";
      current += n;
    }
    else if (directions[i] == 'E')
    {
      if (prev % n == n - 1) return "Dead";
      current++;
    }
    else if (directions[i] == 'W')
    {
      if (prev % n == 0) return "Dead";
      current--;
    }
    if (maze[current] == 1)
      return "Dead";
    if (maze[current] == 3) return "Finish";
    prev = current;
  }
  return "Lost";
}