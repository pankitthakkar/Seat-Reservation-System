#include "main.h"

void NoLine(void) // This function will terminate the user input on pressing the enter key.
{
    while (getchar() != '\n')
        continue;
}