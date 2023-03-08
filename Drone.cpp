#include <stdio.h>
#include <math.h>

/*In a drone flight control system, there are two regions
allowed for the drone to make a Landing. Develop code that reads the drone's landing coordinates and
make sure it is in one of the allowed regions.*/

void drone(){

	float drone_x, drone_y;
	
	printf("Input the coordinates for the landing zone: \n");
	printf("X: ");
	scanf("%f", &drone_x);
	printf("Y: ");
	scanf("%f", &drone_y);
	
	
	if (drone_x >= 4 && drone_x <= 14 && drone_y >=4 && drone_y <= 10){
		printf("Your aerial vehicle is inside the permitted landing zone 1!");
	}
	else if (drone_x >= 16 && drone_x <= 25. && drone_y >=2 && drone_y <= 11.5 ){
		printf("Your aerial vehicle is inside the permitted landing zone 2!");
	}
	else{
		printf("Your aerial vehicle is NOT inside any permitted landing zone!!");
	}

}

int main(void){
	
	drone();
}
