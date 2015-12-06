#include <cs50.h>
#include <stdio.h>

//prototype
int cube(int n);

int main(void){
	int x = 2;
	printf("x is now %i\n", x);
	printf("cubing...\n");
	x = cube(x);
	printf("cubed!\n");
	printf("x is now %i\n", x);
}

int cube(int n){
	return n * n * n;
}
