#include <stdio.h>
#include <math.h>

/*Considering the system of
cartesian coordinates, check if two spheres are
colliding/overlapping*/


void collision(){
	
	float x1, y1, radius1, x2, y2, radius2;
	printf("Please, input the values for the first sphere: \n");
	printf("X:");
	scanf("%f", &x1);
	printf("Y:");
	scanf("%f", &y1);
	printf("Radius: ");
	scanf("%f", &radius1);
	printf("Please, input the values for the second sphere: \n");
	printf("X:");
	scanf("%f", &x2);
	printf("Y:");
	scanf("%f", &y2);
	printf("Radius: ");
	scanf("%f", &radius2);
	
	float distance = sqrt((x2-x1)*(x2-x1) + (y2 - y1)*(y2 - y1));
	
	if (distance <= radius1 + radius2) 
	{
        printf("The circles are colliding.\n");
    } 
	else {
        printf("The circles are not colliding.\n");}

	
}

int main(void){
	
	collision();
}
