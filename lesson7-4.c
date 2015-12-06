#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(){

	char *randString = "just some random string";
	
	while(*randString){
	
		putchar(*randString++);
		
	}
	
	//does the same thing
	int i = 0;
	
	while(randString[i] != '\0'){
	
		putchar(randString[i++]);
		
	}
	
	
}
	
		


