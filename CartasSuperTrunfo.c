#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// No Nivel Intermediário, além de criar as cartas, você deve criar um menu para o usuário escolher quais atributos deseja comparar entre as cartas cadastradas. O programa deve exibir qual carta é a vencedora com base no atributo escolhido.
// No nível avançado, além de criar as cartas e o menu para comparação, você deve criar um atributo especial chamado "Super Poder", que é calculado com base em uma fórmula que leva em consideração os outros atributos da carta. O programa deve permitir ao usuário escolher comparar as cartas com base no "Super Poder" e exibir qual carta é a vencedora.
int main() {

// Área para definição das variáveis para armazenar as propriedades dos países
char Nome_pais1[50], Nome_pais2[50]; 
unsigned long int populacao1, populacao2;
int ponto_turistico1, ponto_turistico2;
int atributo1, atributo2;
int resultado;
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
scanf("%lu", &populacao1);
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
scanf("%lu", &populacao2);
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
printf("População: %lu\n", populacao1);
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
printf("População: %lu\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos turísticos: %d\n", ponto_turistico2);
printf("Densidade Populacional:%.2f\n", Densidade_populacional2);
printf("PIB per Capita: %.2f\n", pib_per_capta2);
printf("\n");

// Menu de atributos para comparação

printf(" Escolha o primeiro atributo para comparação: \n");
printf(" 1 - População \n");
printf(" 2 - Área \n");
printf(" 3 - PIB \n");
printf(" 4 - Pontos turísticos \n");
printf(" 5 - Densidade Populacional \n");
printf(" 6 - PIB per Capita \n");
printf(" 7 - Super Poder \n");
printf("Escolha um atributo: \n");
scanf("%d", &atributo1);

printf(" Escolha o segundo atributo para comparação: \n");
printf(" 1 - População \n");
printf(" 2 - Área \n");
printf(" 3 - PIB \n");
printf(" 4 - Pontos turísticos \n");
printf(" 5 - Densidade Populacional \n");
printf(" 6 - PIB per Capita \n");
printf(" 7 - Super Poder \n");
printf("Escolha um atributo: \n");
scanf("%d", &atributo2);

  //validação para garantir que os atributos escolhidos sejam diferentes
if (atributo1 == atributo2) {
    printf("Os atributos escolhidos são os mesmos. Por favor, escolha atributos diferentes para comparação.\n");
    return 0; // Encerra o programa para evitar comparação inválida
}

// Lógica para comparação das cartas com base na escolha do usuário
switch (atributo1)
{
case 1:
   resultado =  (populacao1 > populacao2) ? 1 : ((populacao1 == populacao2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com maior população é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem a mesma população.\n");
    } else {
        printf("O país com maior população é: %s\n", Nome_pais2);
    }
    break;
case 2:
    resultado = (area1 > area2) ? 1 : ((area1 == area2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com maior área é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem a mesma área.\n");
    } else {
        printf("O país com maior área é: %s\n", Nome_pais2);
    }
    break;
case 3:
    resultado = (pib1 > pib2) ? 1 : ((pib1 == pib2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com maior PIB é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem o mesmo PIB.\n");
    } else {
        printf("O país com maior PIB é: %s\n", Nome_pais2);
    }
    break;
case 4:
    resultado = (ponto_turistico1 > ponto_turistico2) ? 1 : ((ponto_turistico1 == ponto_turistico2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com mais pontos turísticos é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem a mesma quantidade de pontos turísticos.\n");
    } else {
        printf("O país com mais pontos turísticos é: %s\n", Nome_pais2);
    }
    break;
case 5:
    resultado = (Densidade_populacional1 < Densidade_populacional2) ? 1 : ((Densidade_populacional1 == Densidade_populacional2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país %s vence por ter a menor densidade populacional.\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem a mesma densidade populacional.\n");
    } else {
        printf("O país %s vence por ter a menor densidade populacional.\n", Nome_pais2);
    }
    break;
case 6:
    resultado = (pib_per_capta1 > pib_per_capta2) ? 1 : ((pib_per_capta1 == pib_per_capta2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com maior PIB per Capita é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem o mesmo PIB per Capita.\n");
    } else {
        printf("O país com maior PIB per Capita é: %s\n", Nome_pais2);
    }
    break;
case 7:
    resultado = (super_Poder1 > super_Poder2) ? 1 : ((super_Poder1 == super_Poder2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com maior Super Poder é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem o mesmo Super Poder.\n");
    } else {
        printf("O país com maior Super Poder é: %s\n", Nome_pais2);
    }
    break;
default:
    printf("Opção inválida. Por favor, escolha um atributo válido.\n");
    break;
}

switch (atributo2)
{case 1:
    resultado =  (populacao1 > populacao2) ? 1 : ((populacao1 == populacao2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com maior população é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem a mesma população.\n");
    } else {
        printf("O país com maior população é: %s\n", Nome_pais2);
    }
    break;
   case 2:
    resultado = (area1 > area2) ? 1 : ((area1 == area2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com maior área é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem a mesma área.\n");
    } else {
        printf("O país com maior área é: %s\n", Nome_pais2);
    }
    break;
case 3:
    resultado = (pib1 > pib2) ? 1 : ((pib1 == pib2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com maior PIB é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem o mesmo PIB.\n");
    } else {
        printf("O país com maior PIB é: %s\n", Nome_pais2);
    }
    break;
case 4:
    resultado = (ponto_turistico1 > ponto_turistico2) ? 1 : ((ponto_turistico1 == ponto_turistico2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com mais pontos turísticos é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem a mesma quantidade de pontos turísticos.\n");
    } else {
        printf("O país com mais pontos turísticos é: %s\n", Nome_pais2);
    }
    break;
case 5:
    resultado = (Densidade_populacional1 < Densidade_populacional2) ? 1 : ((Densidade_populacional1 == Densidade_populacional2) ? 2 : 0);
    if (resultado == 1) {
    printf("O país %s vence por ter a menor densidade populacional.\n", Nome_pais1);
} else if (resultado == 2) {
    printf("Os países possuem a mesma densidade populacional.\n");
} else {
    printf("O país %s vence por ter a menor densidade populacional.\n", Nome_pais2);
}
    break;
case 6:
    resultado = (pib_per_capta1 > pib_per_capta2) ? 1 : ((pib_per_capta1 == pib_per_capta2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com maior PIB per Capita é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem o mesmo PIB per Capita.\n");
    } else {
        printf("O país com maior PIB per Capita é: %s\n", Nome_pais2);
    }
    break;
case 7:
    resultado = (super_Poder1 > super_Poder2) ? 1 : ((super_Poder1 == super_Poder2) ? 2 : 0);
    if (resultado == 1) {
        printf("O país com maior Super Poder é: %s\n", Nome_pais1);
    } else if (resultado == 2) {
        printf("Os países possuem o mesmo Super Poder.\n");
    } else {
        printf("O país com maior Super Poder é: %s\n", Nome_pais2);
    }
    break;
default:
    printf("Opção inválida. Por favor, escolha um atributo válido.\n");
    break;

}

return 0 ;
}