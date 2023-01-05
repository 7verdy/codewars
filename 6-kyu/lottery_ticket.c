// https://www.codewars.com/kata/57f625992f4d53c24200070e

typedef struct mini_win_t
{
    char *letters;
    unsigned code;
} MiniWin;

typedef struct ticket_t
{
    MiniWin *mini_wins;
    unsigned count;
} Ticket;

const char *bingo(const Ticket *ticket, unsigned win)
{
    unsigned mini_wins = 0;
    for (unsigned i = 0; i < ticket->count; i++)
    {
        char *str = ticket->mini_wins[i].letters;
        unsigned code = ticket->mini_wins[i].code;
        for (int i = 0; str[i]; i++)
            if ((int)str[i] == code)
                mini_wins++;
    }
    return mini_wins >= win ? "Winner!" : "Loser!";
}