#include <stdio.h>

int main()
{
    int populacao, numeros_de_Pontos_Turisticos;
    float area_em_km2, PIB;
    char Estado[50], Pais[50], codigo_da_carta[10];
    float PIB_percapita;
    float densidade_populacional;

    printf("Digite Pais \n");
    scanf("%s", Pais);

    printf("Digite codigo da carta \n");
    scanf("%s", codigo_da_carta);

    printf("Digite seu Estado \n");
    scanf("%s", Estado);

    printf("Digite sua populacao \n");
    scanf("%d", &populacao);

    printf("Digite sua area km2 \n");
    scanf("%f", &area_em_km2);

    printf("Digite numeros de pontos turisticos \n");
    scanf("%d", &numeros_de_Pontos_Turisticos);

    printf("Digite o PIB \n");
    scanf("%f", &PIB);

    densidade_populacional = populacao / area_em_km2;
    PIB_percapita = PIB / populacao;

    printf("\n--- CARTA 1 ---\n");
    printf("Pais: %s\n", Pais);
    printf("Codigo: %s\n", codigo_da_carta);
    printf("Estado: %s\n", Estado);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area_em_km2);
    printf("Pontos turisticos: %d\n", numeros_de_Pontos_Turisticos);
    printf("PIB: %.2f\n", PIB);
    printf("Densidade: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", PIB_percapita);

    /* ---------------- CARTA 2 ---------------- */

    int populacao2, numeros_de_Pontos_Turisticos2;
    float area_em_km22, PIB2;
    char Pais2[50], Estado2[50], codigo_da_carta2[10];
    float PIB_percapita2;
    float densidade_populacional2;

    printf("\nDigite Pais2 \n");
    scanf("%s", Pais2);

    printf("Digite codigo da carta2 \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite seu Estado2 \n");
    scanf("%s", Estado2);

    printf("Digite sua populacao2 \n");
    scanf("%d", &populacao2);

    printf("Digite sua area km22 \n");
    scanf("%f", &area_em_km22);

    printf("Digite numeros de pontos turisticos2 \n");
    scanf("%d", &numeros_de_Pontos_Turisticos2);

    printf("Digite o PIB2 \n");
    scanf("%f", &PIB2);

    densidade_populacional2 = populacao2 / area_em_km22;
    PIB_percapita2 = PIB2 / populacao2;

    printf("\n--- CARTA 2 ---\n");
    printf("Pais: %s\n", Pais2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Estado: %s\n", Estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area_em_km22);
    printf("Pontos turisticos: %d\n", numeros_de_Pontos_Turisticos2);
    printf("PIB: %.2f\n", PIB2);
    printf("Densidade: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", PIB_percapita2);

    /* -------- MENU REPETINDO -------- */

    int opcao;
    float valor1, valor2;
    float vencedor;

    do
    {
        printf("\nEscolha o atributo (0 para sair)\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - Pontos turisticos\n");
        printf("4 - PIB\n");
        printf("5 - Densidade populacional\n");
        printf("6 - PIB per capita\n");
        printf("0 - sair\n");

        scanf("%d", &opcao);

        if (opcao == 0)
            break;

        switch (opcao)
        {
            case 1:
                valor1 = populacao;
                valor2 = populacao2;
                break;

            case 2:
                valor1 = area_em_km2;
                valor2 = area_em_km22;
                break;

            case 3:
                valor1 = numeros_de_Pontos_Turisticos;
                valor2 = numeros_de_Pontos_Turisticos2;
                break;

            case 4:
                valor1 = PIB;
                valor2 = PIB2;
                break;

            case 5:
                valor1 = densidade_populacional;
                valor2 = densidade_populacional2;
                break;

            case 6:
                valor1 = PIB_percapita;
                valor2 = PIB_percapita2;
                break;

            default:
                printf("Opcao invalida!\n");
                continue;
        }

        if (valor1 == valor2)
        {
            printf("\nEmpate!\n");
        }
        else
        {
            vencedor = (valor1 > valor2) ? valor1 : valor2;

            printf("\nCarta %d venceu neste atributo!\n",
                   (valor1 > valor2) ? 1 : 2);

            printf("Valor da atribuicao (vencedor): %.2f\n", vencedor);
        }

        printf("\nPressione ENTER para continuar...");
        getchar();
        getchar();

    } while (1);

    return 0;
}