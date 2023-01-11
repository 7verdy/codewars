// https://www.codewars.com/kata/55f2b110f61eb01779000053

int get_sum(int a, int b)
{
    int sum = 0;
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i <= b; i++)
        sum += i;
    return sum;
}