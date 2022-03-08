/*  Calcula o comprimento de uma circuferência */

#include <stdio.h>
#include <math.h>
#define PI 3.1415


int main(){

    float raio, comp, area;

    printf("Digite um valor para o raio: \n");
    scanf("%f", &raio);
    comp = 2 * PI * raio;
    area = PI * pow(raio, 2.0);

    printf("O comprimento da circ. é %f \n A área é %f \n", comp, area);

    
}