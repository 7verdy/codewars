// https://www.codewars.com/kata/577a6e90d48e51c55e000217

unsigned hotpo(unsigned n)
{
    if (n == 1)
        return 0;
    int steps = 0;
    while (n != 1)
    {
        if (n & 1)
            n = 3 * n + 1;
        else
            n /= 2;
        steps++;
    }
    return steps;
}