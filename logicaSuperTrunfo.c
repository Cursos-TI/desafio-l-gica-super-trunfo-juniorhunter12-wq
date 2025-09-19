#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // ---- Declarações (tudo antes de usar) ----
    unsigned long int populacao, populacao2;
    int numero_de_pontos_turisticos, numero_de_pontos_turisticos2;
    float area, area2;
    float pib, pib2;
    char estado[20], estado2[20];
    char codigo[50], codigo2[50];
    char nome_da_cidade[50], nome_da_cidade2[50];
    float densidade_populacional, densidade_populacional2;
    float pib_per_capita, pib_per_capita2;
    int opcao;

    // ---- Entrada: Carta 1 ----
    printf("=== Cadastro: Carta 1 ===\n");
    printf("Digite o estado (sem espacos):\n");
    scanf("%19s", estado);
    printf("Digite o nome da cidade (sem espacos):\n");
    scanf("%49s", nome_da_cidade);
    printf("Digite o codigo:\n");
    scanf("%49s", codigo);
    printf("Digite a populacao:\n");
    scanf("%lu", &populacao);
    printf("Digite a area (em km2):\n");
    scanf("%f", &area);
    printf("Digite o PIB (em reais):\n");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

    if (area == 0.0f) {
        printf("Aviso: area == 0. Ajustando para 1.0 para evitar divisao por zero.\n");
        area = 1.0f;
    }
    densidade_populacional = (float)populacao / area;
    pib_per_capita = pib / (float)populacao;

    // ---- Entrada: Carta 2 ----
    printf("\n=== Cadastro: Carta 2 ===\n");
    printf("Digite o estado (sem espacos):\n");
    scanf("%19s", estado2);
    printf("Digite o nome da cidade (sem espacos):\n");
    scanf("%49s", nome_da_cidade2);
    printf("Digite o codigo:\n");
    scanf("%49s", codigo2);
    printf("Digite a populacao:\n");
    scanf("%lu", &populacao2);
    printf("Digite a area (em km2):\n");
    scanf("%f", &area2);
    printf("Digite o PIB (em reais):\n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &numero_de_pontos_turisticos2);

    if (area2 == 0.0f) {
        printf("Aviso: area2 == 0. Ajustando para 1.0 para evitar divisao por zero.\n");
        area2 = 1.0f;
    }
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    // ---- Mostra as cartas ----
    printf("\n--- Carta 1: %s (%s) ---\n", nome_da_cidade, estado);
    printf("Populacao: %lu\nArea: %.2f km2\nPIB: %.2f\nPontos turisticos: %d\nDensidade: %.2f\nPIB per capita: %.2f\n",
           populacao, area, pib, numero_de_pontos_turisticos, densidade_populacional, pib_per_capita);

    printf("\n--- Carta 2: %s (%s) ---\n", nome_da_cidade2, estado2);
    printf("Populacao: %lu\nArea: %.2f km2\nPIB: %.2f\nPontos turisticos: %d\nDensidade: %.2f\nPIB per capita: %.2f\n",
           populacao2, area2, pib2, numero_de_pontos_turisticos2, densidade_populacional2, pib_per_capita2);

    // ---- Menu de comparação ----
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica (menor vence)\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", nome_da_cidade, nome_da_cidade2);

    switch (opcao) {
        case 1: // População
            printf("Populacao: %lu x %lu\n", populacao, populacao2);
            if (populacao > populacao2) printf("%s venceu!\n", nome_da_cidade);
            else if (populacao < populacao2) printf("%s venceu!\n", nome_da_cidade2);
            else printf("Empate!\n");
            break;
        case 2: // Área
            printf("Area: %.2f x %.2f\n", area, area2);
            if (area > area2) printf("%s venceu!\n", nome_da_cidade);
            else if (area < area2) printf("%s venceu!\n", nome_da_cidade2);
            else printf("Empate!\n");
            break;
        case 3: // PIB
            printf("PIB: %.2f x %.2f\n", pib, pib2);
            if (pib > pib2) printf("%s venceu!\n", nome_da_cidade);
            else if (pib < pib2) printf("%s venceu!\n", nome_da_cidade2);
            else printf("Empate!\n");
            break;
        case 4: // Pontos turísticos
            printf("Pontos Turisticos: %d x %d\n", numero_de_pontos_turisticos, numero_de_pontos_turisticos2);
            if (numero_de_pontos_turisticos > numero_de_pontos_turisticos2) printf("%s venceu!\n", nome_da_cidade);
            else if (numero_de_pontos_turisticos < numero_de_pontos_turisticos2) printf("%s venceu!\n", nome_da_cidade2);
            else printf("Empate!\n");
            break;
        case 5: // Densidade (menor vence)
            printf("Densidade: %.2f x %.2f\n", densidade_populacional, densidade_populacional2);
            if (densidade_populacional < densidade_populacional2) printf("%s venceu!\n", nome_da_cidade);
            else if (densidade_populacional > densidade_populacional2) printf("%s venceu!\n", nome_da_cidade2);
            else printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}

