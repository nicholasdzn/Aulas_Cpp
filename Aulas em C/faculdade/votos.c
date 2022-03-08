#include <stdio.h>

int main ()
{
int total_votos_sim = 0;
int total_votos_nao = 0;
int voto = -1;
while (voto != 0){
printf("Digite o seu voto:\n1-Sim\n2-Nao\n0-Terminar Votacao\n");  
scanf("%d", &voto);
if (voto == 1)
total_votos_sim = total_votos_sim + 1;
else if (voto == 2)
total_votos_nao = total_votos_nao + 1;
}
printf("Total de votos Sim: %d\n", total_votos_sim);
printf("Total de votos Nao: %d\n", total_votos_nao);
return 0;
}



