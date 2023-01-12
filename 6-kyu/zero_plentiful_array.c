// https://www.codewars.com/kata/59e270da7997cba3d3000041

#include <stdbool.h>
#include <stddef.h>

unsigned is_zero_plentiful(size_t length, const short array[length])
{
    unsigned nb_sequences = 0, sequence_length = 0;
    for (size_t i = 0; i < length; i++)
    {
        if (array[i] == 0)
        {
            sequence_length++;
        }
        else
        {
            if (sequence_length && sequence_length < 4)
                return 0;
            else if (sequence_length >= 4)
                nb_sequences++;
            sequence_length = 0;
        }
    }
    return (nb_sequences + (sequence_length >= 4)) * (sequence_length >= 4 || !sequence_length);
}