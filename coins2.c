#include <cs50.h>
#include <math.h> 
#include <stdio.h>

int main(void)
{
    float amount = 0;
    int counter = 0; 
    int change = 0; 
    
    // Prompt user until correct input
    	do
    	{
        	printf("O hai! How much change is owed?\n");
        
       	 	amount = GetFloat();
        
        	if (amount < 0)
            		printf("You must enter a positve number: ");
            
	}
		while(amount < 0); 

    		// round function from math library
    		change = round(amount * 100);
		 
	 //counter = counter + change; 
	 
    while(change >= 25)
    {
        change = change - 25; 
        counter++; 
		 
	 }
	
    while(change >= 10)
    {
        change = change - 10; 
        counter++; 
	}
    while(change >= 5)
    {
        change = change - 5; 
        counter++; 
		   
    }
    while(change >= 1) 
    {
        change = change - 1; 
        counter++; 
		
		
    }
		
	
    //counter = counter + change; 
    
    // print smallest number of coins
    printf("%d\n", counter);


}
