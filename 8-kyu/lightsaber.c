// https://www.codewars.com/kata/51f9d93b4095e0a7200001b8/train/c

#include <string.h>

int HowManyLightsabersDoYouOwn(const char *name)
{
    return !strcmp(name, "Zach") * 18;
}