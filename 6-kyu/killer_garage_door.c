// https://www.codewars.com/kata/58b1ae711fcffa34090000ea/solutions/c

#include <stddef.h>
#include <stdio.h>

enum DoorState
{
    CLOSED = 0,
    OPENING,
    CLOSING,
    STOPPED,
    OPENED
};

char *door_positions(char *positions, const char *events)
{
    enum DoorState prev = CLOSED;
    enum DoorState state = CLOSED;
    short pro = 0;
    size_t i = 0;
    for (; events[i]; i++)
    {
        if (events[i] == 'P')
        {
            if (state != STOPPED)
                prev = state;
            if (state == OPENING || state == CLOSING)
                state = STOPPED;
            else if (state == CLOSED)
                state = OPENING;
            else if (state == OPENED)
                state = CLOSING;
            else if (state == STOPPED)
                state = prev;
        }
        else if (events[i] == 'O')
        {
            if (state != STOPPED)
                prev = state;
            if (state == OPENING || state == CLOSING)
                state = STOPPED;
        }

        if (state == STOPPED && events[i] == 'O')
            state = prev == OPENING ? CLOSING : OPENING;

        if (state == OPENING)
            positions[i] = ++pro + '0';
        else if (state == STOPPED)
            positions[i] = pro + '0';
        else if (state == CLOSING)
            positions[i] = --pro + '0';
        else
            positions[i] = pro + '0';

        if (pro == 5)
            state = OPENED;
        else if (pro == 0)
            state = CLOSED;
    }
    positions[i] = '\0';
    return positions;
}