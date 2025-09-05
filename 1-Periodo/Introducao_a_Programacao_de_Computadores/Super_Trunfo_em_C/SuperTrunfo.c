#include <stdio.h>

int main(){
  char 
    estado1, 
    estado2,
    codigoCarta1[6],
    codigoCarta2[6],
    cidade1[30],
    cidade2[30];

  int 
      populacao1,
      populacao2,
      qtdPontosTuristico1, 
      qtdPontosTuristico2;
  float 
      area1,
      area2,
      pib1,
      pib2;

  printf("--------------Carta 01--------------------\n\n");
  printf("Digite o Estado da carta: ");
  scanf(" %c", &estado1);
  printf("Digite o Código da carta: ");
  scanf(" %s", codigoCarta1);
  printf("Digite o nome da cidade: ");
  scanf(" %ss", &cidade1);
  printf("Digite a quantidade populaciona: ");
  scanf("%d", &populacao1);    
  printf("Digite a área (em Km²): ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Informe quantos pontos turísticos tem: ");
  scanf("%d", &qtdPontosTuristico1);

  printf("--------------Carta 02--------------------\n");
  printf("Digite o Estado da carta: ");
  scanf(" %c", &estado2);
  printf("Digite o Código da carta: ");
  scanf(" %s", codigoCarta2);
  printf("Digite o nome da cidade: ");
  scanf(" %s", &cidade2);
  printf("Digite a quantidade populaciona: ");
  scanf("%d", &populacao2);    
  printf("Digite a área (em Km²): ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Informe quantos pontos turísticos tem: ");
  scanf("%d", &qtdPontosTuristico2);  

  printf("Carta 1:\n");
  printf(
          "Estado: %c \n", estado1,
          "Código: %c%c \n", estado1, codigoCarta1,
          "Nome da Cidade: %c \n", cidade1,
          "População: %.2f \n", populacao1,
          "Área: %.2f \n", area1,
          "PIB: %.2f \n", pib1,
          "Número de Pontos Turísticos: %d \n", qtdPontosTuristico1       
  );
  printf("\n\nCarta 2:\n");
  printf(
          "Estado: %c \n", estado2,
          "Código: %c%c \n", estado2, codigoCarta2,
          "Nome da Cidade: %c \n", cidade2,
          "População: %.2f \n", populacao2,
          "Área: %.2f \n", area2,
          "PIB: %.2f \n", pib2,
          "Número de Pontos Turísticos: %d \n", qtdPontosTuristico2       
  );  

  return 0;
}