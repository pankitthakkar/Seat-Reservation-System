#include"main.h"

void AssignSeat(plane* ps, int n) // This function will reflect choice 'd' and will allow the users to book the seat.
{
    char LastName[MAXLEN];
    char FirstName[MAXLEN];
    int empty = EmptySeatList(ps, n);
    int SelectedNum;
    int ok = 1;

    if (empty == 0) // This will see if there are any empty seats or not.
    {
        printf("Sorry, flight %d has no empty seats.\n", ps[n].flight); // This message will be printed all the seats are booked in a flight.
    }

    else
    {
        printf("\n");
        puts("Choose a seat from the list."); // It will list the available seats to the user.

        while (ok) // This loop will make sure if that the user can not select the already booked seat.
        {
            SelectedNum = IntegerInput(1, TOTALSEATS);
            if (ps[n].mess[SelectedNum - 1].selected == 1)
            {
                printf("\nSorry, seat no. %d is already booked, please choose another one.\n", SelectedNum);
                continue;
            }
            else
            {
                ok = 0;
            }
        }
        puts("\nEnter your last name:");
        GetName(LastName, MAXLEN);

        puts("\nEnter your first name:");
        GetName(FirstName, MAXLEN);

        puts("\nDo you wish to save the change ? (y/n)\n");
        char c = GetLetter("yn");
        if (c == 'y') // // This is an another verification to confirm the selection of the seat.
        {
            strcpy(ps[n].mess[SelectedNum - 1].LastName, LastName);
            strcpy(ps[n].mess[SelectedNum - 1].FirstName, FirstName);
            ps[n].mess[SelectedNum - 1].selected = 1;
            printf("\nSeat no. %d is booked.\n\n", SelectedNum);
        }
    }
}