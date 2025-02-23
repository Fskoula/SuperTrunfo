#include <stdio.h>

int main() {
    //variaveis que receberam os valores passados pelo usuário
    char cidade_1[20], cidade_2[20], codigo_1[20], codigo_2[20], estado_1, estado_2;
    int nPontosTuristicos_1, nPontosTuristicos_2, populacao_1, populacao_2;
    float area_1, area_2, densidadePopula_1, densidadePopula_2, PIB_1, PIB_2, PIB_percap_1, PIB_percap_2;

    // Cadastro da primeira CARTA
    printf("Vamos começar o cadastro das cartas. Digite os dados da primeira carta.\n");
    printf("Nome da Cidade:\n");
    scanf("%s", &cidade_1);
    printf("Cidade: %s\n", cidade_1);

    printf("Digite o código da primeira carta: Ex: A01, B05...\n");
    scanf("%s", &codigo_1);
    printf("Código da carta: %s\n", codigo_1);

    printf("Digite o estado da primeira carta: Ex: A, B...\n");
    scanf(" %c", &estado_1);
    printf("Estado: %c\n\n", estado_1);

    printf("Digite a população da primeira carta:\n");
    scanf("%d", &populacao_1);
    printf("População: %d\n\n", populacao_1);

    printf("Digite a Área da primeira carta:\n");
    scanf("%f", &area_1);
    printf("Área: %f km²\n\n", area_1);

    densidadePopula_1 = (float)(populacao_1 / area_1);
    printf("Dencidade Populacional: %f hab/km²\n", densidadePopula_1);

    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &PIB_1);
    printf("PIB: %f bilhões de reais\n\n", PIB_1);

    PIB_percap_1 = (float)(PIB_1 / populacao_1);
    printf("PIB per capita: %.7f reais\n", PIB_percap_1);

    printf("Digite o número de Pontos Turisticos da primeira carta:\n");
    scanf("%d", &nPontosTuristicos_1);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos_1);

    // Cadastro da segunda CARTA 
    printf("Vamos cadastrar a segunda carta.\n");
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade_2);
    printf("Cidade: %s\n", cidade_2);

    printf("Digite o código da segunda carta: Ex: A01, B05...\n");
    scanf("%s", &codigo_2);
    printf("Código da carta: %s\n", codigo_2);

    printf("Digite o estado da segunda carta: Ex: A, B...\n");
    scanf(" %c", &estado_2);
    printf("Estado: %c\n\n", estado_2);

    printf("Digite a população da segunda carta:\n");
    scanf("%d", &populacao_2);
    printf("População: %d\n\n", populacao_2);

    printf("Digite a Área da segunda carta:\n");
    scanf("%f", &area_2);
    printf("Área: %f km²\n\n", area_2);

    densidadePopula_2 = (float)(populacao_2 / area_2);
    printf("Dencidade Populacional: %f hab/km²\n", densidadePopula_2);

    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &PIB_2);
    printf("PIB: %f bilhões de reais\n\n", PIB_2);

    PIB_percap_2 = (float)(PIB_2 / populacao_2);
    printf("PIB per capita: %.7f reais\n", PIB_percap_2);

    printf("Digite o número de Pontos Turisticos da segunda carta:\n");
    scanf("%d", &nPontosTuristicos_2);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos_2);

    // Dados das cartas
    printf("********************************************************\n");
    printf("DADOS DA CARTA 1:\n");
    printf("Cidade: %s\n\n", cidade_1);
    printf("Código da carta: %s\n\n", codigo_1);
    printf("Estado: %c\n\n", estado_1);
    printf("População: %.2d Habitantes\n\n", populacao_1);
    printf("Área: %.2f km²\n\n", area_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopula_1);
    printf("PIB: %.2f Bilhões de reais\n\n", PIB_1);
    printf("PIB per Capita: %.2f reais\n", PIB_percap_1);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos_1);

    printf("********************************************************\n");
    printf("DADOS DA CARTA 2:\n");
    printf("Cidade: %s\n\n", cidade_2);
    printf("Código da carta: %s\n\n", codigo_2);
    printf("Estado: %c\n\n", estado_2);
    printf("População: %.2d Habitantes\n\n", populacao_2);
    printf("Área: %.2f km²\n\n", area_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopula_2);
    printf("PIB: %.2f Bilhões de reais\n\n", PIB_2);
    printf("PIB per Capita: %.2f reais\n", PIB_percap_2);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos_2);

    return 0;
}
