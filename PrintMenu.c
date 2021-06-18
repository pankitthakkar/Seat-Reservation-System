#include"main.h"

void PrintMenu(void) // This function will output the menu with the text (options for the users) written below.
{
    printf("\n");
    puts("To choose a function, enter its letter label:");
    puts("a) Show number of empty seat");
    puts("b) Show list of empty seats");
    puts("c) Show alphabetical list of seats");
    puts("d) Assign a customer to a seat assignment");
    puts("e) Delete a seat assignment");
    puts("f) Confirm seat assignment");
    puts("g) Quit");
}