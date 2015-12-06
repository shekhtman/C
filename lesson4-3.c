#include <stdio.h>
#include <stdlib.h>

int main(){

	char * students[4]= {"Sally", "Mark", "Paul", "Sue"};
	
	for(int i = 0; i < 4; i++){
		
		printf("%s : %p\n", 
			students[i], &students[i]);
	
	}	 
	
	
}


