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
    // Variáveis auxiliares
    int opcao1, opcao2, resultado;
    float soma_carta1 = 0, soma_carta2 = 0;

    // Comparação das cartas
    printf("COMPARACAO DAS CARTAS\n\n");
    printf("Escolha dois atributos da carta 1 para comparar com a carta 2:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n\n");

    // Primeiro atributo
    do {
        printf("Escolha o primeiro atributo (1-4): ");
        scanf("%d", &opcao1);
        if (opcao1 < 1 || opcao1 > 4) {
            printf("Opcao invalida. Escolha um numero entre 1 e 4.\n");
        }
    } while (opcao1 < 1 || opcao1 > 4);

    // Segundo atributo (não pode ser igual ao primeiro)
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
        if (opcao2 < 1 || opcao2 > 4) {
            printf("Opcao invalida. Escolha um numero entre 1 e 4.\n");
        } else if (opcao2 == opcao1) {
            printf("Opcao 2 nao pode ser igual a opcao 1. Escolha outro atributo.\n");
        }
    } while (opcao2 < 1 || opcao2 > 4 || opcao2 == opcao1);

    // Comparação do primeiro atributo
    switch (opcao1) {
        case 1:
            soma_carta1 += populacao1;
            soma_carta2 += populacao2;
            printf("Populacao de Manaus - %d\n", populacao1);
            printf("Populacao de Belem - %d\n", populacao2);
            break;
        case 2:
            soma_carta1 += area1;
            soma_carta2 += area2;
            printf("Area de Manaus - %.2f km2\n", area1);
            printf("Area de Belem - %.2f km2\n", area2);
            break;
        case 3:
            soma_carta1 += pib1;
            soma_carta2 += pib2;
            printf("PIB de Manaus - %.2f bilhoes\n", pib1);
            printf("PIB de Belem - %.2f bilhoes\n", pib2);
            break;
        case 4:
            soma_carta1 += pontos_turisticos1;
            soma_carta2 += pontos_turisticos2;
            printf("Pontos turisticos de Manaus - %d\n", pontos_turisticos1);
            printf("Pontos turisticos de Belem - %d\n", pontos_turisticos2);
            break;
        default:
            printf("Opcao invalida\n");
            return 1;
    }

    // Comparação do segundo atributo
    switch (opcao2) {
        case 1:
            soma_carta1 += populacao1;
            soma_carta2 += populacao2;
            printf("Populacao de Manaus - %d\n", populacao1);
            printf("Populacao de Belem - %d\n", populacao2);
            break;
        case 2:
            soma_carta1 += area1;
            soma_carta2 += area2;
            printf("Area de Manaus - %.2f km2\n", area1);
            printf("Area de Belem - %.2f km2\n", area2);
            break;
        case 3:
            soma_carta1 += pib1;
            soma_carta2 += pib2;
            printf("PIB de Manaus - %.2f bilhoes\n", pib1);
            printf("PIB de Belem - %.2f bilhoes\n", pib2);
            break;
        case 4:
            soma_carta1 += pontos_turisticos1;
            soma_carta2 += pontos_turisticos2;
            printf("Pontos turisticos de Manaus - %d\n", pontos_turisticos1);
            printf("Pontos turisticos de Belem - %d\n", pontos_turisticos2);
            break;
        default:
            printf("Opcao invalida\n");
            return 1;
    }
    // RESULTADO DAS CARTAS 
    resultado = soma_carta1 > soma_carta2 ? 1 : 2;
    if (resultado == 1) {
        printf("Manaus Venceu!!!\n");
    } else if (resultado == 2)  {
        printf("Belem Venceu!!!\n");
    } else {
        printf("EMPATE!!!\n");
    }
return 0;
}