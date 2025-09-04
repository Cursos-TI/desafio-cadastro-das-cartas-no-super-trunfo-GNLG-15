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
    float densidade1;
    float pibpercapita1;

//Dados da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    float populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;
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

//Comando para exibir na tela os dados informados da carta 1
    printf("\n---- Dados da Carta 1 ----\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %f\n", populacao1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Area: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
//Até aqui é o Nível Novato do desafio
//Nível Aventureiro
    densidade1 = populacao1 / area1;
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    pibpercapita1 = pib1 / populacao1;
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
//Nível Mestre
    float superpoder1 = (float)populacao1 + (float)pontosturisticos1 + (float)area1 + (float)pib1 + (1.0f / densidade1) + (float)pibpercapita1;
    printf("Super poder: %f\n", superpoder1);
    
//Comando para exibir na tela os dados informados da carta 2
    printf("\n---- Dados da Carta 2 ----\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %f\n", populacao2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Area: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
//Até aqui é o Nível Novato do desafio
//A partir daqui é o Nível Aventureiro
    densidade2 = populacao2 / area2;
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    pibpercapita2 = pib2 / populacao2;
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
//Nível Mestre   
    float superpoder2 = (float)populacao2 + (float)pontosturisticos2 + (float)area2 + (float)pib2 + (1.0f / densidade2) + (float)pibpercapita2;
    printf("Super poder: %f\n",superpoder2);

//Comparação das cartas    
    printf("\n---- Comparação de atributos ----\n");
//Comparação entre a população
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu! \n");
    } else {
        printf("Carta 2 venceu! \n");
    }
//Comparação entre os pontos turísticos
    if (pontosturisticos1 > pontosturisticos2) {
        printf("Carta 1 venceu! n");
    } else {
        printf("Carta 2 venceu! \n");
    }
//Comparação entre as áreas
    if (area1 > area2) {
        printf("Carta 1 venceu! \n");
    } else {
        printf("Carta 2 venceu! \n");
    }
//Comparação entre o PIB de cada cidade
    if (pib1 > pib2) {
        printf("Carta 1 venceu! \n");
    } else {
        printf("Carta 2 venceu! \n");
    }
//Comparação entre o PIB per capita de cada cidade
    if (pibpercapita1 > pibpercapita2) {
        printf("PIB per capita: Carta 1 venceu! \n");
    } else {
        printf("PIB per capita: Carta 2 venceu! \n");
    }
//Comparação entre a densidade populacional (inversamente proporcional)
    if (densidade1 < densidade2) {
        printf("Carta 1 venceu! \n");
    } else {
        printf("Carta 2 venceu! \n");
    }
//Comparação entre o Super Poder de cada carta
    if (superpoder1 > superpoder2) {
        printf("Carta 1 venceu! \n");
    } else {
        printf("Carta 2 venceu! \n");
    }

    return 0;
}