#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado;
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    
    //Entrada e Saída de dados

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

    
    //Impressão dos atributos que o usuário digitar

    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f Km²\n", area);
    printf("PIB: %.2f Bilhoes de Reais\n", pib);
    printf("Número de pontos Turísticos: %d\n", pontos);

    return 0;
    
}