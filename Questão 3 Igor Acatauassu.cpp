#include <stdio.h>
#include <math.h>

void drone(){
	
	float drone_x, drone_y;
	
	printf("Por favor insira as coordenadas do drone\n");
	printf("X: ");
	scanf("%f", &drone_x);
	printf("Y: ");
	scanf("%f", &drone_y);
	
	printf("O drone esta nas coordenadas x = %f e y = %f\n", drone_x, drone_y);
	
	float circ_raio, circ_x, circ_y;
	
	circ_raio = 1;
	circ_x = 3;
	circ_y = 2;
	
	float distance =  sqrt((drone_x-circ_x)*(drone_x-circ_x) +(drone_y-circ_y)*(drone_y-circ_y));
	
	if (distance <= circ_raio){
		printf("Seu drone esta na regiao autorizada de pouso A!\nPouso permitido!");
	}
	else if(drone_x >= 10 && drone_x <= 18 && drone_y >=12 && drone_y <= 15){
		printf("Seu drone esta na regiao autorizada de pouso B!\nPouso permitido!");
	}
	else{
		printf("ATENCAO!! Seu drone nao esta em uma regiao autorizada de pouso.");
	}
	
}

int main(void){
	drone();
}
