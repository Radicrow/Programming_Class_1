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
	
	printf("%f", value);
		
	}
