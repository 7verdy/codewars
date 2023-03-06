// https://www.codewars.com/kata/525f47c79f2f25a4db000025

#include <stdbool.h>
#include <stddef.h>
#include <regex.h>

bool valid_phone_number(const char* number)
{
  regex_t reg;
  regcomp(&reg, "^\\([0-9]{3}\\)\\ [0-9]{3}-[0-9]{4}$", REG_EXTENDED);
  bool res = regexec(&reg, number, 0, NULL, 0) == 0;
  regfree(&reg);
  return res;
}