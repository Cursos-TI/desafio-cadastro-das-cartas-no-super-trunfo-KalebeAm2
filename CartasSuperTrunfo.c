#include <stdio.h>

int main() {
    // Dados da Carta 1 - Estados Unidos
    char codigo1[] = "A01";
    int populacao1 = 331900000;
    float area1 = 9831510.0;
    float pib1 = 25.5;
    int pontos_turisticos1 = 63;

    // Dados da Carta 2 - China
    char codigo2[] = "B01";
    int populacao2 = 1412000000;
    float area2 = 9596961.0;
    float pib2 = 17.7;
    int pontos_turisticos2 = 100;

    // Exibição dos dados da primeira carta
    printf("=== Carta 1: Estados Unidos ===\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.0f km²\n", area1);
    printf("PIB: %.2f trilhões USD\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta
    printf("\n=== Carta 2: China ===\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.0f km²\n", area2);
    printf("PIB: %.2f trilhões USD\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
