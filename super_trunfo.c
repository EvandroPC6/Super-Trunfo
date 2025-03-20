#include <stdio.h>

int main(){
    char estado1;
    char codigo1[4];
    char nomeCidade1[15];
    int populacao1; 
    int pontosTuristicos1;
    float area1;
    float pib1;

    printf("Carta1: \nEstado de A a H: ");
    scanf(" %c", &estado1);

    printf("Código da Carta de 01 a 04: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Carta1:\nEstado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1fkm²\n", area1);
    printf("PIB: %.2fbilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
}