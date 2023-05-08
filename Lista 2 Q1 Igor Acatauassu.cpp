#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <conio.h>

void Inter();

void Delay(int segundos)
{
    int milli_seconds = segundos;
 
    clock_t start_time = clock();
 
    while (clock() < start_time + milli_seconds)
        ;
    }

float contas[50];

void Abrir(){
	system("cls||clear");
	float  deposito_in;
	printf("Insira o deposito inicial para abrir uma conta:");
	scanf("%f", &deposito_in);
	
	/*int casas_decimais = 0;
	do{
    char buffer[256];
    sprintf(buffer, "%.16g", deposito_in);
    
    char *p = strchr(buffer, '.');
    if (p != NULL) {
        casas_decimais = strlen(p + 1);
    }
    
	if (casas_decimais > 2){
	printf("O valor inserido eh ilegal. Por favor insira um novo valor:");
	scanf("%f", &deposito_in);
}
}while (casas_decimais > 2);*/
int i;
for(i=1;i<=50;i++){
if(contas[i] != NULL){
	continue;
}
else{
	contas[i] = deposito_in;
	printf("conta %i: %.2f$\n", 1000+i, contas[i]);
	break;
}
}
Delay(2000);
printf("Conta criada. Retornando ao menu...");
Delay(2000);
Inter();
}
	

void Consulta(){
system("cls||clear");
int valor_conta;
printf("Por favor insira o valor de sua conta:");
scanf("%i", &valor_conta);

valor_conta = valor_conta - 1000;

for(int i = 1; i<=5; i++){
if(contas[valor_conta]==NULL){
	printf("\nSinto muito, a conta inserida nao existe.\n");
	Delay(2000);
	printf("Insira o numero de sua conta:");
	scanf("%i", &valor_conta);
	valor_conta = valor_conta - 1000;
	if(i=3){
	printf("Numero de tentativas excedido. Retornando ao menu...\n");
	Delay(2000);
	break;
	}

}
else{
	printf("\nA quantia na conta eh: %.2f$\n",contas[valor_conta]);
	Delay(3000);
	printf("Retornando ao menu...");
	Delay(2000);
	break;
}
}
	Inter();
}

void Deposito(){
		
system("cls||clear");
int valor_conta;
printf("Por favor insira o valor de sua conta:");
scanf("%i", &valor_conta);

valor_conta = valor_conta - 1000;

for(int i = 1; i<=5; i++){
if(contas[valor_conta]==NULL){
	printf("\nSinto muito, a conta inserida nao existe.\n");
	Delay(2000);
	printf("Insira o numero de sua conta:");
	scanf("%i", &valor_conta);
	valor_conta = valor_conta - 1000;
	if(i=3){
	printf("Numero de tentativas excedido. Retornando ao menu...\n");
	Delay(2000);
	break;
	}

}
else{
	float deposito;
	printf("\nInsira o valor que você gostaria de depositar:\n");
	scanf("%f",&deposito);
	contas[valor_conta] = contas[valor_conta] + deposito;
	Delay(1000);
	printf("Valor atualizado: %.2f$\n",contas[valor_conta]);
	Delay(2000);
	printf("Retornando ao menu");
	break;
}
}
	Inter();
}

void Saque(){
			
system("cls||clear");
int valor_conta;
printf("Por favor insira o valor de sua conta:");
scanf("%i", &valor_conta);

valor_conta = valor_conta - 1000;

for(int i = 1; i<=5; i++){
if(contas[valor_conta]==NULL){
	printf("\nSinto muito, a conta inserida nao existe.\n");
	Delay(2000);
	printf("Insira o numero de sua conta:");
	scanf("%i", &valor_conta);
	valor_conta = valor_conta - 1000;
	if(i=3){
	printf("Numero de tentativas excedido. Retornando ao menu...\n");
	Delay(2000);
	break;
	}

}
else{
	float saque;
	printf("\nInsira o valor que voce gostaria de sacar:\n");
	scanf("%f",&saque);
	contas[valor_conta] = contas[valor_conta] - saque;
	Delay(3000);
	printf("Valor atualizado: %.2f$\n",contas[valor_conta]);
	Delay(2000);
	printf("Retornando ao menu");
	break;
}
}
	Inter();
}

void FecharC(){
	
system("cls||clear");
int valor_conta;
printf("Por favor insira o valor de sua conta:");
scanf("%i", &valor_conta);

valor_conta = valor_conta - 1000;

for(int i = 1; i<=5; i++){
if(contas[valor_conta]==NULL){
	printf("\nSinto muito, a conta inserida nao existe.\n");
	Delay(2000);
	printf("Insira o numero de sua conta:");
	scanf("%i", &valor_conta);
	valor_conta = valor_conta - 1000;
	if(i=3){
	printf("Numero de tentativas excedido. Retornando ao menu...\n");
	Delay(2000);
	break;
	}

}
else{
	printf("\nDeletando a conta %i...\n",1000+valor_conta);
	contas[valor_conta] = NULL;
	Delay(3000);
	printf("Retornando ao menu...");
	Delay(2000);
	break;
}
}
	Inter();
}

void Imprimir(){
	system("cls||clear");
for(int i=1;i<=50;i++){
	if(contas[i]!=NULL){
	printf("Conta %i: %.2f$\n", i+1000,contas[i]);
	}
}
    printf("Pressione qualquer tecla para retornar ao menu\n");
	while (!kbhit()){
	printf("\r\t\t          ");
    Delay(1000); 

	}
	Inter();
}

void Inter(){
	char escolha;
	do {
	system("cls||clear");
	printf("Bem vindo ao banco Financier Phenix\nPor favor escolha o tipo de operacao que gostaria de realizar:\n");
	printf("O- Abrir uma conta\nB- Consultar saldo\nD- Deposito\nW- Saque\nC- Fechar a conta\nP- Imprimir valores das contas\nE- Fechar aplicativo\n\n");
	scanf("%s", &escolha);


escolha = tolower(escolha);

    switch (escolha) {
      case 'o':
        Abrir();
        break;
      case 'b':
        Consulta();
        break;
     case 'd':
        Deposito();
        break;
      case 'w':
        Saque();
        break;
      case 'c':
        FecharC();
        break;
      case 'p':
        Imprimir();
        break;
      case 'e':
        printf("Saindo...\n");
        break;
      default:
        printf("Escolha invalida. Tente novamente..\n");
        break;
    }
    break;
  } while (escolha != 'e');
  

}
	


int main(void){
	Inter();
}
