#include<stdio.h>

int main(){
    char estado[50] = "Rio de Janeiro";
    char codigo[10] = "A1";
    char cidade[50] = "Nova Iguaçu";
    unsigned long int populacao = 843046;
    float area = 520.581;
    float pib = 17424682.24;
    int pontos = 50;
    float densidade;
    float capita;
    long double superpoder;

    char estado1[50] = "Rio de Janeiro";
    char codigo1[10] = "B1";
    char cidade1[50] = "Duque de Caxias";
    unsigned long int populacao1 = 866347;
    float area1 = 467.271;
    float pib1 = 53136666.345;
    int pontos1 = 50;
    float densidade1;
    float capita1;
    long double superpoder1;


    char atributo1, atributo2;
    int exibircartas;
    int resultado1, resultado2, resultadototal;

    printf("### Super Trunfo - Países ###\n");

    printf("\nCartas do jogo\n");
    printf("1. Carta A1\n");
    printf("2. Carta B1\n");
    printf("Escolha uma opção:");
    scanf("%d", &exibircartas);

    switch (exibircartas)
    {
    case 1:
    printf("\nCódigo da Carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %u\n", populacao);
    printf("Área em Km²: %.3f km²\n", area);
    printf("PIB: %.3f Mil reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos);

//Calculando a densidade populacional - Densidade = População /  Área em km²;
densidade = (float) populacao / area;

//calculando o PIB per Capita - Pib / População;
capita = (float) pib / populacao;

    printf("\nDensidade Populacional: %.2f Hab/Km² \n", densidade);
    printf("PIB per Capita: %.2f Mil Reais \n", capita);

//Inversao da propriedade densidade;
1 / densidade;

superpoder = populacao + (int)area + (int)pib + (int)capita + (int)densidade + pontos;

    printf("\nSuper Poder: %d\n", superpoder);

        break;

    case 2:
    printf("\nCódigo da Carta: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área em Km²: %.3f km²\n", area1);
    printf("PIB: %.3f Mil reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

//Calculando a densidade populacional - Densidade = População /  Área em km²;
densidade1 = (float) populacao1 / area1;

//calculando o PIB per Capita - Pib / População;
capita1 = (float) pib1 / populacao1;

    printf("\nDensidade Populacional: %.2f Hab/Km² \n", densidade1);
    printf("PIB per Capita: %.2f Mil Reais \n", capita1);

//Inversao da propriedade densidade;
1 / densidade1;

superpoder1 = populacao1 + (int)area1 + (int)pib1 + (int)capita1 + (int)densidade1 + pontos1;

    printf("\nSuper Poder: %d\n", superpoder1);

        break;
    
    default:
       printf("Opção inválida!\n");
        break;
    }

    printf("\nCartas do jogo\n");
    printf("1. Carta A1\n");
    printf("2. Carta B1\n");
    printf("Escolha uma opção:");
    scanf("%d", &exibircartas);

    switch (exibircartas)
    {
    case 1:
    printf("\nCódigo da Carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %u\n", populacao);
    printf("Área em Km²: %.3f km²\n", area);
    printf("PIB: %.3f Mil reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos);

//Calculando a densidade populacional - Densidade = População /  Área em km²;
densidade = (float) populacao / area;

//calculando o PIB per Capita - Pib / População;
capita = (float) pib / populacao;

    printf("\nDensidade Populacional: %.2f Hab/Km² \n", densidade);
    printf("PIB per Capita: %.2f Mil Reais \n", capita);

//Inversao da propriedade densidade;
1 / densidade;

superpoder = populacao + (int)area + (int)pib + (int)capita + (int)densidade + pontos;

    printf("\nSuper Poder: %d\n", superpoder);

        break;

    case 2:
    printf("\nCódigo da Carta: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área em Km²: %.3f km²\n", area1);
    printf("PIB: %.3f Mil reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

//Calculando a densidade populacional - Densidade = População /  Área em km²;
densidade1 = (float) populacao1 / area1;

//calculando o PIB per Capita - Pib / População;
capita1 = (float) pib1 / populacao1;

    printf("\nDensidade Populacional: %.2f Hab/Km² \n", densidade1);
    printf("PIB per Capita: %.2f Mil Reais \n", capita1);

//Inversao da propriedade densidade;
1 / densidade1;

superpoder1 = populacao1 + (int)area1 + (int)pib1 + (int)capita1 + (int)densidade1 + pontos1;

    printf("\nSuper Poder: %d\n", superpoder1);

        break;
    
    default:
       printf("Opção inválida!\n");
        break;
    }

    printf("\n### Iniciar o jogo ###\n");
    printf("\nEscolha o primeiro Atributo:\n");
    printf("A. População\n");
    printf("B. Área em Km²\n");
    printf("C. PIB\n");
    printf("D. Pontos turísticos\n");
    printf("E. Densidade Populacional\n");
    printf("\nEscolha um atributo:");
    scanf(" %c", &atributo1);

    switch (atributo1)
    {
    case 'A':
    case 'a':
        printf("Você escolheu o atributo População\n");
        resultado1 = populacao > populacao1 ? 1 : 0; 
        break;

    case 'B':
    case 'b':
        printf("Você escolheu o atributo Área em km²\n");
        resultado1 = area > area1 ? 1 : 0;
        break;

    case 'C':
    case 'c':
        printf("Você escolheu o atributo PIB\n");
        resultado1 = pib > pib1 ? 1 : 0;
        break;

    case 'D':
    case 'd':
        printf("Você escolheu o atributo Pontos turísticos\n");
        resultado1 = pontos > pontos1 ? 1 : 0;
        break;

    case 'E':
    case 'e':
        printf("Você escolheu o atributo Densidade populacional\n");
        resultado1 = densidade < densidade1 ? 1 : 0;
        break;

        default:
        printf("Opção inválida!\n");
        break;
    
    }

        
    printf("\nEscolha o segundo Atributo:\n");
    printf("A. População\n");
    printf("B. Área em Km²\n");
    printf("C. PIB\n");
    printf("D. Pontos turísticos\n");
    printf("E. Densidade Populacional\n");
    printf("\nEscolha um atributo:");
    scanf(" %c", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Você escolheu o mesmo atributo\n");
    } else{
        switch (atributo2)
    {
    case 'A':
    case 'a':
        printf("Você escolheu o atributo População\n");
        resultado2 = populacao > populacao1 ? 1 : 0; 
        break;

    case 'B':
    case 'b':
        printf("Você escolheu o atributo Área em km²\n");
        resultado2 = area > area1 ? 1 : 0; 
        break;

    case 'C':
    case 'c':
        printf("Você escolheu o atributo PIB\n");
        resultado2 = pib > pib1 ? 1 : 0; 
        break;

    case 'D':
    case 'd':
        printf("Você escolheu o atributo Pontos turísticos\n");
        resultado2 = pontos > pontos1 ? 1 : 0;
        break;

    case 'E':
    case 'e':
        printf("Você escolheu o atributo Densidade populacional\n");
        resultado2 = densidade < densidade1 ? 1 : 0;
        break;

        default:
        printf("Opção inválida!\n");
        break;
      }
   }

   if(atributo1 == 'a'){
   if (resultado1 = populacao > populacao1 == 1){
     printf("\nAtributo População\n");
     printf("A carta 1 venceu!\n");
     printf("Carta %s tem %u de habitantes\n", cidade, populacao);
     printf("Carta %s tem %u de habitantes\n", cidade1, populacao1);
    } else if(resultado1 = populacao < populacao1){
     printf("A carta 2 venceu!\n");
     printf("Carta %s tem %u de habitantes\n", cidade, populacao);
     printf("Carta %s tem %u de habitantes\n", cidade1, populacao1);
    } else{
     printf("As cartas empataram!\n");
     printf("Carta %s tem %u de habitantes\n", cidade, populacao);
     printf("Carta %s tem %u de habitantes\n", cidade1, populacao1);
    }
}

   if(atributo1 == 'b'){
   if (resultado1 = area > area1 == 1){
        printf("\nAtributo Área em km²\n");
        printf("A carta 1 venceu!\n");
        printf("Carta %s tem %.3f de km²\n", cidade, area);
        printf("Carta %s tem %.3f de km²\n", cidade1, area1);
       } else if(resultado1 = area < area1){
        printf("A carta 2 venceu!\n");
        printf("Carta %s tem %.3f de km²\n", cidade, area);
        printf("Carta %s tem %.3f de km²\n", cidade1, area1);
       } else{
        printf("As cartas empataram!\n");
        printf("Carta %s tem %.3f de km²\n", cidade, area);
        printf("Carta %s tem %.3f de km²\n", cidade1, area1);
       }
    }
   
   if(atributo1 == 'c'){
   if (resultado1 = pib > pib1 == 1){
        printf("\nAtributo PIB\n");
        printf("A carta 1 venceu!\n");
        printf("Carta %s tem %.2f mil reais de PIB\n", cidade, pib);
        printf("Carta %s tem %.2f mil reais de PIB\n", cidade1, pib1);
       } else if(pib < pib1){
        printf("A carta 2 venceu!\n");
        printf("Carta %s tem %.2f mil reais de PIB\n", cidade, pib);
        printf("Carta %s tem %.2f mil reais de PIB\n", cidade1, pib1);
       } else{
        printf("As cartas empataram!\n");
        printf("Carta %s tem %.3f de km²\n", cidade, pib);
        printf("Carta %s tem %.3f de km²\n", cidade1, pib1);
       }
    }
   
    if(atributo1 == 'd'){
        if (resultado1 = pontos > pontos1 == 1){
            printf("\nAtributo Pontos Turísticos\n");
             printf("A carta 1 venceu!\n");
             printf("Carta %s tem %d pontos turísticos\n", cidade, pontos);
             printf("Carta %s tem %d pontos turísticos\n", cidade1, pontos1);
            } else if(pontos < pontos1){
             printf("A carta 2 venceu!\n");
             printf("Carta %s tem %d pontos turísticos\n", cidade, pontos);
             printf("Carta %s tem %d pontos turísticos\n", cidade1, pontos1);
            } else{
             printf("As cartas empataram!\n");
             printf("Carta %s tem %d pontos turísticos\n", cidade, pontos);
             printf("Carta %s tem %d pontos turísticos\n", cidade1, pontos1);
            }
         }

         if(atributo1 == 'e'){
            if (resultado1 = densidade < densidade1 == 1){
                printf("\nAtributo Densidade populacional\n");
                 printf("A carta 1 venceu!\n");
                 printf("Carta %s tem %.2f de km²/hab.\n", cidade, densidade);
                 printf("Carta %s tem %.2f de km²/hab.\n", cidade1, densidade1);
                } else if(densidade > densidade1){
                 printf("A carta 2 venceu!\n");
                 printf("Carta %s tem %.2f de km²/hab.\n", cidade, densidade);
                 printf("Carta %s tem %.2f de km²/hab.\n", cidade1, densidade1);
                } else{
                 printf("As cartas empataram!\n");
                 printf("Carta %s tem %.2f de km²/hab.\n", cidade, densidade);
                 printf("Carta %s tem %.2f de km²/hab.\n", cidade1, densidade1);
                }
             }
        

    if (atributo2 == 'a'){
    if (resultado2 = populacao > populacao1 == 1){
        printf("\nAtributo População\n");
         printf("A carta 1 venceu!\n");
         printf("Carta %s tem %u de habitantes\n", cidade, populacao);
         printf("Carta %s tem %u de habitantes\n", cidade1, populacao1);
        } else if(populacao < populacao1){
         printf("A carta 2 venceu!\n");
         printf("Carta %s tem %u de habitantes\n", cidade, populacao);
         printf("Carta %s tem %u de habitantes\n", cidade1, populacao1);
        } else{
         printf("As cartas empataram!\n");
         printf("Carta %s tem %u de habitantes\n", cidade, populacao);
         printf("Carta %s tem %u de habitantes\n", cidade1, populacao1);
        }
    }

    if(atributo2 == 'b'){
    if (resultado2 = area > area1 == 1){
        printf("\nAtributo Área em km²\n");
        printf("A carta 1 venceu!\n");
        printf("Carta %s tem %.3f de km²\n", cidade, area);
        printf("Carta %s tem %.3f de km²\n", cidade1, area1);
       } else if(area < area1){
        printf("A carta 2 venceu!\n");
        printf("Carta %s tem %.3f de km²\n", cidade, area);
        printf("Carta %s tem %.3f de km²\n", cidade1, area1);
       } else{
        printf("As cartas empataram!\n");
        printf("Carta %s tem %.3f de km²\n", cidade, area);
        printf("Carta %s tem %.3f de km²\n", cidade1, area1);
       }
    }

    if(atributo2 == 'c'){
        if (resultado2 = pib > pib1 == 1){
            printf("\nAtributo PIB\n");
             printf("A carta 1 venceu!\n");
             printf("Carta %s tem %.2f mil reais de PIB\n", cidade, pib);
             printf("Carta %s tem %.2f mil reais de PIB\n", cidade1, pib1);
            } else if(pib < pib1){
             printf("A carta 2 venceu!\n");
             printf("Carta %s tem %.2f mil reais de PIB\n", cidade, pib);
             printf("Carta %s tem %.2f mil reais de PIB\n", cidade1, pib1);
            } else{
             printf("As cartas empataram!\n");
             printf("Carta %s tem %.3f de km²\n", cidade, pib);
             printf("Carta %s tem %.3f de km²\n", cidade1, pib1);
            }
         }

         if(atributo2 == 'd'){
            if (resultado2 = pontos > pontos1 == 1){
                printf("\nAtributo Pontos Turísticos\n");
                 printf("A carta 1 venceu!\n");
                 printf("Carta %s tem %d pontos turísticos\n", cidade, pontos);
                 printf("Carta %s tem %d pontos turísticos\n", cidade1, pontos1);
                } else if(pontos < pontos1){
                 printf("A carta 2 venceu!\n");
                 printf("Carta %s tem %d pontos turísticos\n", cidade, pontos);
                 printf("Carta %s tem %d pontos turísticos\n", cidade1, pontos1);
                } else{
                 printf("As cartas empataram!\n");
                 printf("Carta %s tem %d pontos turísticos\n", cidade, pontos);
                 printf("Carta %s tem %d pontos turísticos\n", cidade1, pontos1);
                }
             }

             if(atributo2 == 'e'){
                if (resultado2 = densidade < densidade1 == 1){
                     printf("\nAtributo Densidade populacional\n");
                     printf("A carta 1 venceu!\n");
                     printf("Carta %s tem %.2f de km²/hab.\n", cidade, densidade);
                     printf("Carta %s tem %.2f de km²/hab.\n", cidade1, densidade1);
                    } else if(densidade > densidade1){
                     printf("A carta 2 venceu!\n");
                     printf("Carta %s tem %.2f de km²/hab.\n", cidade, densidade);
                     printf("Carta %s tem %.2f de km²/hab.\n", cidade1, densidade1);
                    } else{
                     printf("As cartas empataram!\n");
                     printf("Carta %s tem %.2f de km²/hab.\n", cidade, densidade);
                     printf("Carta %s tem %.2f de km²/hab.\n", cidade1, densidade1);
                    }
                 }

   return 0;

}