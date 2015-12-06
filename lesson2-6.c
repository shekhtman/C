#include <stdio.h>

int main(){

	for(int counter = 0; counter <= 10; counter++){
		if((counter % 2) == 0) continue;
		printf("%d", counter);
	}
	
}