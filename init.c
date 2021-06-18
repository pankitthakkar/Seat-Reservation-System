#include"main.h"

void init(plane* ps, int n) // This function will initiate the structure which contains the given members.
{
    ps[0].flight = 101;
    ps[1].flight = 311;
    ps[2].flight = 444;
    ps[3].flight = 519;
    for (int i = 0; i < n; i++)
    {
        ps[i].status = 0;
        for (int j = 0; j < TOTALSEATS; j++)
        {
            ps[i].mess[j].num = j + 1;
            ps[i].mess[j].selected = 0;
            strcpy(ps[i].mess[j].LastName, "");
            strcpy(ps[i].mess[j].FirstName, "");
        }
    }
}