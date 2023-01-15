// https://www.codewars.com/kata/6288de23ab7ede0031602521

#define _POSIX_C_SOURCE 200809L

#include <stdlib.h>
#include <string.h>

char *get_current_octet(const char *str, size_t *index)
{
    size_t end = 0;
    while (str[*index + end] && str[*index + end] != '.')
        end++;
    char *res = strndup(str + *index, end);
    *index += end;
    return res;
}

char *octet_to_binary(int octet)
{
    char *binary = calloc(8, sizeof(char));
    for (size_t i = 0; i < 8; i++)
    {
        if (1 << i & octet)
            binary[7 - i] = '1';
        else
            binary[7 - i] = '0';
    }
    return binary;
}

void ipv4_to_binary(const char *ipv4_addr, char *ipv4_binary)
{
    *ipv4_binary = '\0';
    size_t i = 0;
    char *res = calloc(36, sizeof(char));
    while (i < strlen(ipv4_addr))
    {
        char *octet = get_current_octet(ipv4_addr, &i);
        char *bin = octet_to_binary(atoi(octet));
        if (ipv4_binary[0])
        {
            ipv4_binary = strcat(ipv4_binary, ".");
            ipv4_binary = strcat(ipv4_binary, bin);
        }
        else
            ipv4_binary = strcat(ipv4_binary, bin);
        i++;
    }
}