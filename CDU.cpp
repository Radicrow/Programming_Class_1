#include <stdio.h>

void my_num(){
	
	int value;
	
	printf("Input the desired value: \n");
	
	scanf("%i", &value);
	
	int c,d,u;
	
	u=value%10;
	d=(value/10)%10;
	c=value/100;
	
	printf("The value of the unit is: %i\n", u);
	printf("The value of the tens is: %i\n", d);
	printf("The value of the hundreds is: %i\n", c);
	}
	
	int main(void){
		
		my_num();
	}
