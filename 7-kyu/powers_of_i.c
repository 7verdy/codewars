// https://www.codewars.com/kata/5a97387e5ee396e70a00016d

const char *pofi(unsigned n)
{
    return (n % 2 == 0) ? (n / 2 & 1) ? "-1" : "1" : (n % 4 == 1) ? "i"
                                                                  : "-i";
}