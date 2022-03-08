#include <stdio.h>
 
int main(){
    int num1,num2,num3;
 
    printf("Digite o valor de um lado do triangulo\n");
        scanf("%d", &num1);
    printf("Digite outro valor de um lado do triangulo\n");
        scanf("%d", &num2);
    printf("Digite outro valor de um lado do triangulo\n");
        scanf("%d", &num3);
 
if(num1==num2 && num1==num3 && num2==num1 && num2==num3 && num3==num2 && num3==num1){
    printf("Esse triangulo e equilatero\n");
}
if(num1!=num2 && num1!=num3 && num2!=num1 && num2!=num3 && num3!=num2 && num3!=num1){
    printf("Esse triangulo e Escaleno");
}
if(num1!=num2||num2==num3||num3!=num1){
    printf("Esse triangulo e isosceles");
}
 
}