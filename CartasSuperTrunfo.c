#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#define NUM_ESTADOS 8
#define CIDADES_POR_ESTADO 4

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[NUM_ESTADOS][CIDADES_POR_ESTADO][4];
    int populacao[NUM_ESTADOS][CIDADES_POR_ESTADO];
    float area[NUM_ESTADOS][CIDADES_POR_ESTADO];
    float pib[NUM_ESTADOS][CIDADES_POR_ESTADO];
    int pontos_turisticos[NUM_ESTADOS][CIDADES_POR_ESTADO];

    printf("Bem-vindo ao cadastro de cidades do Super Trunfo! \n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

// Cadastro das cidades
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < CIDADES_POR_ESTADO; j++) {
            // Gerar o código da cidade
            char estado = 'A' + i; // Letras de A a H
            sprintf(codigo[i][j], "%c%02d", estado, j + 1);

            // Solicitar informações ao usuário
            printf("Cadastrando a cidade %s:\n", codigo[i][j]);
            printf("  População: ");
            scanf("%d", &populacao[i][j]);
            printf("  Área (km²): ");
            scanf("%f", &area[i][j]);
            printf("  PIB (em bilhões): ");
            scanf("%f", &pib[i][j]);
            printf("  Número de pontos turísticos: ");
            scanf("%d", &pontos_turisticos[i][j]);
            printf("\n");
        }
    }

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nDados cadastrados:\n\n");
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < CIDADES_POR_ESTADO; j++) {
            printf("Cidade %s:\n", codigo[i][j]);
            printf("  População: %d habitantes\n", populacao[i][j]);
            printf("  Área: %.2f km²\n", area[i][j]);
            printf("  PIB: %.2f bilhões\n", pib[i][j]);
            printf("  Pontos Turísticos: %d\n", pontos_turisticos[i][j]);
            printf("\n");
        }



    return 0;
}
