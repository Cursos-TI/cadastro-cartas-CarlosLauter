#include <stdio.h>

main(){

  //Não usei nenhum acento ou ç, pois aparecia como símbolos estranhos no console


  char estado1, estado2, codigo_carta1[10], codigo_carta2[10], nome_cidade1[20], nome_cidade2[20]; //declarando todas as variáveis 
  int populacao1, populacao2, num_pontos_turis1, num_pontos_turis2;
  float area_km2_1, area_km2_2, pib1, pib2;

  printf("--- Cadastrando Cartas ---");

  printf("\n\nPrimeira carta:\n");
  printf("\nDigite a letra do Estado: ");
  scanf(" %c", &estado1); //usei o espaço antes do %c como dito em aula para não dar problema de buffer
  getchar(); //estava tendo problemas, pulava as minhas perguntas, pesquisei na internet e manda usar isso e resolveu, aparentemente limpa o buffer
  printf("\nDigite o codigo da carta, composto pela letra do estado seguido de um numero de 01 a 04: ");
  scanf("%s", codigo_carta1);
  getchar(); //estava tendo problemas, pulava as minhas perguntas, pesquisei na internet e manda usar isso e resolveu, aparentemente limpa o buffer
  printf("\nDigite o nome da cidade: ");
  fgets(nome_cidade1, 20, stdin); //usei fgets pelo nome da cidade poder ter espaços, conforme exemplo São Paulo
  nome_cidade1[strcspn(nome_cidade1, "\n")] = 0; //usado conforme mostrado no texto da aula
  printf("\nDigite a populacao da cidade escolhida: ");
  scanf("%d", &populacao1);
  printf("\nDigite a area em km2 da cidade escolhida: ");
  scanf("%f", &area_km2_1);
  printf("\nDigite o PIB em bilhoes de reais da cidade escolhida: ");
  scanf("%f", &pib1);
  printf("\nDigite o numero de pontos turisticos da cidade escolhida: ");
  scanf("%d", &num_pontos_turis1);

  printf("\n\n"); //separar e ficar mais legível tanto no console quanto no código

  printf("Segunda carta:\n");
  printf("\nDigite a letra do Estado: ");
  scanf(" %c", &estado2); //usei o espaço antes do %c como dito em aula para não dar problema de buffer
  getchar(); //estava tendo problemas, pulava as minhas perguntas, pesquisei na internet e manda usar isso e resolveu, aparentemente limpa o buffer
  printf("\nDigite o codigo da carta, composto pela letra do estado seguido de um numero de 01 a 04: ");
  scanf("%s", codigo_carta2);
  getchar(); //estava tendo problemas, pulava as minhas perguntas, pesquisei na internet e manda usar isso e resolveu, aparentemente limpa o buffer
  printf("\nDigite o nome da cidade: ");
  fgets(nome_cidade2, 20, stdin); //usei fgets pelo nome da cidade poder ter espaços, conforme exemplo Rio de janeiro
  nome_cidade2[strcspn(nome_cidade2, "\n")] = 0; //usado conforme mostrado no texto da aula
  printf("\nDigite a populacao da cidade escolhida: ");
  scanf("%d", &populacao2);
  printf("\nDigite a area em km2 da cidade escolhida: ");
  scanf("%f", &area_km2_2);
  printf("\nDigite o PIB em bilhoes de reais da cidade escolhida: ");
  scanf("%f", &pib2);
  printf("\nDigite o numero de pontos turisticos da cidade escolhida: ");
  scanf("%d", &num_pontos_turis2);

  //calculando a densidade
  double densidade_populacional1 =  populacao1 / area_km2_1; //criei as variaveis aqui mesmo para não encher lá em cima
  double densidade_populacional2 =  populacao2 / area_km2_2; //criei as variaveis aqui mesmo para não encher lá em cima

  //calculando o percapita
  double per_capita1 =  (pib1 * 1000000000) / populacao1; //Aqui eu tive que multiplicar po 1bilhao pra conta fazer sentido
  double per_capita2 =  (pib2 * 1000000000) / populacao2; 


  printf("\n\n"); //separar e ficar mais legível tanto no console quanto no código

  printf("\nCarta 1:");
  printf("\nEstado: %c", estado1);
  printf("\nCodigo: %s", codigo_carta1);
  printf("\nNome da Cidade: %s", nome_cidade1);
  printf("\nPopulacao: %d", populacao1);
  printf("\nArea: %.2f km2", area_km2_1); //usei .2f para permitir apenas 2 número após a "vírgula", conforme exemplo
  printf("\nPIB: %.2f bilhoes de reais", pib1); //usei .2f para permitir apenas 2 número após a "vírgula", conforme exemplo
  printf("\nNumero de Pontos Turisticos: %d", num_pontos_turis1);
  printf("\nDensidade Populacional: %.2f hab/km2", densidade_populacional1);
  printf("\nPIB per Capita: %.2f reais", per_capita1);

  printf("\n");
  
  printf("\nCarta 2:");
  printf("\nEstado: %c", estado2);
  printf("\nCodigo: %s", codigo_carta2);
  printf("\nNome da Cidade: %s", nome_cidade2);
  printf("\nPopulacao: %d", populacao2);
  printf("\nArea: %.2f km2", area_km2_2); //usei .2f para permitir apenas 2 número após a "vírgula", conforme exemplo
  printf("\nPIB: %.2f bilhoes de reais", pib2); //usei .2f para permitir apenas 2 número após a "vírgula", conforme exemplo
  printf("\nNumero de Pontos Turisticos: %d", num_pontos_turis2);
  printf("\nDensidade Populacional: %.2f hab/km2", densidade_populacional2);
  printf("\nPIB per Capita: %.2f reais", per_capita2);

  return 0;
}