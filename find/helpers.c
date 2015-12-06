/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int search_value, int values[], int elements_in_array)
{
    for (int i = 0; i < elements_in_array; i++)
    {
        if (search_value  == values[i] )
        {
            	printf("value found at %d", i);
		return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int elements_in_array)
{
    int temp = 0;
    for (int passthrough = 1; passthrough < elements_in_array; passthrough++) {
         for (int index = 0; index < elements_in_array - 1; index++) {
              if (values[index] > values[index + 1]) {
                   temp = values[index];
                   values[index] = values[index + 1];
                   values[index + 1] = temp;
              }
         }
    }
    return;
}
