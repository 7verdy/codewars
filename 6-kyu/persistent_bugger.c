// https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec

int persistence(int n)
{
    int count = 0;
    while (n >= 10)
    {
        int mult = 1, dup = n;
        while (dup)
        {
            mult *= dup % 10;
            dup /= 10;
        }
        count++;
        n = mult;
    }
    return count;
}