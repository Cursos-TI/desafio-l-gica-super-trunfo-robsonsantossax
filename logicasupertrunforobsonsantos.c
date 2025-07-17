#include <stdio.h>

int main (){
    // Lógica Super Trunfo - Robson Gari dos Santos
    // Tema 1 - Cadastro das Cartas

    // Declaração das Variáveis dos código de atributos das Cartas: Estado, Código da cidade, nome, população, área, PIB, número de pontos turísticos.
        
    // Atributos da Carta 1

    char estado1 [1];
    char codcidade1 [2];
    char nomecidade1 [20];
    int populacao1;
    float area1;
    int bip1;
    int pontosturisticos1;

   
    printf("Desafio Cartas Super Trunfo\n");
    
    // agora serão inseridos os dados da carta 1

    printf("Entre com os dados da Carta nº1\n");
    printf("Qual é o Estado? (escolha uma letra de A a H)\n");
    scanf("%s", &estado1);
    printf("Qual é o código da carta? (escolha um número com até dois dígitos)\n");
    scanf("%s", &codcidade1);
    printf("Qual é o nome da Cidade?\n");
    scanf("%s", &nomecidade1);
    printf("Qual é a População?\n");
    scanf("%d", &populacao1);
    printf("Qual é a área em Km2?\n");
    scanf("%f", &area1);
    printf("Qual é o BIP?\n");
    scanf("%d", &bip1);
    printf("Qual é o número de Pontos Turísticos?\n");
    scanf("%d", &pontosturisticos1);

// exibição dos dados das carta 1

 // Atributos da Carta 2

    char estado2 [1];
    char codcidade2 [2];
    char nomecidade2 [20];
    int populacao2;
    float area2;
    int bip2;
    int pontosturisticos2;

    printf("Dados da Carta nº1\n");
    printf("O Estado é: %s\n", estado1);
    printf("Código da Carta: %s\n", codcidade1);
    printf("O Nome da Cidade é: %s\n", nomecidade1);
    printf("A População é: %d\n", populacao1);
    printf("A Área é de: %f\n", area1);
    printf("O PIB é de: %d\n", bip1);
    printf("O número de Pontos Turísticos é de: %d\n", pontosturisticos1);

// agora serão inseridos os dados da carta 2B

    printf("Entre com os dados da Carta nº2\n");
    printf("Qual é o Estado? (escolha uma letra de A a H\n");
    scanf("%s", &estado2);
    printf("Qual é o código da carta? (escolha um número com até dois dígitos\n");
    scanf("%d", &codcidade2);
    printf("Qual é o nome da Cidade?\n");
    scanf("%s", &nomecidade2);
    printf("Qual é a População em \n");
    scanf("%d", &populacao2);
    printf("Qual é a área em Km2?\n");
    scanf("%f", &area2);
    printf("Qual é o BIP?\n");
    scanf("%d", &bip2);
    printf("Qual é o número de Pontos Turísticos?\n");
    scanf("%d", &pontosturisticos2);

// agora serão exibídos os dados da carta 2

    printf("Dados da Carta nº2\n");
    printf("O Estado é: %s\n", estado2);
    printf("Código da Carta: %s\n", codcidade2);
    printf("O Nome da Cidade é: %s\n", nomecidade2);
    printf("A População é: %d\n", populacao2);
    printf("A Área é de: %f\n", area2);
    printf("O PIB é de: %d\n", bip2);
    printf("O número de Pontos Turísticos é de: %d\n", pontosturisticos2);

 // Tema 2 - Comparação dos atributos

printf("O sistema irá verificar e comparar os dados da População para ver quen vence nesse ítem:\n");

   if (populacao1 > populacao2) {
    printf("A Carta 1 venceu no item população\n");
    printf("A População da Carta 1 é: %d\n", populacao1);
    printf("A População da Carta 2 é: %d\n", populacao2);
   }
    else {
    printf("A Carta 2 venceu no item população\n");
    printf("A População da Carta 2 é: %d\n", populacao2);
    printf("A População da Carta 1 é: %d\n", populacao1);
  }


        return 0;  
} 

