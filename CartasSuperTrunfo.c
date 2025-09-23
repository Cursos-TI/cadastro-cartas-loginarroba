#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
        char estado1     ,  estado2     ;      //%c
        char codigo1[10] ,  codigo2[10] ;      //%s
        char cidade1[20] ,  cidade2[20] ;      //%s
        int  populacao1  ,  populacao2  ;      //%d
        float areakm1    ,  areakm2     ;      //%f
        float pib1       ,  pib2        ;      //%f
        int pontos1      ,  pontos2     ;      //%d
 
     
               //Digitar os dados da primeira cidade:
           printf("Digite a letra do estado:");
           scanf("%c",&estado1);
           
           printf("Digite o codigo da carta:");
           scanf("%s",codigo1); 
           
           printf("Digite o nome da cidade:");
           scanf("%s",&cidade1); 
           
           printf("Numero de habitantes:");
           scanf("%d",&populacao1); 
           
           printf("Area em km:");
           scanf("%f",&areakm1); 
           
           printf("Pib:");
           scanf("%f",&pib1); 
           
           printf("Total de pontos turisticos:");
           scanf("%d",&pontos1);
           
           //Dados da segunda cidade
           printf("Digite a letra do estado:");
           scanf("%c\n",&estado2);
           
           printf("Digite o codigo da carta:");
           scanf("%s\n",codigo2); 
           
           printf("Digite o nome da cidade:");
           scanf("%s",&cidade2); 
           
           printf("Numero de habitantes:");
           scanf("%d",&populacao2); 
           
           printf("Area em km:");
           scanf("%f",&areakm2); 
           
           printf("Pib:");
           scanf("%f",&pib2); 
           
           printf("Total de pontos turisticos:");
           scanf("%d",&pontos2);


           // Área para exibição dos dados das cidades
           //resultado da primeira cidade:
           printf("------Primeira carta------\n");
           printf("Estado:%c\n",estado1);
           printf("Codigo:%s\n",codigo1);
           printf("Cidade:%n\n",cidade1);
           printf("Habitantes:%d\n",populacao1);
           printf("Area em km:%f\n",areakm1);
           printf("Pib:%f\n",pib1);
           printf("Pontos turisticos:%d\n",pontos1);
           
           //resultado da segunda cidade:
           printf("------Segunda carta------\n");
           printf("Estado:%c\n",estado2);
           printf("Codigo:%s\n",codigo2);
           printf("Cidade:%n\n",cidade2);
           printf("Habitantes:%d\n",populacao2);
           printf("Area em km:%f\n",areakm2);
           printf("Pib:%f\n",pib2);
           printf("Pontos turisticos:%d\n",pontos2);
           
              
    
  

return 0;
} 
