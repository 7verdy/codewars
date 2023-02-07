// https://www.codewars.com/kata/58a6af7e8c08b1e9c40001c1

unsigned hamming_distance(unsigned a, unsigned b)
{
  unsigned diffs = 0;
  for (unsigned i = 0; i < 20; i++) {
    if ((a >> i & 1) != (b >> i & 1)) diffs++;
  }
  return diffs;
}