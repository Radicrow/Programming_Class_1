#include <stdio.h>

//Add $1000 to a person's salary if it's less than $100000

int main(void){
	
	float value;
	
	printf("Please input a value:\n");
	
	scanf("%f", &value);
	
	if(value < 100000)
	{
		value = value + 1000;
	}
	else
	{
		printf("Your salary doesn't need a bonus\n");
	}
	printf("Your salary is: %f", value);
		
	}
