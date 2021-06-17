#include"main.h"

void ConfirmSeat(plane* ps, int n) // This function will reflect choice 'f' and will allow the users to confirm their booked the seat.
{
    int seat, loop;

    if (EmptySeatNumber(ps, n) == TOTALSEATS) // This will see if there are any empty seats or not.
    {
        puts("All seats already are empty."); // This message will be printed all the seats are empty in a flight.
    }

    else
    {
        SeatList(ps, n);
        puts("Enter the number of the which you want to confirm: "); // It will list the available seats to the user.
        do
        {
            while (scanf("%d", &seat) != 1) // This loop will make sure if that the user can not select the vacant seat on a flight.
            {
                puts("Enter a number which has been selected:");
                SeatList(ps, n);
            }

            if (seat < 1 || seat > TOTALSEATS || ps[n].mess[seat - 1].selected == 0)
            {
                puts("Enter a number from this list:");
                SeatList(ps, n);
                loop = 1;
            }
            else
                loop = 0;
        } while (loop == 1);

        while (getchar() != '\n')
            continue;

        printf("%s %s is to be confirmed for seat %d.\n", ps[n].mess[seat - 1].FirstName, ps[n].mess[seat - 1].LastName, seat);

        puts("Enter c to confirm assignment, a to abort.");

        if (GetLetter("ca") == 'c')
        {
            ps[n].mess[seat - 1].confirmation = CONFIRM;
            puts("Seat Confirmed.");
        }
        else
        {
            puts("Seat not Confirmed.");
        }
    }
}