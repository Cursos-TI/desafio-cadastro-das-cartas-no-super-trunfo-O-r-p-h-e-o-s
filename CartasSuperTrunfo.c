 #include <stdio.h>

 // Desafio Super Trunfo - Países
 // Tema 1 - Cadastro das Cartas
 // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
 // Siga os comentários para implementar cada parte do desafio.
 //Teste larissa

 //feito por ---Pedro Henrique de Siqueira Oliveira---

 // Função para calcular o Super Poder da carta
  float calcularSuperPoder(unsigned long int populacao, float area, float pib, int pontosTuristicos, float pibPerCapita, float densidade) {
  return (float)populacao + area + (pib * 1000000000) + pontosTuristicos + pibPerCapita + (1 / densidade);
  }


int main() {
  // Variáveis para a primeira carta
  char codigo1[10], cidade1[30], estado1[20];
  unsigned long int populacao1;
  float area1, pib1, pibPerCapita1, densidade1, superPoder1;
  int pontos1;

  // Variáveis para a segunda carta
  char codigo2[10], cidade2[30], estado2[20];
  unsigned long int populacao2;
  float area2, pib2, pibPerCapita2, densidade2, superPoder2;
  int pontos2;

  // Entrada dos dados da Carta 1
  printf("\n--- Cadastro da Carta 1 ---\n");
  printf("Código: "); scanf("%s", codigo1);
  printf("Cidade: "); scanf("%s", cidade1);
  printf("Estado: "); scanf("%s", estado1);
  printf("População: "); scanf("%lu", &populacao1);
  printf("Área (km²): "); scanf("%f", &area1);
  printf("Pontos turísticos: "); scanf("%d", &pontos1);
  printf("PIB (em bilhões de reais): "); scanf("%f", &pib1);

  densidade1 = populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;
  superPoder1 = calcularSuperPoder(populacao1, area1, pib1, pontos1, pibPerCapita1, densidade1);

  // Entrada dos dados da Carta 2
  printf("\n--- Cadastro da Carta 2 ---\n");
  printf("Código: "); scanf("%s", codigo2);
  printf("Cidade: "); scanf("%s", cidade2);
  printf("Estado: "); scanf("%s", estado2);
  printf("População: "); scanf("%lu", &populacao2);
  printf("Área (km²): "); scanf("%f", &area2);
  printf("Pontos turísticos: "); scanf("%d", &pontos2);
  printf("PIB (em bilhões de reais): "); scanf("%f", &pib2);

  densidade2 = populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;
  superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontos2, pibPerCapita2, densidade2);

  // Exibição das cartas
  printf("\n=== Cartas Cadastradas ===\n");

  printf("\n--- Carta 1 ---\n");
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Estado: %s\n", estado1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("Pontos turísticos: %d\n", pontos1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("PIB per capita: %.2f\n", pibPerCapita1);
  printf("Densidade populacional: %.2f\n", densidade1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\n--- Carta 2 ---\n");
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Estado: %s\n", estado2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("Pontos turísticos: %d\n", pontos2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("PIB per capita: %.2f\n", pibPerCapita2);
  printf("Densidade populacional: %.2f\n", densidade2);
  printf("Super Poder: %.2f\n", superPoder2);

  // Comparações
  printf("\n=== Comparação de Cartas ===\n");
  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
  
  }
