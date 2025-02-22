#include <stdio.h>

int main(){

    char estado;
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Digite o estado: \n");
    scanf (" %c", &estado);

    printf("Digite o código: \n");
    scanf ("%s", codigo);

    printf("Digite a Cidade: \n");
    scanf ("%s", cidade);

    printf("Digite a População: \n");
    scanf ("%d", &populacao);

    printf("Digite a Área em km²: \n");
    scanf ("%.2f", &area);

    printf("Digite o PIB: \n");
    scanf ("%.2f", &pib);

    printf("Digite o Numero de pontos Turísticos: \n");
    scanf ("%d", &pontos);


    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos Turísticos: %d\n", pontos);


    return 0;
}
