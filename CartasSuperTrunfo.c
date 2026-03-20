#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades
char estado1, estado2;
char Nome_cidade1[50], Nome_cidade2[50]; 
char codigo_carta1[50], codigo_carta2[50];
int populacao1, populacao2;
int ponto_turistico1, ponto_turistico2;
float area1, pib1 , area2, pib2;
float Densidade_populacional1, Densidade_populacional2;
float pib_per_capta1, pib_per_capta2;

// Área para entrada de dados
// CADASTRO DA PRIMEIRA CARTA
printf("----------SUPER TRUNFO - PAÍSES----------\n");
printf("Vamos cadastrar a primeira carta:\n");
printf("Digite a letra de A a H que representa o estado: ");
scanf(" %c", &estado1);
printf("Digite o código da carta, representado pela letra e o numero de 01 a 04: ");
scanf("%s", codigo_carta1); 
printf("Digite o nome da cidade: ");
scanf(" %[^\n]", Nome_cidade1);
printf("Digite a população da cidade: (sem colocar ponto) ");
scanf("%d", &populacao1);
printf("Digite quantos pontos turísticos possui a cidade: ");
scanf("%d", &ponto_turistico1);
printf("Digite em Km² a área da cidade: ");
scanf("%f", &area1);
printf("Digite o PIB da cidade: ");
scanf("%f", &pib1);
printf("\n");

 Densidade_populacional1 = (populacao1 / area1);
 pib_per_capta1 = (float) (pib1 / populacao1);

// CADASTRO DA SEGUNDA CARTA
printf("Agora cadastraremos a segunda carta:\n");
printf("Digite a letra de A a H que representa o estado: ");
scanf(" %c", &estado2);
printf("Digite o código da carta, representado pela letra e o numero de 01 a 04: ");
scanf("%s", codigo_carta2);
printf("Digite o nome da cidade: ");
scanf(" %[^\n]", Nome_cidade2);
printf("Digite a população da cidade: (sem colocar ponto) ");
scanf("%d", &populacao2);
printf("Digite quantos pontos turísticos possui a cidade: ");
scanf("%d", &ponto_turistico2);
printf("Digite em Km² a área da cidade: ");
scanf("%f", &area2);
printf("Digite o PIB da cidade: ");
scanf("%f", &pib2);
printf("\n"); 

Densidade_populacional2 = (populacao2 / area2);
pib_per_capta2 = (pib2 / populacao2);

// Área para exibição dos dados cadastrados
// EXIBIÇÃO DA PRIMEIRA CARTA
printf("----------PRIMEIRA CARTA----------\n");
printf("Estado: %c\n", estado1);
printf("Código da carta: %s\n", codigo_carta1);
printf("Nome da Cidade: %s\n", Nome_cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos turísticos: %d\n", ponto_turistico1);
printf("Densidade Populacional:%.2f\n", Densidade_populacional1);
printf("PIB per Capita: %.2f\n", pib_per_capta1);
printf("\n");


// EXIBIÇÃO DA SEGUNDA CARTA
printf("----------SEGUNDA CARTA----------\n");
printf("Estado: %c\n",estado2);
printf("Código da carta: %s\n", codigo_carta2);
printf("Nome da Cidade: %s\n", Nome_cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos turísticos: %d\n", ponto_turistico2);
printf("Densidade Populacional:%.2f\n", Densidade_populacional2);
printf("PIB per Capita: %.2f\n", pib_per_capta2);
printf("\n");


return 0;
}