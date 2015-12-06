#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void noMoreNewLine(char *theString){

	char *isANewLine;
	
	isANewLine = strrchr(theString, '\n');
	
	if(isANewLine){
		
		*isANewLine = '\0';
		
	}
	
}

void makeLowerCase(char *theString){

	int i = 0;
	
	while(theString[i]){
	
		theString[i] = tolower(theString[i]);
		i++;
		
	}
	
}

int main(){

	char doYouWantToQuit[10];
	
	do {
	
		printf("Enter quit to quit: ");
	
		fgets(doYouWantToQuit, 10, stdin);
	
		noMoreNewLine(doYouWantToQuit);
	
		makeLowerCase(doYouWantToQuit);;
	
	} while(strcmp(doYouWantToQuit, "quit"));
	
	
	
}
	
		


