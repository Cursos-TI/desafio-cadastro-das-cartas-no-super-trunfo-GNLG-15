#include <stdio.h>

int main() {
    //Dados da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    float populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

//Dados da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    float populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    
    //Comando para escrever o nome das variáveis
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%f", &populacao1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o pib: ");
    scanf("%f", &pib1);
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%f", &populacao2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o pib: ");
    scanf("%f", &pib2);

    printf("\n---- Dados da Carta 1 ----\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %f\n", populacao1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);

    printf("\n---- Dados da Carta 2 ----\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %f\n", populacao2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);

    return 0;
}
