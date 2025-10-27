#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[80] = "A01";
    char codigo2[90] = "B02";
    char cidade1[100] = "irati";
    char cidade2[100] = "andira";
    int populacao1 = 100 ;
    int populacao2 = 100;
    float area1 = 100.00 ;
    float area2 = 100.00;
    float pib1 = 1000.00 ;
    float pib2 = 1000.00;
    int numero1 = 0 ;
    int numero2 = 0;
    float densidade1 = 1000;
    float percapita1 = 1000;
    float densidade2 = 1000;
    float percapita2 = 1000;

  // Área para entrada de dados carta 1

    printf("carta 1 digite uma letra representando um dos oito estados \n");
    scanf("%c" , &estado1);

    printf("carta 1 digite codigo da carta uma a letra do estado seguida de um número de 01 a 04 \n");
    scanf("%s" , &codigo1);

    printf("carta 1 digite o nome da cidade \n");
    scanf("%s" , &cidade1);

    printf("carta 1 digite o número de habitantes da cidade \n");
    scanf("%d" , &populacao1);

    printf("carta 1 digite a área da cidade em quilômetros quadrados \n");
    scanf("%f" , &area1);

    printf("carta 1 digite o Produto Interno Bruto da cidade \n");
    scanf("%f" , &pib1);
    
    printf("carta 1 digite a quantidade de pontos turísticos na cidade \n");
    scanf("%d" , &numero1);

  // Área para entrada de dados carta 2

    printf("carta 2 digite uma letra representando um dos oito estados \n");
    scanf("%S" , &estado2);

    printf("carta 2 digite codigo da carta uma a letra do estado seguida de um número de 01 a 04 \n");
    scanf("%s" , &codigo2);

    printf("carta 2 digite o nome da cidade \n");
    scanf("%s" , &cidade2);

    printf("carta 2 digite o número de habitantes da cidade \n");
    scanf("%d" , &populacao2);

    printf("carta 2 digite a área da cidade em quilômetros quadrados \n");
    scanf("%f" , &area2);

    printf("carta 2 digite o Produto Interno Bruto da cidade \n");
    scanf("%f" , &pib2);
    
    printf("carta 2 digite a quantidade de pontos turísticos na cidade \n");
    scanf("%d" , &numero2);

  // Área de calculo

    densidade1 = populacao1 / area1;

    percapita1 = (pib1 / populacao1) * 1000000000;
    
    densidade2 = populacao2 / area2;

    percapita2 = (pib2 / populacao2) * 1000000000;

  // Área para exibição dos dados da cidade 1

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numero1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", percapita1);

  // Área para exibição dos dados da cidade 2
  
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numero2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", percapita2);

return 0;
} 
