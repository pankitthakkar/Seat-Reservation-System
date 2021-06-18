#include"main.h"

void DeleteSeat(plane* ps, int n) // This function will reflect choice 'e' and will allow the users to delete their booked seat.
{
    char LastName[MAXLEN];
    char FirstName[MAXLEN];
    char c;
    int flag = 0;
    int ct = 0;
    char assigned[TOTALSEATS];
    int j;
    int ok;

    // This will first ask for the user's Last and first name.

    printf("\nEnter your last name: ");
    GetName(LastName, MAXLEN);

    printf("\nEnter your first name: ");
    GetName(FirstName, MAXLEN);

    printf("\n");
    puts("Here is the list of your booked seats:");

    for (int i = 0, j = 0; i < TOTALSEATS; i++)
    {
        if (strcmp(LastName, ps[n].mess[i].LastName) == 0
            && strcmp(FirstName, ps[n].mess[i].FirstName) == 0)
        {
            flag = 1;
            ct++;
            assigned[j++] = ps[n].mess[i].num;
            printf("%d \n", ps[n].mess[i].num);
        }
    }
    if (flag == 0)
        puts("There are no seats booked in your name, kindly check for errors."); // It will show this message if there won't be any booked seat under the user's name.
    else
    {
        int delete;
        ok = 1;
        flag = 0;
        printf("\n\n");
        puts("Here is the list of your booked seats:");
        while (ok)
        {
            delete = IntegerInput(1, TOTALSEATS);
            for (int i = 0; i < ct, flag == 0; i++)
                if (delete == assigned[i])
                    flag = 1;
            if (flag == 0)
            {
                printf("This seat is not booked in your name, enter again:\n"); // This message will be printed if the user tries to enter any other seat number other than the one booked under their name.
                continue;
            }
            else
                ok = 0;
        }
        printf("\nDo you wish to save the change? (y/n)\n");
        c = GetLetter("yn");
        if (c == 'y') // This is an another verification to confirm the removal of the seat.
        {
            ps[n].mess[delete - 1].selected = 0;
            strcpy(ps[n].mess[delete - 1].LastName, "");
            strcpy(ps[n].mess[delete - 1].FirstName, "");
            printf("\nSeat no. %d has been deleted.\n\n", delete);
        }
    }
}