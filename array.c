#include <stdlib.h>
#include <stdio.h>

#define N 10

int main(int argc, char *argv[])
{
    //goes on stack
    int x[N];
    
    //goes on heap
    //int *x = malloc(sizeof(int) * N);
    
    //x on stack causes error
    //x on heap doesnt cause error
    for(int i = 0; i < 999; i++){
    	x[i] = i * 2;
    }
    
    for(int i = 0; i < 999; i++){
    	printf("Element %d: %d\n", i, x[i]);
    }
    
}
