#include <stdio.h>
#include <math.h>

void my_num(){
	
	float a,b;
	
	printf("Input the values: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	
	printf("a: %f      b: %f\n",a,b);
	
	float sqr_dif = (a-b)*(a-b);
	float dif_sqr = (a+b)*(a-b);
	
	printf("The value of square of the difference is: %f\n", sqr_dif);
	printf("The value of the difference of two squares is: %f\n", dif_sqr);
	}
	
	int main(void){
		
		my_num();
	}
