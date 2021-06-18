#include"main.h"

char* GetName(char* st, int n) // This function will be used for string input of characters - names in this program.
{
    char* ReturnValue, * find;
    ReturnValue = fgets(st, n, stdin);

    if (ReturnValue)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }

        else
        {
            NoLine(); // It will end the condition after the enter key is pressed.
        }
    }

    return ReturnValue;
}