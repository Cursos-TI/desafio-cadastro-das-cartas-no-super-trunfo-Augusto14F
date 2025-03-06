#include <stdio.h>

int main() {

    //Primeira carta de cidades

    printf("# Programa Super Trunfo - Países # \n");

    printf("Escolha sua primeira cidade: \n");

    char estado;
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float capita;

    printf("Digite o estado: \n");
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

    
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f Km²\n", area);
    printf("PIB: %.2f Bilhoes de Reais\n", pib);
    printf("Número de pontos Turísticos: %d\n", pontos);

    //Calculando a densidade populacional - Densidade = População /  Área em km²;
    densidade = (float) populacao / area;

    //calculando o PIB per Capita - Pib / População;
    capita = (float) pib / populacao;

    printf("Densidade Populacional: %.2f Hab/Km² \n", densidade);
    printf("PIB per Capita: %.2f Reais \n", capita);
    
    

    // Segunda carta de cidades

    printf("Que tal cadastrar uma outra cidade? \n");

    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float capita1;


    printf("Digite o estado: \n");
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

    
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhoes de Reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", pontos1);

    //Calculando a densidade populacional - Densidade = População /  Área em km²;
    densidade1 = populacao1 / area1;

    //calculando o PIB per Capita - Pib / População;
    capita1 = pib1 / populacao1;

    printf("Densidade Populacional: %.2f Hab/Km² \n", densidade1);
    printf("PIB per Capita: %.2f Reais \n", capita1);


    return 0;
    
}