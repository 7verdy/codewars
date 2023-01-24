// https://www.codewars.com/kata/522551eee9abb932420004a0

typedef unsigned long long ull;

ull nth_fib(int n)
{
  if (n == 1) return 0;
  ull f = 0, s = 1, t = 1;
  for (int i = 2; i < n; i++)
  {
    t = f + s;
    f = s;
    s = t;
  }
  return t;
}