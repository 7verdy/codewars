// https://www.codewars.com/kata/6285147937ddcf3ac2b068ce/solutions/c

#include <inttypes.h>

uint32_t hosts_in_subnet(const char *netmask)
{
  uint32_t a, b, c, d;
  sscanf(netmask, "%d.%d.%d.%d", &a, &b, &c, &d);
  int n = 32 - __builtin_popcount(a) - __builtin_popcount(b) - __builtin_popcount(c) - __builtin_popcount(d);
  return n <= 1 ? 1 << n : (1 << n) - 2;
}