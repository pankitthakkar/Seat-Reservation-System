#include"main.h"

int MainSelection(char c, plane* ps) // This function will connect the Menu with the functions
{
    int num;
    switch (c)
    {
    case 'a': num = 0;
        ps[0].status = 1;
        printf("\n");
        puts("Flight 101 is being handled.");
        break;

    case 'b': num = 1;
        ps[1].status = 1;
        printf("\n");
        puts("Flight 311 is being handled.");
        break;

    case 'c': num = 2;
        ps[2].status = 1;
        printf("\n");
        puts("Flight 444 is being handled.");
        break;

    case 'd': num = 3;
        ps[3].status = 1;
        printf("\n");
        puts("Flight 519 is being handled.");
        break;
    }
    return num;
}