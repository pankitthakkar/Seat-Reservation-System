#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include "main.h"

int main(void)
{
    FILE* fp; // File pointer is initialized for saving the booking information.
    plane airline[FLIGHTS];
    int size = sizeof(plane);
    char c1, c2;
    int ok = 1;
    int good = 1;
    int FlightNum;

    if ((fp = fopen("reservation.dat", "rb")) == NULL) // This is the file in which the booking information will be saved for future runs.
    {
        init(airline, FLIGHTS); // This function will initialize the structure.
    }
    else
    {
        for (int i = 0; i < FLIGHTS; i++)
        {
            fread(&airline[i], size, 1, fp);
        }

        fclose(fp);
    }

    MainMenu();

    while (ok)
    {
        c1 = GetLetter("abcde");
        if (c1 != 'e')
        {
            puts("Do you wish to continue ? (y/n)");
            char c = GetLetter("yn");
            if (c == 'y')
            {
                FlightNum = MainSelection(c1, airline);
                PrintMenu();
                good = 1;
            }
            else if (c == 'n')
            {
                ok = 0;
            }

            while (good)
            {
                c2 = GetLetter("abcdefg");
                if (c2 != 'g')
                {
                    Selection(c2, airline, FlightNum);
                    PrintMenu();
                }
                else
                {
                    good = 0;
                    ok = 1;
                    FlightNum = NULL;
                }
            }
            MainMenu();
        }
        else
            ok = 0;
    }
    ResetFlight(airline);
    if ((fp = fopen("reservation.dat", "wb")) == NULL)
    {
        fprintf(stderr, "Can't open file %s.\n", "airline.dat");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < FLIGHTS; i++)
    {
        fwrite(&airline[i], size, 1, fp);
    }

    fclose(fp);

    printf("\n");
    puts("Understandable. Have a great day."); // This message will be shown when the user will quit the program.
    return 0;
}