#include <stdio.h>
#include <stdlib.h>

void editMessageSent(char *message, int size){
	
	char newMessage[] = "New Message is too big to print out so the else will be done";
	
	if(size > sizeof(newMessage)){
		
		for(int i = 0; i < sizeof(newMessage); i++){
			
			message[i] = newMessage[i];
			
		}
	}
	
	else{
		
		printf("New Message is too big\n");
	
	}

}

int main(){

	 char randomMessage[] = "Edit my function";
	 
	 printf("Old Message: %s\n", randomMessage);
	 
	 editMessageSent(randomMessage, sizeof(randomMessage));
	 
	 printf("New Message: %s\n", randomMessage);
	
	
}


