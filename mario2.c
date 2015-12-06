#include <cs50.h> 
#include <stdio.h> 

// function does not take any command line arguments
int main(void)
{
    // Variables declared and initialized
    int height = 0; 
    int row = 0; 
    int space = 0; 
    int hashes = 0;
    int columns = 0;
    
    // do while loop continues to prompts user as long as 'height' is 'invalid'.
    do 
    { 
        printf("enter a non-negative integer < 24: "); 
        
        height = GetInt(); 
        
        }while(height < 0 || height > 23); 
    
    columns = height - 1;
    
        // This outer loop prints rows
    for(row = 1; row <= height; row++)
    { 
            // This inner-middle loop handles spaces
            // These two inner loops run before the outer loop.
        for(space = 1; space <= columns; space++)
        {
            printf(" "); 
            
        }
        // columns decremented by 1 
        columns--; 
        
        // This outer-most loop prints out hashes
        for(hashes = 0; hashes <= row; hashes++)
        {
            printf("#");
            
        }
        
        printf("\n"); 
    }
    
    // this lets the computer known everything is 'ok' i.e. no errors
    return 0; 
 
}
