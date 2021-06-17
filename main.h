#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#pragma warning(disable : 4996)

#define MAXLEN 20
#define TOTALSEATS 12
#define FLIGHTS 4
#define CONFIRM 1

typedef struct
{
    int num;
    int selected;
    int confirmation;
    char LastName[MAXLEN];
    char FirstName[MAXLEN];
} seat;

typedef struct
{
    int flight;
    seat mess[TOTALSEATS];
    int status;
} plane;

char* GetName(char* st, int n);
void NoLine(void);
int IntegerInput(int min, int max);
void init(plane* ps, int n);
void MainMenu(void);
char GetLetter(char* s);
int MainSelection(char c, plane* ps);
void PrintMenu(void);
void Selection(char c, plane* ps, int n);
void ResetFlight(plane* ps);
int EmptySeatNumber(plane* PlaneSeat, int n);
int EmptySeatList(plane* ps, int n);
void SeatList(plane* ps, int n);
void AssignSeat(plane* ps, int n);
void DeleteSeat(plane* ps, int n);
void ConfirmSeat(plane* ps, int);