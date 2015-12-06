#include <stdio.h>
#include <stdlib.h>

int globalvar = 0;

int addtwonumbers(int num1, int num2){

	return num1 + num2;

}

void changevariables(){

	int age = 40;
	
	printf("age inside of function = %d\n", age);
	
	globalvar = 100;
	
	printf("globalvar inside of function = %d\n", globalvar);
	
}

int main(){
	
	int total = addtwonumbers(4,5);
	printf("the sum is %d\n", total);
	
	int age = 10;
	globalvar = 50;
	
	printf("age before a call to the function = %d\n", age);
	printf("globalvar before a call to the function = %d\n", globalvar);
	
	changevariables();
	
	printf("age after a call to the function = %d\n", age);
	printf("globalvar after a call to the function = %d\n", globalvar);
	
}
	
