// https://www.codewars.com/kata/541c8630095125aba6000c00

int digital_root(int n)
{
    while (n > 9)
    {
        int dup = n, sum = 0;
        while (dup)
        {
            sum += dup % 10;
            dup /= 10;
        }
        n = sum;
    }
    return n;
}