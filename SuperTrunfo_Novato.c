#include <stdio.h>
int main() {
    
    // Dados para a Carta 1 
    char estado1[] = "Amazonia";
    char codigo_carta1[] = "A01";
    char nome_cidade1[] = "Manaus";
    int populacao1 = 2064000;
    float area1 = 11401;           // em km2
    float pib1 = 103.281;          // em bilhoes de reais
    int pontos_turisticos1 = 30;

    // Dados para a Carta 2 
    char estado2[] = "Para";
    char codigo_carta2[] = "B02";
    char nome_cidade2[] = "Belem";
    int populacao2 = 1398531;
    float area2 = 1059;           // em km    
    float pib2 = 33.4;            // em bilhoes de reais
    int pontos_turisticos2 = 21;

    // calcular a densidade populacional da carta 1:
    float densidade_populacional1 = (float) populacao1 / area1;
   
    // calcular o PIB per capita da carta 1:
    float pib_per_capita1 = pib1 * 1000000000 / populacao1;

    // calcular a densidade populacional da carta 2:
    float densidade_populacional2 = (float) populacao2 / area2;

    // calcular o PIB per capita da carta 2:
    float pib_per_capita2 = pib2 * 1000000000 / populacao2;
   
    // exibir carta 1
    printf("Carta 1:\n"); 
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais \n", pib1);
    printf("Pontos Turisticos: %d \n", pontos_turisticos1);
    printf("Densidade populacional: %.2f habitantes por km2\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    printf("\n"); // Linha em branco para separar as cartas

    // exibir carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais \n", pib2);
    printf("Pontos Turisticos: %d \n", pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km2\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("\n");

    // comparação das cartas pelo valor do pib em billhões.
    printf("Comparacao de cartas (Atributo: PIB): \n");
    printf("\n");
    printf("Carta 1 - Manaus: %.2f bilhoes de reais \n", pib1);
    printf("Carta 2 - Belem: %.2f bilhoes de reais \n", pib2);
    printf("\n");

    if (pib1 > pib2) {
        printf("A carta 1 (Manaus) Venceu !");
    }
    else {
        printf("A carta 2 (Belem) Venceu !");
    }
    printf("\n");
    return 0;
}