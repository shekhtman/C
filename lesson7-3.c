#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(){

	char name[50];
	
	printf("What is your name? ");
	//gets(name);
			
	//puts("Hi");
	//puts(name);
	
	fgets(name, 50, stdin);
	fputs("Hi ", stdout);
	fputs(name, stdout);
	
	
}
	
		


