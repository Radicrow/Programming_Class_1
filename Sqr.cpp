#include <stdio.h>
#include <math.h>

void my_num(){
	
	float value;
	
	printf("Input the value of the side: \n");
	
	scanf("%f", &value);
	
	float per = value * 4;
	float area = value * value;
	float diag = sqrt(2*(value*value));
	
	printf("The value of the perimeter is: %f\n", per);
	printf("The value of the area is: %f\n", area);
	printf("The value of the diagonal is: %f\n", diag);
	}
	
	int main(void){
		
		my_num();
	}
