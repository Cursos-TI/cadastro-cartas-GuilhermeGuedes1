#include <stdio.h>
#include <string.h>

int main()
{

    // Variaveis da carta 1

    int carta1 = 1;
    char pais1[50] = "Brasil";
    char estado1[20] = "RJ";
    char codigoDaCarta1[20] = "A1";
    char nomeDaCidade1[20] = "Rio de janeiro";
    unsigned long int populacao1 = 100000;
    float areaEmKm1 = 50.000;
    float pib1 = 8.2;
    int numeroDePontosTuristicos1 = 25;
    float densidadePopulacional1 = 154.000;
    float pibPerCapita1 = 8.4;
    int primeiroAtributo;

    // Variaveis da carta 2

    int carta2 = 2;
    char pais2[50] = "Brasil";
    char estado2[10] = "SP";
    char codigoDaCarta2[20] = "B2";
    char nomeDaCidade2[20] = "São Paulo";
    unsigned long int populacao2 = 80000;
    float areaEmKm2 = 25.000;
    float pib2 = 4.2;
    int numeroDePontosTuristicos2 = 17;
    float densidadePopulacional2 = 4.2;
    float pibPerCapita2 = 5.9;
    int segundoAtributo;

    // Interação do usuário para a carta 1

    // printf("Insira as informações da primeira carta\n");
    // printf("Insira uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    // scanf(" %c", &estado1);

    // printf("Insira o código da carta (ex: A01, B03):\n");
    // scanf("%s", codigoDaCarta1);

    // printf("Insira o nome da cidade:\n");
    // getchar();
    // fgets(nomeDaCidade1, 50, stdin);
    // nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = 0;

    // printf("Insira a quantidade populacional da cidade:\n");
    // scanf("%lu", &populacao1);

    // printf("Insira a área em km² da cidade:\n");
    // scanf("%f", &areaEmKm1);

    // printf("Insira o pib da cidade:\n");
    // scanf("%f", &pib1);

    // printf("Insira o numero de pontos turisticos da cidade:\n");
    // scanf("%d", &numeroDePontosTuristicos1);
    // printf("\n");

    // Interação do usuario para a carta 2

    // printf("Insira as informações da segunda carta\n");
    // printf("Insira uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    // scanf(" %c", &estado2);

    // printf("Insira o código da carta (ex: A01, B03):\n");
    // scanf("%s", codigoDaCarta2);

    // printf("Insira o nome da cidade:\n");
    // getchar();
    // fgets(nomeDaCidade2, 50, stdin);
    // nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = 0;

    // printf("Insira a quantidade populacional da cidade:\n");
    // scanf("%lu", &populacao2);

    // printf("Insira a área em km² da cidade:\n");
    // scanf("%f", &areaEmKm2);

    // printf("Insira o pib da cidade:\n");
    // scanf("%f", &pib2);

    // printf("Insira o numero de pontos turisticos da cidade:\n");
    // scanf("%d", &numeroDePontosTuristicos2);

    // Calculo Densidade Populacional

    densidadePopulacional1 = (float)populacao1 / areaEmKm1;

    densidadePopulacional2 = (float)populacao2 / areaEmKm2;

    // Calculo Pib per Capita

    pibPerCapita1 = (float)(pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (float)(pib2 * 1000000000) / populacao2;

    // Calculo Super Poder

    float superPoderCarta1;
    float superPoderCarta2;

    superPoderCarta1 = (float)populacao1 + areaEmKm1 + pib1 + numeroDePontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    superPoderCarta2 = (float)populacao2 + areaEmKm2 + pib2 + numeroDePontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // Informações da carta 1

    // printf("------------ PRIMEIRA CARTA -----------\n");

    // printf("Carta: %d\n", carta1);
    // printf("Estado: %s\n", estado1);
    // printf("Código da carta: %s\n", codigoDaCarta1);
    // printf("Nome da cidade: %s\n", nomeDaCidade1);
    // printf("População: %lu\n", populacao1);
    // printf("Área: %.2fkm²\n", areaEmKm1);
    // printf("Pib: R$ %.2f de reais\n", pib1);
    // printf("Número de pontos Turísticos: %d\n", numeroDePontosTuristicos1);
    // printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional1);
    // printf("PIB per Capita %.2f reais\n", pibPerCapita1);

    // // Informações da carta 2

    // printf("\n-------- SEGUNDA CARTA ---------\n");

    // printf("Carta: %d\n", carta2);
    // printf("Estado: %s\n", estado2);
    // printf("Código da carta: %s\n", codigoDaCarta2);
    // printf("Nome da cidade: %s\n", nomeDaCidade2);
    // printf("População: %lu\n", populacao2);
    // printf("Área: %.2f km²\n", areaEmKm2);
    // printf("Pib: R$ %.2f de reais\n", pib2);
    // printf("Número de pontos Turísticos: %d\n", numeroDePontosTuristicos2);
    // printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional2);
    // printf("PIB per Capita %.2f reais\n", pibPerCapita2);

    // // Comparação de cartas

    // printf("\n------------ Resultado ------------\n");

    // printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2, populacao1 > populacao2);
    // printf("Área: Carta %d venceu (%d)\n", areaEmKm1 > areaEmKm2, areaEmKm1 > areaEmKm2);
    // printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2, pib1 > pib2);
    // printf("Pontos Turísticos: Carta %d venceu (%d)\n", numeroDePontosTuristicos1 > numeroDePontosTuristicos2, numeroDePontosTuristicos1 > numeroDePontosTuristicos2);
    // printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2, densidadePopulacional1 < densidadePopulacional2);
    // printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2, pibPerCapita1 > pibPerCapita2);
    // printf("Super Poder: Carta %d venceu (%d)\n", superPoderCarta1 > superPoderCarta2, superPoderCarta1 > superPoderCarta2);

    // // Comparação das Cartas

    // float populacaoCarta1 = (float)populacao1;
    // float populacaoCarta2 = (float)populacao2;

    // printf("\nComparação de cartas (Atributo: População):\n");
    // printf("Carta 1 - %c: %.3f\n", estado1, populacaoCarta1);
    // printf("Carta 2 - %c: %.3f\n", estado2, populacaoCarta2);

    // if (populacao1 > populacao2)
    // {
    //     printf("Resultado: Carta 1 (%c) venceu!\n", estado1);
    // }
    // else
    // {
    //     printf("Resultado: Carta 2 (%c) venceu! \n", estado2);
    // }

    // // Escolha de Cartas para a Batalha

    // int escolhaJogador;
    // printf("Escolha qual atributo quer comparar:\n");
    // printf("1.Nome do país (apenas para exibir informações, não para comparação direta)\n");
    // printf("2.População\n");
    // printf("3.Área km²\n");
    // printf("4.PIB\n");
    // printf("5.Numero de Pontos turísticos\n");
    // printf("6.Densidade Demográfica\n");

    // scanf("%d", &escolhaJogador);

    // switch (escolhaJogador)
    // {
    // case 1:
    //     printf("O confronto é entre %s x %s", pais1, pais2);
    //     break;

    // case 2:
    //     printf("População\n");
    //     break;

    // case 3:
    //     printf("Área\n");
    //     break;

    // case 4:
    //     printf("PIB\n");
    //     break;

    // case 5:
    //     printf("Numero de pontos turísticos\n");
    //     break;

    // case 6:
    //     printf("Densidade Demográfica\n");
    //     break;

    // default:
    //     printf("Numero invalido");
    //     break;
    // }

    // if (escolhaJogador == 2)
    // {
    //     if (populacao1 > populacao2)
    //     {
    //         printf("O País das carta é: %s\n O Atributo escolhido foi: População\n Os valores do atributo para cada carta são: Carta 1 %lu e Carta 2 %lu\n A Carta vencedora é: Carta 1", pais1, populacao1, populacao2);
    //     }
    //     else if (populacao1 == populacao2)
    //     {
    //         printf("Empate!");
    //     }
    //     else
    //     {
    //         printf("O País das carta é: %c\n O Atributo escolhido foi: População\n Os valores do atributo para cada carta são: Carta 1 %lu e Carta 2 %lu\n A Carta vencedora é: Carta 2", pais1, populacao1, populacao2);
    //     }
    //     {
    //     }
    // }

    // if (escolhaJogador == 3)
    // {
    //     if (areaEmKm1 > areaEmKm2)
    //     {
    //         printf("O País das carta é: %s\n O Atributo escolhido foi: Área km²\n Os valores do atributo para cada carta são: Carta 1 %f e Carta 2 %f\n A Carta vencedora é: Carta 1", pais1, areaEmKm1, areaEmKm2);
    //     }
    //     else if (areaEmKm1 == areaEmKm2)
    //     {
    //         printf("Empate!");
    //     }
    //     else
    //     {
    //         printf("O País das carta é: %s\n O Atributo escolhido foi: Área km²\n Os valores do atributo para cada carta são: Carta 1 %f e Carta 2 %f\n A Carta vencedora é: Carta 2", pais1, areaEmKm1, areaEmKm2);
    //     }
    //     {
    //     }
    // }

    // if (escolhaJogador == 4)
    // {
    //     if (pib1 > pib2)
    //     {
    //         printf("O País das carta é: %s\n O Atributo escolhido foi: PIB\n Os valores do atributo para cada carta são: Carta 1 %f e Carta 2 %f\n A Carta vencedora é: Carta 1", pais1, pib1, pib2);
    //     }
    //     else if (pib1 == pib2)
    //     {
    //         printf("Empate!");
    //     }
    //     else
    //     {
    //         printf("O País das carta é: %s\n O Atributo escolhido foi: PIB\n Os valores do atributo para cada carta são: Carta 1 %f e Carta 2 %f\n A Carta vencedora é: Carta 2", pais1, pib1, pib2);
    //     }
    //     {
    //     }
    // }

    // if (escolhaJogador == 5)
    // {
    //     if (numeroDePontosTuristicos1 > numeroDePontosTuristicos2)
    //     {
    //         printf("O País das carta é: %s\n O Atributo escolhido foi: PIB\n Os valores do atributo para cada carta são: Carta 1 %d e Carta 2 %d\n A Carta vencedora é: Carta 1", pais1, numeroDePontosTuristicos1, numeroDePontosTuristicos2);
    //     }
    //     else if (numeroDePontosTuristicos1 == numeroDePontosTuristicos2)
    //     {
    //         printf("Empate!");
    //     }
    //     else
    //     {
    //         printf("O País das carta é: %s\n O Atributo escolhido foi: PIB\n Os valores do atributo para cada carta são: Carta 1 %d e Carta 2 %d\n A Carta vencedora é: Carta 2", pais1, numeroDePontosTuristicos1, numeroDePontosTuristicos2);
    //     }
    //     {
    //     }
    // }

    // if (escolhaJogador == 6)
    // {
    //     if (densidadePopulacional1 < densidadePopulacional2)
    //     {
    //         printf("O País das carta é: %s\n O Atributo escolhido foi: Densidade Demográfica\n Os valores do atributo para cada carta são: Carta 1 %f e Carta 2 %f\n A Carta vencedora é: Carta 1", pais1, densidadePopulacional1, densidadePopulacional2);
    //     }
    //     else if (densidadePopulacional1 == densidadePopulacional2)
    //     {
    //         printf("Empate!");
    //     }
    //     else
    //     {
    //         printf("O País das carta é: %s\n O Atributo escolhido foi: PIB\n Os valores do atributo para cada carta são: Carta 1 %f e Carta 2 %f\n A Carta vencedora é: Carta 2", pais1, densidadePopulacional1, densidadePopulacional2);
    //     }
    //     {
    //     }
    // }

    // Selecionar primeiro Atributo

    printf("Escolha o primeiro atributo para comparar: \n");
    printf("1. População\n");
    printf("2. Área km²\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &primeiroAtributo);

    // Menu dinâmico (não mostra o já escolhido)
    printf("\nEscolha o segundo atributo para comparar: \n");
    if (primeiroAtributo != 1)
        printf("1. População\n");
    if (primeiroAtributo != 2)
        printf("2. Área km²\n");
    if (primeiroAtributo != 3)
        printf("3. PIB\n");
    if (primeiroAtributo != 4)
        printf("4. Numero de Pontos turísticos\n");
    if (primeiroAtributo != 5)
        printf("5. Densidade Demográfica\n");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Os atributos precisam ser diferentes.\n");
    }
    else
    {
        float a1 = 0, a2 = 0, b1 = 0, b2 = 0;
        char atributo1[40], atributo2[40];

        // Primeiro atributo
        switch (primeiroAtributo)
        {
        case 1:
            strcpy(atributo1, "População");
            a1 = populacao1;
            b1 = populacao2;
            break;
        case 2:
            strcpy(atributo1, "Área em km²");
            a1 = areaEmKm1;
            b1 = areaEmKm2;
            break;
        case 3:
            strcpy(atributo1, "PIB");
            a1 = pib1;
            b1 = pib2;
            break;
        case 4:
            strcpy(atributo1, "Número de Pontos Turísticos");
            a1 = numeroDePontosTuristicos1;
            b1 = numeroDePontosTuristicos2;
            break;
        case 5:
            strcpy(atributo1, "Densidade Demográfica");
            a1 = densidadePopulacional1;
            b1 = densidadePopulacional2;
            break;
        default:
            printf("Número inválido!\n");
            return 0;
        }

        // Segundo atributo
        switch (segundoAtributo)
        {
        case 1:
            strcpy(atributo2, "População");
            a2 = populacao1;
            b2 = populacao2;
            break;
        case 2:
            strcpy(atributo2, "Área em km²");
            a2 = areaEmKm1;
            b2 = areaEmKm2;
            break;
        case 3:
            strcpy(atributo2, "PIB");
            a2 = pib1;
            b2 = pib2;
            break;
        case 4:
            strcpy(atributo2, "Número de Pontos Turísticos");
            a2 = numeroDePontosTuristicos1;
            b2 = numeroDePontosTuristicos2;
            break;
        case 5:
            strcpy(atributo2, "Densidade Demográfica");
            a2 = densidadePopulacional1;
            b2 = densidadePopulacional2;
            break;
        default:
            printf("Número inválido!\n");
            return 0;
        }

        // Comparação individual
        printf("\n===== RESULTADO =====\n");
        printf("Países: %s x %s\n", pais1, pais2);

        // Regra especial para densidade (menor vence)
        if (primeiroAtributo == 5)
            (a1 < b1)   ? printf("No atributo %s, a vencedora é a Carta 1\n", atributo1)
            : (a1 > b1) ? printf("No atributo %s, a vencedora é a Carta 2\n", atributo1)
                        : printf("Empate no atributo %s\n", atributo1);
        else
            (a1 > b1)   ? printf("No atributo %s, a vencedora é a Carta 1\n", atributo1)
            : (a1 < b1) ? printf("No atributo %s, a vencedora é a Carta 2\n", atributo1)
                        : printf("Empate no atributo %s\n", atributo1);

        if (segundoAtributo == 5)
            (a2 < b2)   ? printf("No atributo %s, a vencedora é a Carta 1\n", atributo2)
            : (a2 > b2) ? printf("No atributo %s, a vencedora é a Carta 2\n", atributo2)
                        : printf("Empate no atributo %s\n", atributo2);
        else
            (a2 > b2)   ? printf("No atributo %s, a vencedora é a Carta 1\n", atributo2)
            : (a2 < b2) ? printf("No atributo %s, a vencedora é a Carta 2\n", atributo2)
                        : printf("Empate no atributo %s\n", atributo2);

        // Soma final
        float soma1 = a1 + a2;
        float soma2 = b1 + b2;

        printf("\nSoma dos atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);

        // Resultado final
        (soma1 > soma2)   ? printf("\n Carta 1 venceu com %.2f pontos!\n", soma1)
        : (soma1 < soma2) ? printf("\n Carta 2 venceu com %.2f pontos!\n", soma2)
                          : printf("\n Empate!\n");
    }

    return 0;
}
