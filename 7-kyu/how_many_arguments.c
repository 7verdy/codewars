// https://www.codewars.com/kata/5c44b0b200ce187106452139

#include <stdarg.h>

unsigned args_count(const char *arg1, ...)
{
    if (!arg1)
        return 0;

    va_list va;
    va_start(va, arg1);

    unsigned argc = 1;
    for (char *d = va_arg(va, char *); d; d = va_arg(va, char *), argc++)
        ;

    va_end(va);
    return argc;
}