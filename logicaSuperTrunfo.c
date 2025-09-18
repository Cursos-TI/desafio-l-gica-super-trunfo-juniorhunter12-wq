#include <stdio.h>

int main() {
    
    // Carta 1
    unsigned long int populacao;
    int numero_de_pontos_turisticos;    
    float area;    
    float pib;    
    char estado[20];    
    char codigo[50];    
    char nome_da_cidade[50];   
    float densidade_populacional;
    float pib_per_capita;
    float super_poder1;

    // Carta 2
    unsigned long int populacao2;
    int numero_de_pontos_turisticos2;
    float area2;
    float pib2;
    char estado2[20];
    char codigo2[50];
    char nome_da_cidade2[50];
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Entrada - Carta 1
    printf("Digite o estado:\n");
    scanf("%s", estado);    

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade);    

    printf("Digite o codigo:\n");
    scanf("%s", codigo);

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao);
    
    printf("Digite a area (em km2):\n");
    scanf("%f", &area);

    printf("Digite o PIB (em reais):\n");
    scanf("%f", &pib);
    
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

    // Calculos da Carta 1
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;
    super_poder1 =  (float) populacao + area + pib + numero_de_pontos_turisticos + pib_per_capita + (1 / densidade_populacional);

    // Entrada - Carta 2
    printf("Digite o estado:\n");
    scanf("%s", estado2);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o codigo:\n");
    scanf("%s", codigo2);

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km2):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em reais):\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Calculos da Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

   
    // Saida - Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);    
    printf("Codigo: %s\n", codigo);    
    printf("Nome da Cidade: %s\n", nome_da_cidade);    
    printf("Populacao: %lu\n", populacao);    
    printf("Area: %.2f km2\n", area);    
    printf("PIB: %.2f reais\n", pib);  
    printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder1);

    // Saida - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

   
   
    //Comparação das cartas

     printf("Comparacao de Cartas (Atributo Populacao):\n");
     printf("Carta 1 - Populacao: %i \n", populacao);
     printf("Carta 1 - Populacao2: %i \n", populacao2);

    if (populacao > populacao2){
        printf("Populacao 1 venceu\n");
    } else {
        printf("Populacao 2 venceu\n");

        
    }

        return 0;
}
