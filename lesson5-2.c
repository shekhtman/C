#include <stdio.h>
#include <stdlib.h>

typedef struct dogFav{

	char *food;
	char *friend;
	
} dogFav;

typedef struct dog{

	const char *name;
	const char *breed;
	int HeightCm;
	int WeightKg;
	
	dogFav favThings;
	
} dog;

void getDogInfo(dog theDog){

	printf("Name: %s\n", theDog.name);
	printf("Breed: %s\n", theDog.breed);
	printf("Height: %d Cm \n", theDog.HeightCm);
	printf("Weight: %d Kg \n", theDog.WeightKg);
	printf("Eats: %s \n", theDog.favThings.food);
	printf("Loves: %s \n", theDog.favThings.friend);

}

void setDogWeight(dog theDog, int newWeight({

	theDog.WeightKg = newWeight;
	
	printf("The dog's new weight is %d \n", theDog.WeightKg;
	
}

int main(){

	dog cujo = {"Cujo", "St. Bernard", 90, 100, {"meat", "toy rat"} };
	
	getDogInfo(cujo);
	
	setdogWeight(cujo, 110);
	
}

