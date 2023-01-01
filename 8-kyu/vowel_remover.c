// https://www.codewars.com/kata/5547929140907378f9000039

char *shortcut(char *str_out, const char *str_in)
{
    int idx = 0;
    for (int i = 0; str_in[i]; i++)
    {
        if (str_in[i] == 'a' || str_in[i] == 'e' ||
            str_in[i] == 'o' || str_in[i] == 'u' || str_in[i] == 'i')
            continue;
        str_out[idx++] = str_in[i];
    }
    str_out[idx] = '\0';
    return str_out;
}