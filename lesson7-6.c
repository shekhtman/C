#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


void getCharInfo(){

	char theChar;
	
	while((theChar = getchar()) != '\n'){
	
		printf("Letter or Number %d\n", isalnum(theChar));
		printf("Alphabetic Char  %d\n", isalpha(theChar));
		printf("Standard Blank   %d\n", isblank(theChar));
		printf("Ctrl Char        %d\n", iscntrl(theChar));
		printf("Number Char      %d\n", isdigit(theChar));
		printf("Anything But Spc %d\n", isgraph(theChar));
		printf("Upper Case       %d\n", isupper(theChar));
		printf("Lower Case       %d\n", islower(theChar));
		printf("Punctuation      %d\n", ispunct(theChar));
		printf("Any Space        %d\n", isspace(theChar));
		
	}
		
}

int main(){

	getCharInfo();
	
}
	
		


