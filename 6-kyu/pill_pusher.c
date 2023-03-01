// https://www.codewars.com/kata/628e6f112324192c65cd8c97

unsigned max_dose (unsigned d, unsigned a, unsigned b)
{
  unsigned max = 0;
  for (unsigned int i = 0; i <= d / b; i++)
  {
    unsigned val = b * i;
    while (val + a <= d) val += a;
    if (val > max) max = val;
  }
  return max;
}