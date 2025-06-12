#include <stdio.h>

int main() {
    // Dados fixos - Estados Unidos
    char codigo1[] = "A01";
    unsigned long populacao1 = 331900000;
    float area1 = 9831510.0;
    float pib1 = 25.5;
    int pontos1 = 63;
    float densidade1 = populacao1 / area1;
    float pib_capita1 = pib1 / populacao1;
    float inverso_densidade1 = 1.0 / densidade1;

    // Dados fixos - China
    char codigo2[] = "B01";
    unsigned long populacao2 = 1412000000;
    float area2 = 9596961.0;
    float pib2 = 17.7;
    int pontos2 = 100;
    float densidade2 = populacao2 / area2;
    float pib_capita2 = pib2 / populacao2;
    float inverso_densidade2 = 1.0 / densidade2;

    // Comparações (1 = EUA venceu | 0 = China venceu)
    int v1_populacao = populacao1 > populacao2;
    int v1_area = area1 > area2;
    int v1_pib = pib1 > pib2;
    int v1_pontos = pontos1 > pontos2;
    int v1_densidade = densidade1 < densidade2; // MENOR vence
    int v1_pib_capita = pib_capita1 > pib_capita2;

    // Super Poder de cada carta
    float super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_capita1 + inverso_densidade1;
    float super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_capita2 + inverso_densidade2;
    int v1_superpoder = super_poder1 > super_poder2;

    // Exibição dos resultados
    printf("=== Resultado da Comparação ===\n");
    printf("População: %d\n", v1_populacao);
    printf("Área Territorial: %d\n", v1_area);
    printf("PIB: %d\n", v1_pib);
    printf("Pontos Turísticos: %d\n", v1_pontos);
    printf("Densidade Populacional (MENOR vence): %d\n", v1_densidade);
    printf("PIB per Capita: %d\n", v1_pib_capita);

    printf("\n=== Super Poder ===\n");
    printf("Super Poder EUA: %.2f\n", super_poder1);
    printf("Super Poder China: %.2f\n", super_poder2);
    printf("Vencedor do Super Poder: %d\n", v1_superpoder);

    return 0;
}
