
#include <stdio.h>


int main()
{
    char estado[50], codCarta[04], nomeCidade[50], estado2[50], codCarta2[04], nomeCidade2[50];
    int habitante, habitante2;
    int pontoTuristico, pontoTuristico2; 
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

    printf(" ****  Comparacao de Cartas (Atributo: Habitantes ) ****\n");                    //Comparações
    printf("Carta 1: %s : %d \n", nomeCidade, habitante);
    printf("Carta 2: %s : %d \n", nomeCidade2, habitante2);
    if (habitante > habitante2){
        printf("Carta 1 (%s) venceu!\n", nomeCidade);   
    } else {
        printf("Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    
    
    return 0;
    
}
