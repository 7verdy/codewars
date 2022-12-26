// https://www.codewars.com/kata/51fc12de24a9d8cb0e000001

#include <stdbool.h>
#include <ctype.h>

bool is_valid_ISBN_10(const char *ISBN)
{
    int sum = 0;
    for (int i = 0; ISBN[i]; i++)
    {
        if ((!ISBN[i + 1] && i != 9) ||
            (!isdigit(ISBN[i]) && ISBN[i] != 'X') ||
            (ISBN[i] == 'X' && ISBN[i + 1]))
            return false;
        if (ISBN[i] && !ISBN[i + 1] && ISBN[i] == 'X')
            sum += (i + 1) * 10;
        else
            sum += (i + 1) * (ISBN[i] - '0');
    }
    return sum % 11 == 0;
}