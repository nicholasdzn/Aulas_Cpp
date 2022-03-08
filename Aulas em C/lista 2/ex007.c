#include <stdio.h>

int main(){
    int a,b,c;

    printf("Digite um numero: \n");
        scanf("%d", &a);
    printf("Digite outro numero: \n");
        scanf("%d", &b);
    printf("Digite mais um numero: \n");
        scanf("%d", &c);

    if (a > b)                                           
        if (b > c) printf("%d %d %d\n", c, b, a);       
       else                                             
            if (a > c) printf("%d %d %d\n", b, c, a);   
          else printf("%d %d %d\n", b, a,c );                                                   
       if (b > c)                                       
           if (a > c) printf("%d %d %d\n", c, a, b);   
           else printf("%d %d %d\n", a, c, b);         
               
    return 0;
}