#include <stdio.h>
#include <math.h>

void functions()
{
    double angulo_graus, angulo_radianos, seno, cosseno, tangente, secante, cossecante, cotangente;

    printf("Por favor digite um angulo em graus: ");
    scanf("%lf", &angulo_graus);

    angulo_radianos = angulo_graus * M_PI / 180.0;

    // Calculate sine value
    seno = sin(angulo_radianos);
    cosseno = cos(angulo_radianos);
    tangente = tan(angulo_radianos);
    secante = 1/cos(angulo_radianos);
    cossecante = 1/sin(angulo_radianos);
    cotangente = 1/tan(angulo_radianos);

    printf("O seno do angulo %.2lf é %.4lf\n", angulo_graus, seno);
    printf("O cosseno do angulo %.2lf é %.4lf\n", angulo_graus, cosseno);
    printf("A tangente do angulo %.2lf é %.4lf\n", angulo_graus, tangente);
    printf("A secante do angulo %.2lf é %.4lf\n", angulo_graus, secante);
    printf("A cossecante do angulo %.2lf é %.4lf\n", angulo_graus, cossecante);
    printf("A cotangente do angulo %.2lf é %.4lf\n", angulo_graus, cotangente);
}

int main(void){
    functions();
}
