#include <stdio.h>

    int main(){
      char estado1[30] ;  //%s
      char codigo1[30] ;  //%s
      char cidade1[30] ;  //%s
      int populacao1   ;  //%d
      float areakm1    ;  //%f
      float pib1       ;  //%f
      int pontos1      ;  //%d

      char estado2[30] ;  //%s
      char codigo2[30] ;  //%s
      char cidade2[30] ;  //%d
      int populacao2   ;  //%d
      float areakm2    ;  //%f
      float pib2       ;  //%f
      int pontos2      ;  //%d
      
      
      
               //Digitar os dados da primeira cidade:     
               printf("Carta 01:\n");
               printf("Nome do estado: ");
               scanf ("%s" , &estado1 );
               
               printf("Codigo da carta:");
               scanf("%s" , &codigo1) ;

               printf("Nome da cidade:" );
               scanf("%s", &cidade1 );

               printf("Populaçao:");
               scanf("%d" , &populacao1);

               
               printf("Pib:");
               scanf("%f", &pib1);
               
               printf("Numero de pontos turisticos:");
               scanf("%d", &pontos1);
               
               printf("Area em km:");
               scanf("%f", &areakm1);

              
              
               //Digitar os dados da segunda cidade
               printf("Carta 02:\n");
               printf("Nome do estado: ");
               scanf ("%s" , &estado2 );

               printf("Codigo da carta:");
               scanf("%s" , &codigo2) ;

               printf("Nome da cidade:" );
               scanf("%s", &cidade2 );

               printf("Populaçao:");
               scanf("%d" , &populacao2);

               
               printf("Pib:");
               scanf("%f", &pib2);
               
               printf("Numero de pontos turisticos:");
               scanf("%d",&pontos2);
               
               printf("Area em km:");
               scanf("%f", &areakm2);

               
               
               //resultado da primeira cidade:
               printf("------Carta 01------\n");
               printf("Estado: %s\n" ,estado1  ); 
               printf("Carta: %s\n"  ,codigo1); 
               printf("Cidade: %s\n" , cidade1); 
               printf("Populacao: %d\n" , populacao1); 
               printf("Area total: %f\n" ,areakm1); 
               printf("Pib da cidade: %f\n" , pib1); 
               printf("Total de pontos turisticos: %d\n" ,pontos1);
               

               //resultado da segunda cidade:
               printf("------Carta 02------\n");
              
               printf("Estado: %s\n" ,estado2  ); 
               printf("Carta: %s\n"  ,codigo2); 
               printf("Cidade: %s\n" , cidade2); 
               printf("Populacao: %d\n" , populacao2); 
               printf("Area total: %f\n" ,areakm2); 
               printf("Pib da cidade: %f\n" , pib2); 
               printf("Total de pontos turisticos: %d\n" ,pontos2); 

               return 0;
             

    } 