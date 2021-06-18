#include"main.h"

int IntegerInput(int min, int max) // This function will validate the integer input while selecting the seat number.
{
    int n, status;
    int ok = 1;
    while (ok)
    {
        status = scanf("%d", &n);

        if (status != 1 || getchar() != '\n' || n < min || n > max) // This condition will make sure that the entered number matches with the available seat.
        {
            printf("Enter again (between %d to %d):\n", min, max); // It will keep asking the user to enter the number in the range.
            NoLine(); // This function will end the input when enter key is pressed.
            continue;
        }
        else
        {
            return n;
        }
    }
}