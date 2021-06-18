#include"main.h"

void SeatList(plane* ps, int n) // This function will reflect choice 'c' and will list out the seat details of every seat in an alphabetical order.
{
    printf("\n");
    printf("Here is the list of seats for flight %d.\n", ps[n].flight);

    printf("\n");
    puts("The order follows as, booking status => seat number => last name => first name => Confirmation Status");

    printf("\n");
    puts("Here, 0 means that the seat is vacant and 1 means taken.");
    printf("\n");

    for (int i = 0; i < TOTALSEATS; i++)
    {
        printf("%d %d %s %s  ", ps[n].mess[i].selected, ps[n].mess[i].num, ps[n].mess[i].LastName, ps[n].mess[i].FirstName);

        if (ps[n].mess[i].confirmation == CONFIRM)
            puts(", confirmed\n");
        else
            puts(", unconfirmed\n");
    }
}