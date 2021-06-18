#include"main.h"

int EmptySeatList(plane* ps, int n) // This function will reflect choice 'b' and will list out all the vacant seats to the user.
{
    int num;
    int ct = 0;

    printf("\nThe list of empty seats on flight %d are as follows: \n", ps[n].flight);
    for (int i = 0; i < TOTALSEATS; i++)
    {
        if (ps[n].mess[i].selected == 0) // It will check if the seat number already selected in a flight or not. If not then it will be printed in the list.
        {
            ct++;
            printf("%d ", ps[n].mess[i].num);

        }
    }

    if (ct == 0)
    {
        printf("Flight %d has no empty seats.\n", ps[n].flight);
    }

    else
    {
        printf("\n");
    }

    return ct;
}