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

    printf("Bem-vindo ao cadastro de cidades do Super Truno! \n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
