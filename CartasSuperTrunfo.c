#include <stdio.h>

int main() {
    // Carta 1: Estados Unidos
    char codigo1[] = "A01";
    unsigned long populacao1 = 331900000;
    float area1 = 9831510.0;
    float pib1 = 25.5;
    int pontos_turisticos1 = 63;
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // Carta 2: China
    char codigo2[] = "B01";
    unsigned long populacao2 = 1412000000;
    float area2 = 9596961.0;
    float pib2 = 17.7;
    int pontos_turisticos2 = 100;
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibir carta 1
    printf("=== Carta 1: Estados Unidos ===\n");
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.0f km²\n", area1);
    printf("PIB: %.2f trilhões USD\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.10f trilhões USD por pessoa\n", pib_per_capita1);

    // Exibir carta 2
    printf("\n=== Carta 2: China ===\n");
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.0f km²\n", area2);
    printf("PIB: %.2f trilhões USD\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.10f trilhões USD por pessoa\n", pib_per_capita2);

    return 0;
}
