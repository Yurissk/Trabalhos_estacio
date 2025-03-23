#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TAM 100

int main() {
    char estado_A;
    char codigo_A[MAX_TAM];
    char cidade_A[MAX_TAM];
    int populacao_A;
    float area_A;
    double pib_A;
    int pontos_turisticos_A;

    char estado_B;
    char codigo_B[MAX_TAM];
    char cidade_B[MAX_TAM];
    int populacao_B;
    float area_B;
    double pib_B;
    int pontos_turisticos_B;
    


    printf("carta 1: \n");
    printf("Digite o estado da sua carta: \n");
    scanf(" %c", &estado_A); 

    getchar();  

    printf("Digite o codigo da sua carta: \n");
    fgets(codigo_A, sizeof(codigo_A), stdin);
    codigo_A[strcspn(codigo_A, "\n")] = '\0';  

    printf("Digite a cidade da sua carta: \n");
    fgets(cidade_A, sizeof(cidade_A), stdin);
    cidade_A[strcspn(cidade_A, "\n")] = '\0';

    printf("Digite a populacao da sua carta: \n");
    scanf("%d", &populacao_A);

    printf("Digite a area da sua carta: \n");
    scanf("%f", &area_A);

    printf("Digite o PIB da sua carta: \n");
    scanf("%lf", &pib_A);

    printf("Digite os pontos turísticos da sua carta: \n");
    scanf("%d", &pontos_turisticos_A);

    getchar();  

    system("cls");

    printf("Carta 2: \n");
    printf("Digite o estado da sua carta: \n");
    scanf(" %c", &estado_B);

    getchar();

    printf("Digite o codigo da sua carta: \n");
    fgets(codigo_B, sizeof(codigo_B), stdin);
    codigo_B[strcspn(codigo_B, "\n")] = '\0';

    printf("Digite a cidade da sua carta: \n");
    fgets(cidade_B, sizeof(cidade_B), stdin);
    cidade_B[strcspn(cidade_B, "\n")] = '\0';

    printf("Digite a populacao da sua carta: \n");
    scanf("%d", &populacao_B);

    printf("Digite a area da sua carta: \n");
    scanf("%f", &area_B);

    printf("Digite o PIB da sua carta: \n");
    scanf("%lf", &pib_B);

    printf("Digite os pontos turísticos da sua carta: \n");
    scanf("%d", &pontos_turisticos_B);




    float densidade_populacional_A = populacao_A / area_A;
    float pib_per_capita_A = pib_A / populacao_A;
    float densidade_inv_A = area_A / populacao_A;
    float super_poder_A = populacao_A + area_A + pib_A + pontos_turisticos_A + pib_per_capita_A + densidade_inv_A;
    
    float densidade_populacional_B = populacao_B / area_B;
    float pib_per_capita_B = pib_B / populacao_B;
    float densidade_inv_B = area_B / populacao_B;
    float super_poder_B = populacao_B + area_B + pib_B + pontos_turisticos_B + pib_per_capita_B + densidade_inv_B;



    printf("Carta 1: \n");
    printf("Estado: %c\n", estado_A);
    printf("Codigo: %s\n", codigo_A);
    printf("Nome da cidade: %s\n", cidade_A);
    printf("Populacao: %d\n", populacao_A);
    printf("Area: %fkm\n", area_A);
    printf("PIB: R$%lf\n", pib_A);
    printf("Pontos turisticos: %d\n", pontos_turisticos_A);
    printf("PIB per capita: %f\n", pib_per_capita_A);
    printf("Densidade populacional: %f\n", densidade_populacional_A);
    printf ("Super Poder: %f\n", super_poder_A);


    printf("Carta 2: \n");
    printf("Estado: %c\n", estado_B);
    printf("Codigo: %s\n", codigo_B);
    printf("Nome da cidade: %s \n", cidade_B);
    printf("Populacao: %d\n", populacao_B);
    printf("Area: %fkm\n", area_B);
    printf("PIB: R$%lf\n", pib_B);
    printf("Pontos turisticos: %d\n", pontos_turisticos_B);
    printf("PIB per capita: %f\n", pib_per_capita_B);
    printf("Desidade populacional: %f\n", densidade_populacional_B);
    printf("Super Poder: %f\n", super_poder_B);

    if (populacao_A > populacao_B)
    {
        printf("População: Carta 1 venceu (1)\n");
    }
    else {
        printf("População: Carta 2 venceu (2)\n");
    }

    if (area_A > area_B)
    {
        printf("Area: Carta 1 venceu (1)\n");
    }
    else {
        printf("Area: Carta 2 venceu (2)\n");
    }

    if (pontos_turisticos_A > pontos_turisticos_B)
    {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    }
    else {
        printf("Pontos Turisticos: Carta 2 venceu (2)\n");
    }



    if (densidade_populacional_A < densidade_populacional_B)
    {
        printf("Densidade populacional: Carta 1 venceu (1)\n");
    }
    else {
        printf("Densidade populacional: Carta 2 venceu (2)\n");
    }

    if (pib_A > pib_B)
    {
        printf("PIB: carta 1 venceu (1)\n");
    }
    else {
        printf("PIB: carta 2 venceu (2)\n");
    }

    if (pib_per_capita_A > pib_per_capita_B)
    {
        printf("PIB per capita: Carta 1 venceu\n");
    }
    else {
        printf("PIB per capita: Carta 2 venceu\n");
    }

    if (super_poder_A > super_poder_B)
    {
        printf("Super poder: Carta 1 venceu(1)\n");
    }
    else {
        printf("Super poder: Carta 2 venceu(1)\n");
    }
    
    






    return 0;
}
