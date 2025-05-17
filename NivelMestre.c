#include <stdio.h>


int main()
{
    char estado[50], codCarta[04], nomeCidade[50] = "Sao Paulo", estado2[50], codCarta2[04], nomeCidade2[50] =  "Rio de Janeiro";
    int habitante = 10000, habitante2 = 10000, pontoTuristico = 10, pontoTuristico2 = 15 , opcao, opcao2, resultado1, resultado2; 
    float area = 250.000, pib = 396.78, area2 = 49.000, pib2 = 250.83, densidadePopulacional, densidadePopulacional2, pibCapta, pibCapta2, superPoder1, superPoder2; 
    


    /*printf("Vamos comecar cadastrando as nossas cartas de SUPER TRUNFO!\n");                    //Registro de dados pelo usuario da carta 1
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
    scanf("%d", &pontoTuristico); */

    densidadePopulacional = (habitante / area);
    pibCapta = (pib / habitante);
    superPoder1 = ((habitante + area + pib + pontoTuristico) - densidadePopulacional);

    /*printf("\nInsira os dados da segunda carta: \n");                                        //Registro de dados pelo usuario da carta 2
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
    scanf("%d", &pontoTuristico2);  */

    densidadePopulacional2 = (habitante2 / area2);
    pibCapta2 = (pib2 / habitante2);
    superPoder2 = ((habitante2 + area2 + pib2 + pontoTuristico2 ) - densidadePopulacional2);

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
            printf("Voce escolheu como opcao 1 - Populacao\n");
            resultado1 =  habitante > habitante2 ? 1:0;                                                                                   
            break;
        case 2:
            printf("Voce escolheu como opcao 1 - Area\n");
            resultado1 =  area > area2 ? 1:0;                                                                                  
            break;
        case 3:
            printf("Voce escolheu como opcao 1 - PIB\n");
            resultado1 =  pib > pib2 ? 1:0;                                                                                   
            break;
        case 4:
            printf("Voce escolheu como opcao 1 - Ponto Turistico\n");
            resultado1 =  pontoTuristico > pontoTuristico2 ? 1:0;                                                                                   
            break;
        case 5:
            printf("Voce escolheu como opcao 1 - Densidade Populacional\n");
            resultado1 =  densidadePopulacional < densidadePopulacional2 ? 1:0;                                                                                   
            break;   
        default:
            printf("Opcao Invalida");
    }  

    printf("\n Selecione agora o segundo item que voce gostaria de comparar informando de 1 a 5:  \n");   //O Usuario informa o segundo item que ele quer comparar
    printf(" Populacao: 1\n");
    printf(" Area: 2\n");
    printf(" PIB: 3\n");
    printf(" Numero de Pontos Turisticos: 4\n");
    printf(" Densidade Demografica: 5\n");
    scanf("%d", &opcao2);
    
    if (opcao == opcao2){                                                                                   //caso ele tenha selecionado o mesmo item
        printf("VOCE SELECIONOU O MESMO ITEM, FAVOR SELECIONAR UM DIFERENTE\n");
    } else {
        switch (opcao2) {                                                                                               // se estiver tudo ok, passa para a comparação, onde vai dizer qual item venceu
        case 1:
            printf("Voce escolheu como opcao 2 - Populacao\n");
            resultado2 =  habitante > habitante2 ? 1:0;                                                                                   
            break;
        case 2:
            printf("Voce escolheu como opcao 2 - Area\n");
            resultado2 =  area > area2 ? 1:0;                                                                                   
            break;
        case 3:
            printf("Voce escolheu como opcao 2 - PIB\n");
            resultado2 =  pib > pib2 ? 1:0;                                                                                  
            break;
        case 4:
            printf("Voce escolheu como opcao 2 - Ponto Turistico\n");
            resultado2 =  pontoTuristico > pontoTuristico2 ? 1:0;                                                                                   
            break;
        case 5:
            printf("Voce escolheu como opcao 2 - Densidade Populacional\n");
            resultado2 =  densidadePopulacional < densidadePopulacional2 ? 1:0;                                                                                   
            break;   
        default:
            printf("Opcao Invalida");
        }
    }

    printf("\nCidade 1 %s e Cidade 2 %s\n", nomeCidade, nomeCidade2);
    printf("Atributos selecionado: \n");

    switch (opcao){                                                                                             //printando na tela o item comparado + o valor registrado no sistema
        case 1:
            printf("Populacao com valor 1: %d e Valor 2: %d e", habitante, habitante2);
            break;
        case 2:
            printf("Area em Km2com valor 1: %.2f e Valor 2: %.2f e", area, area2);
            break;
        case 3:
            printf("Pib com valor 1: %.2f  e Valor 2: %.2f e", pib, pib2);
            break;
        case 4:
            printf("Ponto Turistico com valor 1: %d e Valor 2 : %d e", pontoTuristico, pontoTuristico2);
            break;
        case 5:
            printf("Densidade Populacional com valor 1: %.2f  e Valor 2 : %.2f e", densidadePopulacional, densidadePopulacional2);
            break;
    }

    switch (opcao2){
        case 1:
            printf(" Populacao com valor 1: %d e Valor 2 : %d \n", habitante, habitante2);
            break;
        case 2:
            printf(" Area em Km2 com valor 1: %.2f  e Valor 2 : %.2f \n", area, area2);
            break;
        case 3:
            printf(" Pib com valor 1: %.2f  e Valor 2 : %.2f \n", pib, pib2);
            break;
        case 4:
            printf(" Ponto Turistico com valor 1: %d , e Valor 2 : %d", pontoTuristico, pontoTuristico2);
            break;
        case 5:
            printf(" Densidade Populacional com valor 1: %.2f  e Valor 2 : %.2f ", densidadePopulacional, densidadePopulacional2);
            break;
    }

    printf("\nSoma dos atributos da carta 1: %.2f \n", superPoder1);                //print da soma de todos os atributos da carta menos a densidade populacional
    printf("Soma dos atributos da carta 2: %.2f \n", superPoder2);  

     if (resultado1 == resultado2) {                                                       //print da comparação efetuada das linhas 64 a 120 (Switch / case)
        if(resultado1 == 1){
            printf("Carta 1 venceu \n");
        } else if (resultado1 == 0) {
                printf("Carta 2 venceu \n");
            }
        } else {
            printf("Empatou!");
        }

    return 0;
    
}

