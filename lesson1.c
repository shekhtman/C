#include <string.h>
#include <stdio.h>

#define MYNAME "Alex"

int globalVar = 100;

main()
{
    char firstLetter = 'A';
    int age = 100;
    
    long int superBigNum = -323250000;
    float piValue = 3.14159;
    
    double reallyBigPi = 3.14159000000000000;
    
    printf("This was printed using the printf\n\n");
    
    printf("I am %d years old\n\n", age);
    
    printf("Super Big Num is %ld\n\n", superBigNum);
    
    printf("Pi is %.5f\n\n", piValue);
    
    printf("Big Pi is %.15f\n\n", reallyBigPi);
    
    printf("My name is %s\n\n", MYNAME);
    
    char myName[] = "Alexander Shekhtman";
    
    printf("My name is %s\n\n", myName);
    
    strcpy(myName, "Some random name");
    
    printf("My name is %s\n\n", myName);
}
