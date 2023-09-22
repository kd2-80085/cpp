
/*
Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);
*/

#include<stdio.h>
#include<stdlib.h>
struct Date{
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate)
{
      ptrDate->day=0;
      ptrDate->month=0;
      ptrDate->year=0;
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter the date as Day Month Year \n");
    scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date is %d/%d/%d\n",ptrDate->day,ptrDate->month,ptrDate->year);
}

void main()
{
    int choice;
    struct Date d1;
   
    do{
    printf("Enter your choice :\n 1.Print Default Date 2.Enter the Date 3.Print the Date 4.Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: 
                initDate(&d1);
                printDateOnConsole(&d1);
                break;
        case 2:
                acceptDateFromConsole(&d1);
                break;
        case 3: 
                printDateOnConsole(&d1);
                break;
    }
    }while(choice!=4);
}