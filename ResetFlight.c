#include"main.h"

void ResetFlight(plane* ps)
{
    for (int i = 0; i < FLIGHTS; i++)
        ps[i].status = 0;
}