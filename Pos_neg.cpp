#include <stdio.h>

//1) Construir um algoritmo que leia dois valores numéricos e efetue a adição;
//caso o resultado seja maior que 10, apresentá-lo.

int sum_or_not(){
	
	int a, b;
	printf("Por favor insira dois valores: \n");
	
	scanf("%i, %i", &a, &b);
	
	if (a+b>10)
	{
		printf("a + b = %i\n", a+b);
	}
	else
	{
		printf("A soma dos valores nao e maior que 10\n");
	}
}

//2)Entrar com um número e imprimir uma das mensagens: é múltiplo de 3 ou
//não é múltiplo de 3.

int my_num(){
	
	int num;
	printf("Por favor insira um numero: \n");
	scanf("%i", &num);
	
	if (num%3==0)
	{
		printf("Esse numero e multiplo de 3\n");
	}
	else
	{
		printf("Esse numero nao e multiplo de 3\n");
	}

	}
	

//3)A prefeitura de Belém abriu uma linha de crédito para funcionários
//estatuários. O valor máximo da prestação não poderá ultrapassar 30% do
//salário bruto. Fazer um algoritmo que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.

int bank()
{
	float emprestimo, salario;
	printf("Digite o valor do seu salario: ");
	scanf("%f", &salario);
	
	printf("Digite o valor do emprestimo desejado: ");
	scanf("%f", &emprestimo);
	
	if (emprestimo>salario*0.3)
	{
		printf("Emprestimo negado");
	}
	else
	{
		printf("Emprestimo concedido");
	}
	}	


int main(void)
{
	sum_or_not();
	my_num();
	bank();
}
