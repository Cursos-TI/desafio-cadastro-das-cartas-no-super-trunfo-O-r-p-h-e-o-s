#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// ----Feito por Pedro Henrique de Siqueira Oliveira----

int main() {

 // Variáveis para a primeira carta
 char codigoCarta1[10], nomeCidade1[30], estado1[20];
 int populacao1, numPontosTuristicos1;
 float areaKm2_1;

 // Variáveis para a segunda carta
 char codigoCarta2[10], nomeCidade2[30], estado2[20];
 int populacao2, numPontosTuristicos2;
 float areaKm2_2;

 // Cadastro da primeira carta
 printf("\n--- Cadastro da Carta 1 ---\n");
 printf("Digite o código da carta: ");
 scanf("%s", codigoCarta1);

 printf("Digite o nome da cidade (apenas uma palavra): ");
 scanf("%s", nomeCidade1);

 printf("Digite o estado (apenas uma palavra): ");
 scanf("%s", estado1);

 printf("Digite a população da cidade (somente números, sem pontos): ");
 scanf("%d", &populacao1);

 printf("Digite a área da cidade (km²): ");
 scanf("%f", &areaKm2_1);

 printf("Digite o número de pontos turísticos: ");
 scanf("%d", &numPontosTuristicos1);

 // Cadastro da segunda carta
 printf("\n--- Cadastro da Carta 2 ---\n");
 printf("Digite o código da carta: ");
 scanf("%s", codigoCarta2);

 printf("Digite o nome da cidade (apenas uma palavra): ");
 scanf("%s", nomeCidade2);

 printf("Digite o estado (apenas uma palavra): ");
 scanf("%s", estado2);

 printf("Digite a população da cidade (somente números, sem pontos): ");
 scanf("%d", &populacao2);

 printf("Digite a área da cidade (km²): ");
 scanf("%f", &areaKm2_2);

 printf("Digite o número de pontos turísticos: ");
 scanf("%d", &numPontosTuristicos2);

 // Exibição dos dados cadastrados
 printf("\n=== Cartas Cadastradas ===\n");

 // Exibição da primeira carta
 printf("\n--- Carta 1 ---\n");
 printf("Código: %s\n", codigoCarta1);
 printf("Cidade: %s\n", nomeCidade1);
 printf("Estado: %s\n", estado1);
 printf("População: %d habitantes\n", populacao1);
 printf("Área: %.2f km²\n", areaKm2_1);
 printf("Pontos Turísticos: %d\n", numPontosTuristicos1);

 // Exibição da segunda carta
 printf("\n--- Carta 2 ---\n");
 printf("Código: %s\n", codigoCarta2);
 printf("Cidade: %s\n", nomeCidade2);
 printf("Estado: %s\n", estado2);
 printf("População: %d habitantes\n", populacao2);
 printf("Área: %.2f km²\n", areaKm2_2);
 printf("Pontos Turísticos: %d\n", numPontosTuristicos2);

 
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf ("novo commit /n");
    return 0;
  
  }
