// https://www.codewars.com/kata/5601c5f6ba804403c7000004

#include <math.h>

typedef struct Point_Coordinates
{
    double x;
    double y;
} coords;

coords bar_triang(coords a, coords b, coords c)
{

    coords br = {
        .x = round((a.x + b.x + c.x) / 3 * 10000) / 10000,
        .y = round((a.y + b.y + c.y) / 3 * 10000) / 10000,
    };
    return br;
}