// https://www.codewars.com/kata/5d5ee4c35162d9001af7d699

#include <stddef.h>

long sum_of_min(const int **nums, size_t rows, size_t cols)
{
  long sum = 0;
  for (size_t i = 0; i < rows; i++)
  {
    int min = nums[i][0];
    for (size_t j = 1; j < cols; j++)
    {
      if (nums[i][j] < min)
        min = nums[i][j];
    }
    sum += min;
  }
  return sum;
}