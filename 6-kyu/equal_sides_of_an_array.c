// https://www.codewars.com/kata/5679aa472b8f57fb8c000047

int find_even_index(const int *values, int length)
{
  for (int i = 0; i < length; i++)
  {
    int sum_left = 0, sum_right = 0;
    for (int l = 0; l < i; l++)
      sum_left += values[l];
    for (int r = i + 1; r < length; r++)
      sum_right += values[r];
    if (sum_left == sum_right) return i;
  }
  return -1;
}