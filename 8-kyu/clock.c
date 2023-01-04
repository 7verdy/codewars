// https://www.codewars.com/kata/55f9bca8ecaa9eac7100004a/train/c

int past(int h, int m, int s)
{
    return s * 1000 + m * 1000 * 60 + h * 1000 * 60 * 60;
}