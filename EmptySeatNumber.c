#include"main.h"

int EmptySeatNumber(plane* ps, int n) // This function will reflect choice 'a' and show the number of seats available for the user to book.
{
    int empty = 0;
    for (int i = 0; i < TOTALSEATS; i++)
    {
        if (ps[n].mess[i].selected == 0) // It will check if the seat number already selected. If not then it will be counted as the vacant seat.
            empty++;
    }

    printf("\nThere are total %d empty seats in flight %d.\n", empty, ps[n].flight);
    return empty;
}