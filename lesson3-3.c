#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char thirdCity[] = "Paris";
	char yourCity[30];
	printf("What city do you live in? ");
	fgets(yourCity, 30, stdin);
	
	printf("hello %s\n", yourCity);
	printf("Is your city Paris? %d\n", strcmp(yourCity, thirdCity));
	
	char yourState[] = ", Penn";
	strcat(yourCity, yourState);
	printf("Your live in %s\n", yourCity);
	printf("Letters in Paris: %ld\n", strlen(thirdCity));
	
	//This will case a memory overflow
	//strcpy(yourCity, "El Pueblo del la Reina de Los Angeles");
	
	//Do this instead
	strlcpy(yourCity, "El Pueblo del la Reina de Los Angeles", sizeof(yourCity));
	
	printf("New City is %s\n", yourCity);
	
	
	
}
	
