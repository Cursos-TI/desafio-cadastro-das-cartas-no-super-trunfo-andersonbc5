#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;

    // Leitura dos dados da Carta 1
    printf("CADASTRO CARTA 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);  

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);  

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1); 

    printf("População: ");
    scanf("%d", &populacao1);  

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico1);

    // Leitura dos dados da Carta 2
    printf("\nCADASTRO CARTA 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);  

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);  

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);  

    printf("População: ");
    scanf("%d", &populacao2);  

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);

    return 0;
}
