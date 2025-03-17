#include <stdio.h>

int main() {

    //Primeira carta de cidades

    printf("# Programa Super Trunfo - Países # \n");

    printf("\n Escolha sua primeira cidade: \n");

    char estado;
    char codigo[10];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float capita;
    float superpoder;

    printf("\nDigite o estado: \n");
    scanf (" %c", &estado);

    printf("Digite o código: \n");
    scanf ("%s", codigo);

    printf("Digite a Cidade: \n");
    scanf ("%s", cidade);

    printf("Digite a População: \n");
    scanf ("%d", &populacao);

    printf("Digite a Área em km²: \n");
    scanf ("%f", &area);

    printf("Digite o PIB: \n");
    scanf ("%f", &pib);

    printf("Digite o Numero de pontos Turísticos: \n");
    scanf ("%d", &pontos);

    
    printf("\nEstado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área em km²: %.2f Km²\n", area);
    printf("PIB: %.0lf Bilhoes de Reais\n", pib);
    printf("Número de pontos Turísticos: %d\n", pontos);

    //Calculando a densidade populacional - Densidade = População /  Área em km²;
    densidade = (float) populacao / area;

    //calculando o PIB per Capita - Pib / População;
    capita = (float) pib / populacao;

    printf("Densidade Populacional: %.2f Hab/Km² \n", densidade);
    printf("PIB per Capita: %.2f Reais \n", capita);

    //Inversao da propriedade densidade;
    1 / densidade;

    superpoder = populacao + (int)area + (int)pib + (int)capita + (int)densidade + pontos;

    printf("\nSuper Poder: %d\n", superpoder);
    
    

    // Segunda carta de cidades

    printf("\nQue tal cadastrar uma outra cidade? \n");

    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float capita1;
    float superpoder1;

    printf("\nDigite o estado: \n");
    scanf (" %c", &estado1);

    printf("Digite o código: \n");
    scanf ("%s", codigo1);

    printf("Digite a Cidade: \n");
    scanf ("%s", cidade1);

    printf("Digite a População: \n");
    scanf ("%d", &populacao1);

    printf("Digite a Área em km²: \n");
    scanf ("%f", &area1);

    printf("Digite o PIB: \n");
    scanf ("%f", &pib1);

    printf("Digite o Numero de pontos Turísticos: \n");
    scanf ("%d", &pontos1);

    
    printf("\nEstado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em km²: %.2f Km²\n", area1);
    printf("PIB: %.0lf Bilhoes de Reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", pontos1);

    //Calculando a densidade populacional - Densidade = População /  Área em km²;
    densidade1 = populacao1 / area1;

    //calculando o PIB per Capita - Pib / População;
    capita1 = pib1 / populacao1;

    printf("Densidade Populacional: %.2f Hab/Km² \n", densidade1);
    printf("PIB per Capita: %.2f Reais \n", capita1);

    //Inversao da propriedade densidade 1;
    1 / densidade1;
 
    superpoder1 = populacao1 + area1 + pib1 + capita1 + densidade1 + pontos1;

    printf("\nSuper Poder: %d\n", superpoder1);

    int resultado;

    resultado = populacao > populacao1;
    resultado = area > area1;
    resultado = pib > pib1;
    resultado = capita > capita1;
    resultado = densidade < densidade1;
    resultado = pontos > pontos1;
    resultado = superpoder > superpoder1;

    printf("\nA Propriedade População da carta 1 venceu ou da carta 2? %d\n", populacao > populacao1, resultado);
    printf("A Propriedade Área da carta 1 venceu ou da carta 2? %d\n", area > area1, resultado);
    printf("A Propriedade Pib da carta 1 venceu ou da carta 2? %d\n", pib > pib1, resultado);
    printf("A Propriedade Pib per Capita da carta 1 venceu ou da carta 2? %d\n", capita > capita1, resultado);
    printf("A Propriedade Densidade Populacional da carta 1 venceu ou da carta 2? %d\n", densidade < densidade1, resultado);
    printf("A Propriedade Pontos turísticos da carta 1 venceu ou da carta 2? %d\n", pontos > pontos1, resultado);
    printf("A Propriedade Super Poder da carta 1 venceu ou da carta 2? %d\n", superpoder > superpoder1, resultado);


    return 0;
    
}