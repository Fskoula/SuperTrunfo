#include <stdio.h>

int main() {

    char cidade[50];
    char codigo[10];
    char estado;
    int populacao;
    float area;
    float PIB;
    int nPontosTuristicos;

    printf("Digite a cidade da sua carta:\n");
    fgets(cidade, 50, stdin);
    printf("Cidade: %s\n", cidade);

    printf("Digite o código da sua carta:\n");
    fgets(codigo, 10, stdin);
    printf("Código da carta: %s\n", codigo);

    printf("Digite o estado:\n");
    scanf("%c", &estado);
    printf("Estado: %c\n\n", estado);

    printf("Digite a população:\n");
    scanf("%d", &populacao);
    printf("População: %d\n\n", populacao);

    printf("Digite a Área:\n");
    scanf("%f", &area);
    printf("Área: %.2f km²\n\n", area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("PIB: %.2f bilhões de reais\n\n", PIB);

    printf("Digite o número de Pontos Turisticos:\n");
    scanf("%d", &nPontosTuristicos);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos);

    printf("********************************************************\n");
    printf("DADOS DA CARTA:\n");
    printf("Cidade: %s\n", cidade);
    printf("Código da carta: %s\n", codigo);
    printf("Estado: %c\n\n", estado);
    printf("População: %.2d Habitantes\n\n", populacao);
    printf("Área: %.2f km²\n\n", area);
    printf("PIB: %.2f Bilhões de reais\n\n", PIB);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos);

    return 0;
}
