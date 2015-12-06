#include <string.h>
#include <stdio.h>

#define MYNAME "Alex"

int globalVar = 100;

int main()
{
    char middleInitial;
    
    printf("What is your middle initial? ");
    scanf(" %c", &middleInitial);
    
    printf("Middle initial is %c \n\n", middleInitial);
    
    char firstName[30], lastName[30];
    
    printf("What is your name? ");
    scanf(" %s %s", firstName, lastName);
    
    printf("Your full name is %s %c %s\n\n", firstName, middleInitial, lastName);
    
    int month, day, year;
    
    printf("What's your birth date? ");
    
    scanf(" %d/%d/%d", &month, &day, &year);
    
    printf("Birth Date is %d/%d/%d\n\n", month, day, year);
    
    
}
