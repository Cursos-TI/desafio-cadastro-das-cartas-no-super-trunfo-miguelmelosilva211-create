#include <stdio.h>

int main()
{
    printf("Supert Trunfo em C\n");

    // variáveis primeira carta 
    char estado;
    char nomedacidade[50];
    char codigodacarta[10];
    int populacao;
    int numeroDePontosTuristicos;
    float area;
    double pib;

    printf("Digite uma letra de A a H para representar o estado: ");
    scanf(" %c", &estado);

    printf("O estado escolhido foi: %c\n", estado);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomedacidade);
    printf("O nome da cidade escolhido foi: %s\n", nomedacidade);

    printf("Digite o codigo da carta: ");
    scanf("%9s", codigodacarta);
    printf("O codigo escolhido foi: %s\n", codigodacarta);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
    printf("A populacao cadastrada foi: %d habitantes\n", populacao);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numeroDePontosTuristicos);
    printf("A cidade possui %d pontos turisticos.\n", numeroDePontosTuristicos);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &area);
    printf("A area cadastrada foi: %.2f km²\n", area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib);
    printf("O PIB cadastrado foi: %.2lf bilhões\n", pib);

    //segunda carta
    char estado2;
    char nomedacidade2[50];
    char codigodacarta2[10];
    int populacao2;
    int numeroDePontosTuristicos2;
    float area2;
    double pib2;

    printf("\nDigite uma letra de A a H para representar o estado da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%49s", nomedacidade2);

    printf("Digite o codigo da carta da segunda carta: ");
    scanf("%9s", codigodacarta2);

    printf("Digite a populacao da cidade da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos da cidade da segunda carta: ");
    scanf("%d", &numeroDePontosTuristicos2);

    printf("Digite a area da cidade da segunda carta (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda carta (em bilhões): ");
    scanf("%lf", &pib2);

    return 0;
}