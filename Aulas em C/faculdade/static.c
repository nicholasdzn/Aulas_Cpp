#include<stdio.h>

//static int i = 0;

void print_var(void)
{
     int i_tmp = 0;
     static int i = 0;
     //int i = 0;
     if (i<=1){
          i=20;
     }
     i++;
     i_tmp++;
 
     printf("i_tmp: %i, i = %i\n", i_tmp, i);
}
 
int main()
{
     int i = 100;
     
     printf("i: %d - ",i);
     print_var();
     i++;
     printf("i: %d - ",i);
     print_var();
     i++;
     printf("i: %d - ",i);
     print_var();
     i++;
     printf("i: %d - ",i);
     print_var();
    
 
     return 0;
}
