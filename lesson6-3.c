#include <stdio.h>
#include <stdlib.h>

typedef struct product{
	
	const char *name;
	float price;
		
	struct product *next;
	
} product;
	

void printLinkedList(product *ptrproduct){

	while(ptrproduct != NULL){
	
		printf("%s costs %.2f \n", ptrproduct->name, ptrproduct->price);
		ptrproduct = ptrproduct->next;
		
	}
}

int main(){
	
	product tomato = {"Tomato", .50, NULL};
	product potato = {"Potato", .75, NULL};
	product lemon = {"Lemon", 1.00, NULL};
	product milk = {"Milk", 1.75, NULL};
	product chicken = {"Chicken", 3.50, NULL};
	
	tomato.next = &potato;
	potato.next = &lemon;
	lemon.next = &milk;
	milk.next = &chicken;
	
	product apple = {"Apple", .80, NULL};
	
	lemon.next = &apple;
	apple.next = &milk;
	
	printLinkedList(&tomato);
			
	
}
	
		


