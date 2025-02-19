#include <stdio.h>

int main() {

    char cidade_1[20];
    char cidade_2[20];
    char codigo_1[20];
    char codigo_2[20];
    char estado_1;
    char estado_2;
    int populacao_1;
    int populacao_2;
    float area_1;
    float area_2;
    float PIB_1;
    float PIB_2;
    int nPontosTuristicos_1;
    int nPontosTuristicos_2;

    // Cadastro CARTA UM
    printf("Vamos começar o cadastro das cartas. Digite os dados da primeira carta. Nome da Cidade:\n");
    scanf("%s", &cidade_1);
    printf("Cidade: %s\n", cidade_1);

    printf("Digite o código da primeira carta:\n");
    scanf("%s", &codigo_1);
    printf("Código da carta: %s\n", codigo_1);

    printf("Digite o estado da primeira carta:\n");
    scanf(" %c", &estado_1);
    printf("Estado: %c\n\n", estado_1);
   
    printf("Digite a população da primeira carta:\n");
    scanf("%d", &populacao_1);
    printf("População: %d\n\n", populacao_1);

    printf("Digite a Área da primeira carta:\n");
    scanf("%f", &area_1);
    printf("Área: %.2f km²\n\n", area_1);

    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &PIB_1);
    printf("PIB: %.2f bilhões de reais\n\n", PIB_1);

    printf("Digite o número de Pontos Turisticos da primeira carta:\n");
    scanf("%d", &nPontosTuristicos_1);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos_1);

    // Cadastro CARTA DOIS
    printf("SEGUNDA CARTA. Digite o nome da cidade:\n");
    scanf("%s", &cidade_2);
    printf("Cidade: %s\n", cidade_2);

    printf("Digite o código da segunda carta:\n");
    scanf("%s", &codigo_2);
    printf("Código da carta: %s\n", codigo_2);

    printf("Digite o estado da segunda carta:\n");
    scanf(" %c", &estado_2);
    printf("Estado: %c\n\n", estado_2);

    printf("Digite a população da segunda carta:\n");
    scanf("%d", &populacao_2);
    printf("População: %d\n\n", populacao_2);

    printf("Digite a Área da segunda carta:\n");
    scanf("%f", &area_2);
    printf("Área: %.2f km²\n\n", area_2);

    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &PIB_2);
    printf("PIB: %.2f bilhões de reais\n\n", PIB_2);

    printf("Digite o número de Pontos Turisticos da segunda carta:\n");
    scanf("%d", &nPontosTuristicos_2);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos_2);

    printf("********************************************************\n");
    printf("DADOS DA CARTA 1:\n");
    printf("Cidade: %s\n\n", cidade_1);
    printf("Código da carta: %s\n\n", codigo_1);
    printf("Estado: %c\n\n", estado_1);
    printf("População: %.2d Habitantes\n\n", populacao_1);
    printf("Área: %.2f km²\n\n", area_1);
    printf("PIB: %.2f Bilhões de reais\n\n", PIB_1);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos_1);

    printf("********************************************************\n");
    printf("DADOS DA CARTA 2:\n");
    printf("Cidade: %s\n\n", cidade_2);
    printf("Código da carta: %s\n\n", cBlumenauodigo_2);
    printf("Estado: %c\n\n", estado_2);
    printf("População: %.2d Habitantes\n\n", populacao_2);
    printf("Área: %.2f km²\n\n", area_2);
    printf("PIB: %.2f Bilhões de reais\n\n", PIB_2);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos_2);

    return 0;
}
