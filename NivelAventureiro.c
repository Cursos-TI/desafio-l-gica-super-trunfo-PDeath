#include <stdio.h>


int main()
{
    char estado[50], codCarta[04], nomeCidade[50], estado2[50], codCarta2[04], nomeCidade2[50];
    int habitante, habitante2, pontoTuristico, pontoTuristico2, opcao; 
    float area, pib, area2, pib2, densidadePopulacional, densidadePopulacional2, pibCapta, pibCapta2, superPoder1, superPoder2; 
    


    printf("Vamos comecar cadastrando as nossas cartas de SUPER TRUNFO!\n");                    //Registro de dados pelo usuario da carta 1
    printf("Insira os dados da primeira carta: \n");
    printf("Insira o Estado da sua carta (Informe uma letra entre A e H): \n");
    scanf("%s", estado);
    printf("Insira o Codigo da sua carta de contendo a letra do Estado + um numero entre 01 e 04: \n");
    scanf("%s", codCarta);
    printf("Insira o Nome da Cidade: \n");
    scanf("%s", nomeCidade);
    printf("Insira o Numero de Habitantes: \n");
    scanf("%d", &habitante);
    printf("Insira a area da cidade: \n");
    scanf("%f", &area);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Insira a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d", &pontoTuristico); 

    densidadePopulacional = (habitante / area);
    pibCapta = (pib / habitante);
    superPoder1 = ((habitante + area + pib + pontoTuristico + pibCapta) - densidadePopulacional);

    printf("\nInsira os dados da segunda carta: \n");                                        //Registro de dados pelo usuario da carta 2
    printf("\nInsira o Estado da sua carta (Informe uma letra entre A e H): \n");
    scanf("%s", estado2);
    printf("Insira o Codigo da sua carta de contendo a letra do Estado + um numero entre 01 e 04: \n");
    scanf("%s", codCarta2);
    printf("Insira o Nome da Cidade: \n");
    scanf("%s", nomeCidade2);
    printf("Insira o Numero de Habitantes: \n");
    scanf("%d", &habitante2);
    printf("Insira a area da cidade: \n");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Insira a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d", &pontoTuristico2);  

    densidadePopulacional2 = (habitante2 / area2);
    pibCapta2 = (pib2 / habitante2);
    superPoder2 = ((habitante2 + area2 + pib2 + pontoTuristico2 + pibCapta2) - densidadePopulacional2);

    printf("\n ****  Comparacao de Cartas ****\n");
    printf("\n Selecione qual item voce gostaria de comparar informando de 1 a 5:  \n");
    printf(" Populacao: 1\n");
    printf(" Area: 2\n");
    printf(" PIB: 3\n");
    printf(" Numero de Pontos Turisticos: 4\n");
    printf(" Densidade Demografica: 5\n");
    scanf("%d", &opcao);                                 //O Usuario informa qual opção ele quer comparar 

    switch (opcao) {
        case 1:
            if (habitante > habitante2) {                                                                                                                  
                printf(" Carta 1: %s  ||  Habitantes  ||  Numero de Habitante: %d \n", nomeCidade, habitante);                              
                printf(" Carta 2: %s  ||  Habitantes  ||  Numero de Habitante: %d \n", nomeCidade2, habitante2);
                printf(" A Carta 1 Venceu!");
            } else if( habitante < habitante2) {
                printf(" Carta 1: %s  ||  Habitantes  ||  Numero de Habitante: %d \n", nomeCidade, habitante);
                printf(" Carta 2: %s  ||  Habitantes  ||  Numero de Habitante: %d \n", nomeCidade2, habitante2);
                printf(" A Carta 2 Venceu!");
            } else {
                printf(" Carta 1: %s  ||  Habitantes  ||  Numero de Habitante: %d \n", nomeCidade, habitante);
                printf(" Carta 2: %s  ||  Habitantes  ||  Numero de Habitante: %d \n", nomeCidade2, habitante2);
                printf("Houve um empate!\n");
            } break;
        case 2:
            if (area > area2) {
                printf(" Carta 1: %s  ||  Area  ||  Area do Pais: %.2f \n", nomeCidade, area);
                printf(" Carta 2: %s  ||  Area  ||  Area do Pais: %.2f \n", nomeCidade2, area2);
                printf(" A Carta 1 Venceu!");
            } else if( area < area2) {
                printf(" Carta 1: %s  ||  Area  ||  Area do Pais: %.2f \n", nomeCidade, area);
                printf(" Carta 2: %s  ||  Area  ||  Area do Pais: %.2f \n", nomeCidade2, area2);
                printf(" A Carta 2 Venceu!");
            } else {
                printf(" Carta 1: %s  ||  Area  ||  Area do Pais: %.2f \n", nomeCidade, area);
                printf(" Carta 2: %s  ||  Area  ||  Area do Pais: %.2f \n", nomeCidade2, area2);
                printf("Houve um empate!\n");
            }break;
        case 3:
            if (pib > pib2) {
                printf(" Carta 1: %s  ||  PIB  ||  PIB do Pais: %.2f \n", nomeCidade, pib);
                printf(" Carta 2: %s  ||  PIB  ||  PIB do Pais: %.2f \n", nomeCidade2, pib2);
                printf(" A Carta 1 Venceu!");
            } else if( pib < pib2) {
                printf(" Carta 1: %s  ||  PIB  ||  PIB do Pais: %.2f \n", nomeCidade, pib);
                printf(" Carta 2: %s  ||  PIB  ||  PIB do Pais: %.2f \n", nomeCidade2, pib2);
                printf(" A Carta 2 Venceu!");
            } else {
                printf(" Carta 1: %s  ||  PIB  ||  PIB do Pais: %.2f \n", nomeCidade, pib);
                printf(" Carta 2: %s  ||  PIB  ||  PIB do Pais: %.2f \n", nomeCidade2, pib2);
                printf("Houve um empate!\n");
            }break;
        case 4:
            if (pontoTuristico > pontoTuristico2) {
                printf(" Carta 1: %s  ||  Pontos Turisticos  ||  Numero de Pontos Turisticos: %d \n", nomeCidade, pontoTuristico);
                printf(" Carta 2: %s  ||  Pontos Turisticos  ||  Numero de Pontos Turisticos: %d \n", nomeCidade2, pontoTuristico2);
                printf(" A Carta 1 Venceu!");
            } else if( pontoTuristico < habitante2) {
                printf(" Carta 1: %s  ||  Pontos Turisticos  ||  Numero de Pontos Turisticos: %d \n", nomeCidade, pontoTuristico);
                printf(" Carta 2: %s  ||  Pontos Turisticos  ||  Numero de Pontos Turisticos: %d \n", nomeCidade2, pontoTuristico2);
                printf(" A Carta 2 Venceu!");
            } else {
                printf(" Carta 1: %s  ||  Pontos Turisticos  ||  Numero de Pontos Turisticos: %d \n", nomeCidade, pontoTuristico);
                printf(" Carta 2: %s  ||  Pontos Turisticos  ||  Numero de Pontos Turisticos: %d \n", nomeCidade2, pontoTuristico2);
                printf("Houve um empate!\n"); 
            } break;
        case 5:                                                                                                             //Conforme regras do nivel aventureiro, ganha quem tem a menor densidade populacional
            if (densidadePopulacional < densidadePopulacional2) {
                printf(" Carta 1: %s  ||  Densidade Demografica  ||   Densidade Demografica: %.2f \n", nomeCidade, densidadePopulacional);
                printf(" Carta 2: %s  ||  Densidade Demografica  ||   Densidade Demografica: %.2f \n", nomeCidade2, densidadePopulacional2);
                printf(" A Carta 1 Venceu!");
            } else if( densidadePopulacional > densidadePopulacional2) {
                printf(" Carta 1: %s  ||  Densidade Demografica  ||   Densidade Demografica: %.2f \n", nomeCidade, densidadePopulacional);
                printf(" Carta 2: %s  ||  Densidade Demografica  ||   Densidade Demografica: %.2f \n", nomeCidade2, densidadePopulacional2);
                printf(" A Carta 2 Venceu!");
            } else {
                printf(" Carta 1: %s  ||  Densidade Demografica  ||   Densidade Demografica: %.2f \n", nomeCidade, densidadePopulacional);
                printf(" Carta 2: %s  ||  Densidade Demografica  ||   Densidade Demografica: %.2f \n", nomeCidade2, densidadePopulacional2);
                printf("Houve um empate!\n"); 
            } break;
        default:
            printf("Opcao Invalida");
    }  
    
    return 0;
    
}
