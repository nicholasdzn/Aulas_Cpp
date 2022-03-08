/*
@author: Lariza
@date: 27 de Agosto de 2020
 Algoritmo calculadora com switch
*/

#include <stdio.h>

int main(){
     char operation;
     float  valueA, valueB, result;

     int sair =0;
     while (sair==0){

          printf("Digite a operação que deseja fazer: \n");
          printf("a-soma, b-subtração, c-multiplicacao, d-divisao, e-sair: \n");
          scanf("%c", &operation);

       
       switch (operation){
          case 'a':
               printf("Digite os numeros para a operacao: \n ");
               scanf("%f", &valueA);
               scanf("%f", &valueB);
               result = valueA+valueB;
               printf("O resultado obtido foi: %f \n\n", result);

               break;
          case 'b':
               printf("\n Digite os numeros para a operacao: \n\n ");
               scanf("%f", &valueA);
               scanf("%f", &valueB);
               result = valueA-valueB;
               printf("O resultado obtido foi: %f \n\n", result);

               break;
          case 'c':
               printf("Digite os numeros para a operacao:\n ");
               scanf("%f \n %f", &valueA, &valueA);
               result = valueA*valueB;
               printf("O resultado obtido foi: %f \n\n", result);

               break;
          case 'd':
               printf("Digite os numeros para a operacao:\n ");
               scanf("%f", &valueA);
               scanf("%f", &valueB);
               if(valueB!=0){
                    result = valueA/valueB;
                    printf("O resultado obtido foi: %f \n\n", result);

               }else{
                    printf("ERRO: Não existe divisão por zero!");
               }
               break;
          case 'e':
               sair =1;
               printf("--------Até Logo!--------------");
               break;
          default:
               printf("Opção Inválida, Tente Novamente!");
               break;
          }
     
     }
    
return 0;
}