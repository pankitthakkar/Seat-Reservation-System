#include"main.h" // This function will connect the Menu with the functions

void Selection(char c, plane* ps, int n)
{
    switch (c)
    {
    case 'a':
        EmptySeatNumber(ps, n);
        break;

    case 'b':
        EmptySeatList(ps, n);
        break;

    case 'c':
        SeatList(ps, n);
        break;

    case 'd':
        AssignSeat(ps, n);
        break;

    case 'e':
        DeleteSeat(ps, n);
        break;

    case 'f':
        ConfirmSeat(ps, n);
        break;
    }
}