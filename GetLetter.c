#include "main.h"

char GetLetter(char* s) // This function will make sure that the input validation works with only 2 characters - 'y' & 'n'.
{
    char c;
    int ok = 1;
    while (ok) // This loop will keep running until the characters other than 'y' or 'n' are entered.
    {
        c = getchar();
        c = tolower(c);
        if (getchar() != '\n' || strchr(s, c) == NULL)
        {
            printf("Enter again: ");
            NoLine();
            continue;
        }
        else
        {
            return c;
        }
    }
}