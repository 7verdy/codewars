// https://www.codewars.com/kata/52e88b39ffb6ac53a400022e

#include <inttypes.h>

void uint32_to_ip(uint32_t number, char *IPv4)
{
    sprintf(IPv4, "%u.%u.%u.%u",
            number >> 24 & 0xFF,
            number >> 16 & 0xFF,
            number >> 8 & 0xFF,
            number >> 0 & 0xFF);
}