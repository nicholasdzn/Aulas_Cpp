#include <stdio.h>
#include <math.h>

float area_circulo(float r){
    
    float a,pi=3.14159;
    a = pi * pow(r,2);
    return a;
}

float diametro_circulo(float r){

    float d;
    d=2*r;
    return d;
}

float perimetro_circulo(float r){

    float p,pi=3.14159;
    p = 2 * pi * r;
    return p;
}

int main(){

float raio=1,area,diametro,perimetro;

while(raio>0){
printf("Entre com o valor do raio: \n(para sair digite 0)\n");
scanf("%f", &raio);

area = area_circulo(raio);
diametro = diametro_circulo(raio);
perimetro = perimetro_circulo(raio);

printf("Área do circulo =  \n");
printf("%f \n", area);
printf("Diametro do circulo= \n");
printf("%f \n", diametro);
printf("perimetro do circulo= \n");
printf("%f \n", perimetro);
printf("------------------------\n");
}


}