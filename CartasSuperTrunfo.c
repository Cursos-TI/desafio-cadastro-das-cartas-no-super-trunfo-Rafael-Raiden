#include <stdio.h>

// Definições de constantes para facilitar a manutencao
#define NUM_ESTADOS 8
#define CIDADES_POR_ESTADO 4

int main() {
    // Declaração de variáveis
    char codigo[NUM_ESTADOS][CIDADES_POR_ESTADO][4];
    int populacao[NUM_ESTADOS][CIDADES_POR_ESTADO];
    float area[NUM_ESTADOS][CIDADES_POR_ESTADO];
    float pib[NUM_ESTADOS][CIDADES_POR_ESTADO];
    int pontos_turisticos[NUM_ESTADOS][CIDADES_POR_ESTADO];

    printf("Bem-vindo ao cadastro de cidades do Super Trunfo! \n");

    // Cadastro das cidades
    for (int estado = 0; estado < NUM_ESTADOS; estado++) {
        for (int cidade = 0; cidade < CIDADES_POR_ESTADO; cidade++) {
            // Gerar o código da cidade (exemplo: A01, B02)
            char estado_letra = 'A' + estado; // Estados representados por A, B, ..., H
            sprintf(codigo[estado][cidade], "%c%02d", estado_letra, cidade + 1);

            // Solicitar informações ao usuário
            printf("Cadastrando a cidade %s:\n", codigo[estado][cidade]);

            printf("  População: ");
            scanf("%d", &populacao[estado][cidade]);

            printf("  Área (km²): ");
            scanf("%f", &area[estado][cidade]);

            printf("  PIB (em bilhões): ");
            scanf("%f", &pib[estado][cidade]);

            printf("  Número de pontos turísticos: ");
            scanf("%d", &pontos_turisticos[estado][cidade]);

            printf("\n");
        }
    }

    // Exibição dos dados cadastrados com cálculos de densidade populacional e PIB per capita
    printf("\nDados cadastrados:\n\n");
    for (int estado = 0; estado < NUM_ESTADOS; estado++) {
        for (int cidade = 0; cidade < CIDADES_POR_ESTADO; cidade++) {
            printf("Cidade %s:\n", codigo[estado][cidade]);
            printf("  População: %d habitantes\n", populacao[estado][cidade]);
            printf("  Área: %.2f km²\n", area[estado][cidade]);
            printf("  PIB: %.2f bilhões\n", pib[estado][cidade]);
            printf("  Pontos Turísticos: %d\n", pontos_turisticos[estado][cidade]);

            // Cálculo e exibição da densidade populacional e PIB per capita
            if (area[estado][cidade] > 0) {
                float densidade = populacao[estado][cidade] / area[estado][cidade];
                printf("  Densidade Populacional: %.2f habitantes/km²\n", densidade);
            } else {
                printf("  Densidade Populacional: área inválida\n");
            }

            if (populacao[estado][cidade] > 0) {
                float pib_per_capita = (pib[estado][cidade] * 1e9) / populacao[estado][cidade];
                printf("  PIB per Capita: R$ %.2f\n", pib_per_capita);
            } else {
                printf("  PIB per Capita: população inválida\n");
            }

            printf("\n");
        }
    }

    printf("Sistema finalizado. Obrigado por usar o Super Trunfo - Tema: Países!\n");

    return 0;
}
