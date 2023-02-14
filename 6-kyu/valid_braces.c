// https://www.codewars.com/kata/5277c8a221e209d3f6000b56

#include <stdbool.h>

bool is_open_brace(const char c)
{
  return c == '(' || c == '{' || c == '[';
}

bool valid_braces (const char *braces)
{
  char opb[256] = { 0 };
  unsigned op_i = 0;
  for (unsigned i = 0; braces[i]; i++)
  {
    if (is_open_brace(braces[i]))
    {
      opb[op_i++] = braces[i];
    }
    else
    {
      if (!op_i) return false;
      if (braces[i] == ']')
      {
        if (opb[op_i - 1] != '[') return false;
        op_i--;
      }
      else if (braces[i] == ')')
      {
        if (opb[op_i - 1] != '(') return false;
        op_i--;
      }
      else if (braces[i] == '}')
      {
        if (opb[op_i - 1] != '{') return false;
        op_i--;
      }
    }
  }
  return !op_i;
}