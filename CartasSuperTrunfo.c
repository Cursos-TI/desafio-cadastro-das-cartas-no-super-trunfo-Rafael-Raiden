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

    // Estado A
    sprintf(codigo[0][0], "A01");
    printf("Cadastrando a cidade %s:\n", codigo[0][0]);
    printf("  População: ");
    scanf("%d", &populacao[0][0]);
    printf("  Área (km²): ");
    scanf("%f", &area[0][0]);
    printf("  PIB (em bilhões): ");
    scanf("%f", &pib[0][0]);
    printf("  Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][0]);

    sprintf(codigo[0][1], "A02");
    printf("Cadastrando a cidade %s:\n", codigo[0][1]);
    printf("  População: ");
    scanf("%d", &populacao[0][1]);
    printf("  Área (km²): ");
    scanf("%f", &area[0][1]);
    printf("  PIB (em bilhões): ");
    scanf("%f", &pib[0][1]);
    printf("  Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][1]);

    sprintf(codigo[0][2], "A03");
    printf("Cadastrando a cidade %s:\n", codigo[0][2]);
    printf("  População: ");
    scanf("%d", &populacao[0][2]);
    printf("  Área (km²): ");
    scanf("%f", &area[0][2]);
    printf("  PIB (em bilhões): ");
    scanf("%f", &pib[0][2]);
    printf("  Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][2]);

    sprintf(codigo[0][3], "A04");
    printf("Cadastrando a cidade %s:\n", codigo[0][3]);
    printf("  População: ");
    scanf("%d", &populacao[0][3]);
    printf("  Área (km²): ");
    scanf("%f", &area[0][3]);
    printf("  PIB (em bilhões): ");
    scanf("%f", &pib[0][3]);
    printf("  Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][3]);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nDados cadastrados:\n\n");

    printf("Cidade %s:\n", codigo[0][0]);
    printf("  População: %d habitantes\n", populacao[0][0]);
    printf("  Área: %.2f km²\n", area[0][0]);
    printf("  PIB: %.2f bilhões\n", pib[0][0]);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos[0][0]);

    printf("Cidade %s:\n", codigo[0][1]);
    printf("  População: %d habitantes\n", populacao[0][1]);
    printf("  Área: %.2f km²\n", area[0][1]);
    printf("  PIB: %.2f bilhões\n", pib[0][1]);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos[0][1]);

    printf("Cidade %s:\n", codigo[0][2]);
    printf("  População: %d habitantes\n", populacao[0][2]);
    printf("  Área: %.2f km²\n", area[0][2]);
    printf("  PIB: %.2f bilhões\n", pib[0][2]);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos[0][2]);

    printf("Cidade %s:\n", codigo[0][3]);
    printf("  População: %d habitantes\n", populacao[0][3]);
    printf("  Área: %.2f km²\n", area[0][3]);
    printf("  PIB: %.2f bilhões\n", pib[0][3]);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos[0][3]);


    return 0;
}
