#include <stdio.h>

//5) Desenvolva um algoritmo que receba os valores x e y de um ponto em um
//sistema de coordenadas cartesiano e determinar em qual quadrante o ponto
//de coordenada se encontra.

int cord(){
	
	float x,y;
	printf("Insira os valores de x e y:\n");
	printf("X:");
	scanf("%f", &x);
	printf("Y:");
	scanf("%f", &y);
	
	if (x>0 and y>0)
	{
		printf("O ponto %f,%f se encontra no primeiro quadrante", x,y);
	}
	else if (x<0 and y>0)
	{
		printf("O ponto %f,%f se encontra no segundo quadrante", x,y);
	}
	else if (x<0 and y<0)
	{
		printf("O ponto %f,%f se encontra no terceiro quadrante", x,y);
	}
	else if (x>0 and y<0)
	{
		printf("O ponto %f,%f se encontra no quarto quadrante", x,y);
	}

	else
	{
		printf("O ponto %f,%f se encontra na origem", x,y);
	}
}

int main(void)
{
	cord();
}
