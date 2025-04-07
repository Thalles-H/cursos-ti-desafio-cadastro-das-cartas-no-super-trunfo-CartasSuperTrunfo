#include <stdio.h>

int main() {
    char estado1[20], estado2[20];
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int habitantes1, habitantes2;
    float area1, area2;
    int pib1, pib2;
    int turistico1, turistico2;

    printf("Primeira Carta\n");

    printf("Digite o Estado:\n");
    scanf("%s", estado1);

    printf("Digite o Codigo da Carta:\n");
    scanf("%s", codigo1);

    printf("Digite a Cidade:\n");
    scanf("%s", cidade1);

    printf("Digite o Numero de Habitantes:\n");
    scanf("%d", &habitantes1);

    printf("Digite a Area:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%d", &pib1);

    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &turistico1);

    printf("Agora a Segunda Carta\n");

    printf("Digite o Estado:\n");
    scanf("%s", estado2);

    printf("Digite o Codigo da Carta:\n");
    scanf("%s", codigo2);

    printf("Digite a Cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o Numero de Habitantes:\n");
    scanf("%d", &habitantes2);

    printf("Digite a Area:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%d", &pib2);

    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &turistico2);

    return 0;
}

