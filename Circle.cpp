#include <stdio.h>

void circ(){
	
	float radius;
	float pi = 3.141592;
	
	printf("Input the value of the radius: \n");
	
	scanf("%f", &radius);
	
	float area = radius * radius * pi;
	float per = radius * 2.0 * pi;
	
	printf("The value of the area is %f\n", area);
	printf("The value of the perimeter is %f\n", per);
	}
	
	int main(void){
		
		circ();
	}
