// https://www.codewars.com/kata/54da539698b8a2ad76000228/solutions/c

#include <stdbool.h>

bool isValidWalk(const char *walk)
{
    int up_down = 0, left_right = 0, m = 0;
    for (; walk[m]; m++)
    {
        if (m == 10)
            return false;
        if (walk[m] == 'n')
            up_down++;
        else if (walk[m] == 's')
            up_down--;
        else if (walk[m] == 'e')
            left_right++;
        else if (walk[m] == 'w')
            left_right--;
    }
    return m == 10 && (!up_down && !left_right);
}