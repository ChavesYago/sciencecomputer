#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo em C\n");

    char estado1[10], estado2[10];
    // O estado referesse a uma letra entre 'A' a 'H' representando os 8 Estados
    char codigodacarta1[10], codigodacarta2[10];
    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nomedacidade1[20], nomedacidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    //Entrada de dados carta 01
    printf("Qual Estado: \n");
    scanf("%s", estado1);

    printf("Qual o código da Carta: \n");
    scanf("%s", codigodacarta1);

    printf("Qual o nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Qual a área:\n");
    scanf("%f", &area1);

    printf("Qual o PIB \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);
    
    //Entrada de dados carta 02 
    printf("Qual Estado: \n");
    scanf("%s", estado2);

    printf("Qual o código da Carta: \n");
    scanf("%s", codigodacarta2);

    printf("Qual o nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Qual a área:\n");
    scanf("%f", &area2);

    printf("Qual o PIB \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);


    printf("\nCARTA 01\n");
    printf("Estado: %s\n", estado1);
    printf("Carta: %s%s\n", estado1, codigodacarta1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.4fkm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turisticos: %d\n", pontosturisticos1);
    

    printf("CARTA 02\n");
    printf("Estado: %s\n", estado2);
    printf("Carta: %s%s\n", estado2, codigodacarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.4fkm²\n", area2);
    printf("PIB: %.2fBilhões de Reais\n", pib2);
    printf("Número de pontos turisticos: %d\n", pontosturisticos2);
    return 0;







}

