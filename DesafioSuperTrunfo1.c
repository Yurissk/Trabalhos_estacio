#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Para utlizar cacteres especiais

    // Declaração de variaveis

    char codigo_1[50], codigo_2[50];
    char cidade_1[50], cidade_2[50];
    double populacao_1, populacao_2;
    double area_1, area_2;
    double pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;

    // Entrada de dados

    printf("Digite o codigo da sua primeira carta: \n");
    scanf("%49s", codigo_1);

    printf("Digite a cidade da sua primeira carta: \n");
    scanf("%49s", cidade_1);

    printf("Digite a populacao da sua primeira carta: \n");
    scanf("%lf", &populacao_1);

    printf("Digite a area da sua primeira carta: \n");
    scanf("%lf", &area_1);

    printf("Digite o PIB da sua primeira carta: \n");
    scanf("%lf", &pib_1);

    printf("Digite os pontos turísticos da sua primeira carta: \n");
    scanf("%d", &pontos_turisticos_1);

    system("cls"); // limpar a tela do terminal para entrar os dados da carta 2

    printf("Digite o codigo da segunda carta: \n");
    scanf("%49s", codigo_2);

    printf("Digite a cidade da segunda carta: \n");
    scanf("%49s", cidade_2);

    printf("Digite a populacao da segunda carta: \n");
    scanf("%lf", &populacao_2);

    printf("Digite a area da segunda carta: \n");
    scanf("%lf", &area_2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%lf", &pib_2);

    printf("Digite os pontos turísticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos_2);

    // calculo para densidade populacional, pib per capita, densidade demografica e super poder

    double densidade_populacional_1 = populacao_1 / area_1;
    double pib_per_capita_1 = pib_1 / populacao_1;
    double densidade_demografica_1 = area_1 / populacao_1;
    double super_poder_1 = populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + pib_per_capita_1 + densidade_demografica_1;

    double densidade_populacional_2 = populacao_2 / area_2;
    double pib_per_capita_2 = pib_2 / populacao_2;
    double densidade_demografica_2 = area_2 / populacao_2;
    double super_poder_2 = populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_per_capita_2 + densidade_demografica_2;

    printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-Super Trunfo_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");

    // impressão dos dados na tela

    printf("Carta 1: \n");
    printf("Codigo: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", cidade_1);

    printf("Populacao: %lf\n", populacao_1);
    printf("Area: %lf km\n", area_1);
    printf("PIB: R$%lf Milhões\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);
    printf("PIB per capita: %lf\n", pib_per_capita_1);
    printf("Densidade Demografica: %lf\n", densidade_demografica_1);
    printf("Densidade populacional: %lf\n", densidade_populacional_1);
    printf("Super Poder: %lf\n", super_poder_1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Codigo: %s\n", codigo_2);
    printf("Nome da cidade: %s \n", cidade_2);

    printf("Populacao: %lf\n", populacao_2);
    printf("Area: %lf km\n", area_2);
    printf("PIB: R$%lf milhões\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    printf("PIB per capita: %lf\n", pib_per_capita_2);
    printf("Densidade Demografica: %lf\n", densidade_demografica_2);
    printf("Densidade populacional: %lf\n", densidade_populacional_2);
    printf("Super Poder: %lf\n", super_poder_2);

    // Comparação de população
    if (populacao_1 > populacao_2)
    {
        printf("População: Carta 1 ganhou! (%lf)\n", populacao_1);
    }
    else if (populacao_1 == populacao_2)
    {
        printf("População: Empate, ambos com o mesmo valor!\n");
    }
    else if (populacao_1 < populacao_2)
    {
        printf("População: Carta 2 ganhou! (%lf)\n", populacao_2);
    }

    // Comparação de Área
    if (area_1 > area_2)
    {
        printf("Área: Carta 1 ganhou! (%lf)\n", area_1);
    }
    else if (area_1 == area_2)
    {
        printf("Área: Empate, ambos com o mesmo valor!\n");
    }
    else if (area_1 < area_2)
    {
        printf("Área: Carta 2 ganhou! (%lf)\n", area_2);
    }

    // Comparação de PIB
    if (pib_1 > pib_2)
    {
        printf("PIB: Carta 1 ganhou! (%lf)\n", pib_1);
    }
    else if (pib_1 == pib_2)
    {
        printf("PIB: Empate, ambos com o mesmo valor!\n");
    }
    else if (pib_1 < pib_2)
    {
        printf("PIB: Carta 2 ganhou! (%lf)\n", pib_2);
    }

    // Comparação de PIB per capita
    if (pib_per_capita_1 > pib_per_capita_2)
    {
        printf("PIB per capita: Carta 1 ganhou! (%lf)\n", pib_per_capita_1);
    }
    else if (pib_per_capita_1 == pib_per_capita_2)
    {
        printf("PIB per capita: Empate, ambos com o mesmo valor!\n");
    }
    else if (pib_per_capita_1 < pib_per_capita_2)
    {
        printf("PIB per capita: Carta 2 ganhou! (%lf)\n", pib_per_capita_2);
    }

    // Comparação de Pontos Turísticos
    if (pontos_turisticos_1 > pontos_turisticos_2)
    {
        printf("Pontos turísticos: Carta 1 ganhou! (%d)\n", pontos_turisticos_1);
    }
    else if (pontos_turisticos_1 == pontos_turisticos_2)
    {
        printf("Pontos turísticos: Empate, ambos com o mesmo valor!\n");
    }
    else if (pontos_turisticos_1 < pontos_turisticos_2)
    {
        printf("Pontos turísticos: Carta 2 ganhou! (%d)\n", pontos_turisticos_2);
    }

    // Comparação de Densidade Populacional
    if (densidade_populacional_1 > densidade_populacional_2)
    {
        printf("Densidade populacional: Carta 1 ganhou! (%lf)\n", densidade_populacional_1);
    }
    else if (densidade_populacional_1 == densidade_populacional_2)
    {
        printf("Densidade populacional: Empate, ambos com o mesmo valor!\n");
    }
    else if (densidade_populacional_1 < densidade_populacional_2)
    {
        printf("Densidade populacional: Carta 2 ganhou! (%lf)\n", densidade_populacional_2);
    }

    // Comparação Densidade demografica
    if (densidade_demografica_1 > densidade_demografica_2)
    {
        printf("Densidade demográfica: Carta 1 ganhou! (%lf)\n", densidade_demografica_1);
    }
    else if (densidade_demografica_1 == densidade_demografica_2)
    {
        printf("Densidade demográfica: Empate, ambos com o mesmo valor!\n");
    }
    else
    {
        printf("Densidade demográfica: Carta 2 ganhou! (%lf)\n", densidade_demografica_2);
    }

    // Comparação de Super Poder
    if (super_poder_1 > super_poder_2)
    {
        printf("Super Poder: Carta 1 ganhou! (%lf)\n", super_poder_1);
    }
    else if (super_poder_1 == super_poder_2)
    {
        printf("Super poder: Empate, ambos com o mesmo valor!\n");
    }
    else if (super_poder_1 < super_poder_2)
    {
        printf("Super Poder: Carta 2 ganhou! (%lf)\n", super_poder_2);
    }

    return 0;
}

