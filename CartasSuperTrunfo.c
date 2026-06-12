#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

// Área para definição das variáveis para armazenar as propriedades dos países
char Nome_pais1[50], Nome_pais2[50]; 
unsigned long int populacao1, populacao2;
int ponto_turistico1, ponto_turistico2;
int Escolha_comparacao;
float area1, pib1 , area2, pib2;
float Densidade_populacional1, Densidade_populacional2;
float pib_per_capta1, pib_per_capta2, super_Poder1, super_Poder2;

// Área para entrada de dados
// CADASTRO DA PRIMEIRA CARTA
printf("----------SUPER TRUNFO - PAÍSES----------\n");
printf("Vamos cadastrar a primeira carta:\n");
printf("Digite a o nome do país: ");
scanf(" %[^\n]", Nome_pais1);
printf("Digite a população do país: (sem colocar ponto) ");
scanf("%d", &populacao1);
printf("Digite quantos pontos turísticos possui o país: ");
scanf("%d", &ponto_turistico1);
printf("Digite em Km² a área do país: ");
scanf("%f", &area1);
printf("Digite o PIB do país: ");
scanf("%f", &pib1);
printf("\n");

 Densidade_populacional1 = (populacao1 / area1);
 pib_per_capta1 = (float) (pib1 / populacao1);
 super_Poder1 = (float)(populacao1 + area1 + pib1 + ponto_turistico1 + pib_per_capta1 + (1 / Densidade_populacional1)); 
 
 // Exemplo de cálculo para o super poder
// CADASTRO DA SEGUNDA CARTA
printf("Agora cadastraremos a segunda carta:\n");
printf("Digite a o nome do país: ");
scanf(" %[^\n]", Nome_pais2);
printf("Digite a população do país: (sem colocar ponto) ");
scanf("%d", &populacao2);
printf("Digite quantos pontos turísticos possui o país: ");
scanf("%d", &ponto_turistico2);
printf("Digite em Km² a área do país: ");
scanf("%f", &area2);
printf("Digite o PIB do país: ");
scanf("%f", &pib2);
printf("\n"); 

Densidade_populacional2 = (populacao2 / area2);
pib_per_capta2 = (pib2 / populacao2);
super_Poder2 = (float)(populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capta2 + (1 / Densidade_populacional2)); 

// Área para exibição dos dados cadastrados

// EXIBIÇÃO DA PRIMEIRA CARTA
printf("----------PRIMEIRA CARTA----------\n");
printf("País: %s\n", Nome_pais1);
printf("População: %d\n", populacao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos turísticos: %d\n", ponto_turistico1);
printf("Densidade Populacional:%.2f\n", Densidade_populacional1);
printf("PIB per Capita: %.2f\n", pib_per_capta1);
printf("Super Poder: %.2f\n", super_Poder1);
printf("\n");


// EXIBIÇÃO DA SEGUNDA CARTA
printf("----------SEGUNDA CARTA----------\n");
printf("País: %s\n", Nome_pais2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos turísticos: %d\n", ponto_turistico2);
printf("Densidade Populacional:%.2f\n", Densidade_populacional2);
printf("PIB per Capita: %.2f\n", pib_per_capta2);
printf("\n");

// Menu de Comparação das cartas

printf(" Escolha os atributos para comparação: \n");
printf(" 1 - População \n");
printf(" 2 - Área \n");
printf(" 3 - PIB \n");
printf(" 4 - Pontos turísticos \n");
printf(" 5 - Densidade Populacional \n");
printf(" 6 - PIB per Capita \n");
printf(" 7 - Super Poder \n");
printf("Escolha invalida! \n");
scanf("%d", &Escolha_comparacao);

// Lógica para comparação das cartas com base na escolha do usuário
switch (Escolha_comparacao)
{ case 1:
    if (populacao1 > populacao2) {
        printf("O país %s venceu pois a população é maior.\n", Nome_pais1);
    } else if (populacao1 < populacao2) {
        printf("O país %s venceu pois a população é maior.\n", Nome_pais2);
    } else {
        printf("Os dois países têm a mesma população.\n");
    }
    break;

case 2:
    if (area1 > area2) {
        printf("O país %s venceu pois a área é maior.\n", Nome_pais1);
    } else if (area1 < area2) {
        printf("O país %s venceu pois a área é maior.\n", Nome_pais2);
    } else {
        printf("Os dois países têm a mesma área.\n");
    }
    break;

case 3:
    if (pib1 > pib2) {
        printf("O país %s venceu pois o PIB é maior.\n", Nome_pais1);
    } else if (pib1 < pib2) {
        printf("O país %s venceu pois o PIB é maior.\n", Nome_pais2);
    } else {
        printf("Os dois países têm o mesmo PIB.\n");
    }
    break;

case 4:
    if (ponto_turistico1 > ponto_turistico2) {
        printf("O país %s venceu pois tem mais pontos turísticos.\n", Nome_pais1);
    } else if (ponto_turistico1 < ponto_turistico2) {
        printf("O país %s venceu pois tem mais pontos turísticos.\n", Nome_pais2);
    } else {
        printf("Os dois países têm o mesmo número de pontos turísticos.\n");
    }
    break;

case 5:
    if (Densidade_populacional1 < Densidade_populacional2) {
        printf("O país %s venceu pois tem menor densidade populacional.\n", Nome_pais1);
    } else if (Densidade_populacional1 > Densidade_populacional2) {
        printf("O país %s venceu pois tem menor densidade populacional.\n", Nome_pais2);
    } else {
        printf("Os dois países têm a mesma densidade populacional.\n");
    }
    break;

case 6:
    if (pib_per_capta1 > pib_per_capta2) {
        printf("O país %s venceu pois tem maior PIB per capita.\n", Nome_pais1);
    } else if (pib_per_capta1 < pib_per_capta2) {
        printf("O país %s venceu pois tem maior PIB per capita.\n", Nome_pais2);
    } else {
        printf("Os dois países têm o mesmo PIB per capita.\n");
    }
    break;

case 7:
    if (super_Poder1 > super_Poder2) {
        printf("O país %s venceu pois tem maior super poder.\n", Nome_pais1);
    } else if (super_Poder1 < super_Poder2) {
        printf("O país %s venceu pois tem maior super poder.\n", Nome_pais2);
    } else {
        printf("Os dois países têm o mesmo super poder.\n");
    }
    break;

default:
    printf("Escolha inválida!\n");
}

printf("----------COMPARAÇÃO DAS CARTAS----------\n");
if (super_Poder1 > super_Poder2) {
    printf("O país %s venceu pois o super poder é maior.\n", Nome_pais1);
} else if (super_Poder1 < super_Poder2) {
    printf("O país %s venceu pois o super poder é maior.\n", Nome_pais2);
} else {
    printf("Os dois países têm o mesmo poder.\n");


 
}









return 0;

}