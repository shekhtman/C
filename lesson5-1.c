#include <stdio.h>
#include <stdlib.h>

struct dog{

	const char *name;
	const char *breed;
	int HeightCm;
	int WeightKg;
};

void getDogInfo(struct dog theDog){

	printf("Name: %s\n", theDog.name);
	printf("Breed: %s\n", theDog.breed);
	printf("Height: %d Cm \n", theDog.HeightCm);
	printf("Weight: %d Kg \n", theDog.WeightKg);

}

void getMemLoc(struct dog theDog){

	printf("Name: %p\n", theDog.name);
	printf("Breed: %p\n", theDog.breed);
	printf("Height: %p \n", &theDog.HeightCm);
	printf("Weight: %p \n", &theDog.WeightKg);
	
}

int main(){

	struct dog cujo = {"Cujo", "St. Bernard", 90, 100};
	
	getDogInfo(cujo);
	
	struct dog cujo2 = cujo;
	
	getMemLoc(cujo);
	getMemLoc(cujo2);
	
}

