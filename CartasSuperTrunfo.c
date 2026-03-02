#include <stdio.h>

main(){

  char estado1, estado2, codigo_carta1[10], codigo_carta2[10], nome_cidade1[20], nome_cidade2[20];
  int populacao1, populacao2, num_pontos_turis1, num_pontos_turis2;
  float area_km2_1, area_km2_2, pib1, pib2;

  printf("--- Cadastrando Cartas ---");

  printf("\n\nPrimeira carta:\n");
  printf("\nDigite a letra do Estado: ");
  scanf(" %c", &estado1);
  getchar();
  printf("\nDigite o codigo da carta, composto pela letra do estado seguido de um numero de 01 a 04: ");
  scanf("%s", codigo_carta1);
  getchar();
  printf("\nDigite o nome da cidade: ");
  fgets(nome_cidade1, 20, stdin);
  nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;
  printf("\nDigite a populacao da cidade escolhida: ");
  scanf("%d", &populacao1);
  printf("\nDigite a area em km2 da cidade escolhida: ");
  scanf("%f", &area_km2_1);
  printf("\nDigite o PIB em bilhoes de reais da cidade escolhida: ");
  scanf("%f", &pib1);
  printf("\nDigite o numero de pontos turisticos da cidade escolhida: ");
  scanf("%d", &num_pontos_turis1);

  printf("\n\n");

  printf("Segunda carta:\n");
  printf("\nDigite a letra do Estado: ");
  scanf(" %c", &estado2);
  getchar();
  printf("\nDigite o codigo da carta, composto pela letra do estado seguido de um numero de 01 a 04: ");
  scanf("%s", codigo_carta2);
  getchar();
  printf("\nDigite o nome da cidade: ");
  fgets(nome_cidade2, 20, stdin);
  nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;
  printf("\nDigite a populacao da cidade escolhida: ");
  scanf("%d", &populacao2);
  printf("\nDigite a area em km2 da cidade escolhida: ");
  scanf("%f", &area_km2_2);
  printf("\nDigite o PIB em bilhoes de reais da cidade escolhida: ");
  scanf("%f", &pib2);
  printf("\nDigite o numero de pontos turisticos da cidade escolhida: ");
  scanf("%d", &num_pontos_turis2);

  printf("\n\n");

  printf("\nCarta 1:");
  printf("\nEstado: %c", estado1);
  printf("\nCodigo: %s", codigo_carta1);
  printf("\nNome da Cidade: %s", nome_cidade1);
  printf("\nPopulacao: %d", populacao1);
  printf("\nArea: %.2f km2", area_km2_1);
  printf("\nPIB: %.2f bilhoes de reais", pib1);
  printf("\nNumero de Pontos Turisticos: %d", num_pontos_turis1);
  
  printf("\n");
  
  printf("\nCarta 2:");
  printf("\nEstado: %c", estado2);
  printf("\nCodigo: %s", codigo_carta2);
  printf("\nNome da Cidade: %s", nome_cidade2);
  printf("\nPopulacao: %d", populacao2);
  printf("\nArea: %.2f km2", area_km2_2);
  printf("\nPIB: %.2f bilhoes de reais", pib2);
  printf("\nNumero de Pontos Turisticos: %d", num_pontos_turis2);


  return 0;
}