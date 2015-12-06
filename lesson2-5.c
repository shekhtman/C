#include <stdio.h>

int main(){

	int num = 10, guess = 0;
	
	while(1){
		printf("guess my number: ");
		scanf( " %d", &guess);
		
		if(guess == num){
			printf("you got it");
			break;
		}
	}
}