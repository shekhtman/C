#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct student
{
	string name;
	string house;
}student;

int main(void){
	student s1 = {"alex", "alex"};
	printf(s1.name);
	printf(s1.house);
	student s2 = {"john", "john"};
	printf(s2.name);
	printf(s2.house);
	return 0;
}
