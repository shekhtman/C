#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int whattodo = 0;
	
	do{
		printf("\n");
		printf("1. What time is it?\n");
		printf("2. What is today's date>\n");
		printf("3. What day is it?\n");
		printf("4. Quit\n");
		
		scanf(" %d", &whattodo);
		
	}while(whattodo < 1 || whattodo > 4);
	
	if(whattodo == 1)
		printf("print the time");
	else if(whattodo == 2)
		printf("print the date");
	else if(whattodo == 3)
		printf("print the day");
	else{
		printf("bye bye");
		exit(0);
	}
	
}
	
