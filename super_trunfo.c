#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[50], cidade1[50];
    int codigo1, populacao1, pontos1;
    float area1, pib1;

    // Variáveis da Carta 2
    char estado2[50], cidade2[50];
    int codigo2, populacao2, pontos2;
    float area2, pib2;

    // Entrada de dados da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%d", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados da carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%d", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Escolher o critério de comparação
    // Você pode trocar esse valor manualmente: 1=População, 2=Área, 3=PIB, 4=Densidade
    int criterio = 1;

    printf("\n===== Comparando Cartas =====\n");

    if (criterio == 1) {
        // Comparar pela população (maior vence)
        if (populacao1 > populacao2) {
            printf("Carta vencedora: %s (Populacao maior)\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Carta vencedora: %s (Populacao maior)\n", cidade2);
        } else {
            printf("Empate na populacao.\n");
        }
    } else if (criterio == 2) {
        // Comparar pela área (maior vence)
        if (area1 > area2) {
            printf("Carta vencedora: %s (Area maior)\n", cidade1);
        } else if (area2 > area1) {
            printf("Carta vencedora: %s (Area maior)\n", cidade2);
        } else {
            printf("Empate na area.\n");
        }
    } else if (criterio == 3) {
        // Comparar pelo PIB (maior vence)
        if (pib1 > pib2) {
            printf("Carta vencedora: %s (PIB maior)\n", cidade1);
        } else if (pib2 > pib1) {
            printf("Carta vencedora: %s (PIB maior)\n", cidade2);
        } else {
            printf("Empate no PIB.\n");
        }
    } else if (criterio == 4) {
        // Comparar pela densidade populacional (menor vence)
        float densidade1 = populacao1 / area1;
        float densidade2 = populacao2 / area2;

        if (densidade1 < densidade2) {
            printf("Carta vencedora: %s (Menor densidade populacional)\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("Carta vencedora: %s (Menor densidade populacional)\n", cidade2);
        } else {
            printf("Empate na densidade populacional.\n");
        }
    } else {
        printf("Criterio de comparacao invalido.\n");
    }

    return 0;
}
