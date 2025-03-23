#include <stdio.h>

int main () {

    char letra_estado; //letra de A a H
    char codigo_carta [10]; //número de 01 a 08 (Ex.: A01, C05)
    char nome_cidade1 [30], nome_cidade2 [30];
    unsigned long int populacao_cidade1, populacao_cidade2; //número de habitantes
    float area_cidade1, area_cidade2; //em km2
    float PIB_cidade1, PIB_cidade2; // em bilhões de reais
    int nr_pontos_turisticos1, nr_pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2; // em habitantes por km2
    float PIB_per_capita1, PIB_per_capita2; // em reais por pessoa
    float Super_Poder1, Super_Poder2; // calcula o poder da carta
    int maior_valor;
    int dado_escolhido;
    int atributo1, resultado1;
    int atributo2, resultado2;
    float soma_atributos1, soma_atributos2;

    char confirmacao[5]; //Variável para o jogador confirmar os dados da carta 1 e voltar ao começo para corrigir, se necessário.

    printf("\nBem vindo ao Super Trunfo Cidades Brasileiras!\n");
    printf("Vamos começar.\n");

    /*Carta 1*/

    printf("\nDigite a letra correspondente ao estado da carta 1 (A, B,..., H.): ");
    scanf(" %c", &letra_estado);

    printf("\nMuito bem.\n");
    printf("Agora digite o código da carta (01, 02,..., 08): ");
    scanf(" %s", &codigo_carta);

    printf("\nOs dados seguintes são relativos a informações sobre a cidade.\n\n");

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade1);

    printf("\nDigite a população da cidade (quantidade de habitantes)\n");
    scanf("%lu", &populacao_cidade1);

    printf("\nDigite a área da cidade (em km2)\n");
    scanf("%f", &area_cidade1);

    printf("\nDigite o PIB - Produto interno Bruto - da cidade (em bilhões de reais):\n");
    scanf("%f", &PIB_cidade1);
    
    printf("\nDigite o número de pontos turísticos na cidade:\n");
    scanf("%i", &nr_pontos_turisticos1);

    densidade_populacional1 = (float) populacao_cidade1 / area_cidade1;
    PIB_per_capita1 = (float) PIB_cidade1 / populacao_cidade1;

    printf("\nConfira os dados da Carta 1: \n\n");

    /*
    Os dados têm que sair nesse formato:
    Carta 1
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
    */

    printf("Carta 1 \n");
    printf("Estado: %c\n", letra_estado);
    printf("Código: %c%s\n", letra_estado, codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População Absoluta: %lu habitantes\n", populacao_cidade1);
    printf("Área da cidade: %.2f km2\n", area_cidade1);
    printf("PIB: R$ %.2f bilhões de reais\n", PIB_cidade1);
    printf("Número de pontos turísticos: %i\n", nr_pontos_turisticos1);
    printf("Densidade populacional: %.2f habitantes por km2", densidade_populacional1);
    printf("\nPIB per capita: R$ %.2f reais por pessoa", PIB_per_capita1);

    Super_Poder1 = populacao_cidade1 + area_cidade1 + PIB_cidade1 + nr_pontos_turisticos1 + (1/densidade_populacional1) + PIB_per_capita1;

    printf("\n\nOs dados conferem? (S ou N)\n");
    printf("Se S, prossiga para a carta 2. Se não, reinicie o jogo e corrija os dados errados.\n");
    printf("S ou N: ");
    scanf(" %s", &confirmacao);

    /*Carta 2*/

    printf("\nÓtimo! Agora vamos para a carta 2.\n");
    
    printf("\nDigite a letra correspondente ao estado da carta 2 (A, B,..., H.): ");
    scanf(" %c", &letra_estado);

    printf("\nMuito bem.\n");
    printf("Agora digite o código da carta (01, 02,..., 08): ");
    scanf(" %s", &codigo_carta);

    printf("\nOs dados seguintes são relativos a informações sobre a cidade.\n\n");

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nome_cidade2);

    printf("\nDigite a população da cidade (quantidade de habitantes):\n");
    scanf("%lu", &populacao_cidade2);

    printf("\nDigite a área da cidade (em km2):\n");
    scanf("%f", &area_cidade2);

    printf("\nDigite o PIB - Produto interno Bruto - da cidade (em bilhões de reais):\n");
    scanf("%f", &PIB_cidade2);

    printf("\nDigite o número de pontos turísticos na cidade:\n");
    scanf("%i", &nr_pontos_turisticos2);

    densidade_populacional2 = (float) populacao_cidade2 / area_cidade2;
    PIB_per_capita2 = (float) PIB_cidade2 / populacao_cidade2;

    printf("\nConfira os dados da Carta 2: \n\n");

    printf("Carta 2 \n");
    printf("Estado: %c\n", letra_estado);
    printf("Código: %c%s\n", letra_estado, codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População Absoluta: %lu habitantes\n", populacao_cidade2);
    printf("Área da cidade: %.2f km2\n", area_cidade2);
    printf("PIB: R$ %.2f bilhões de reais\n", PIB_cidade2);
    printf("Número de pontos turísticos: %i\n", nr_pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km2", densidade_populacional2);
    printf("\nPIB per capita: R$ %.2f reais por pessoa", PIB_per_capita2);

    Super_Poder2 = populacao_cidade2 + area_cidade2 + PIB_cidade2 + nr_pontos_turisticos2 + (1/densidade_populacional2) + PIB_per_capita2;

    /*
    Os dados têm que sair nesse formato:
    Carta 2
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30 */

    printf("\n\nOs dados conferem? (S ou N)\n");
    printf("Se S, prossiga. Se não, reinicie o jogo e corrija o que está errado.\n");
    printf("S ou N: ");
    scanf(" %s", &confirmacao);

    printf("\nExcelente!\n");
    printf("Vamos agora comparar os atributos\n");

    printf("\nEscolha o atributo 1: \n");
    printf("\n1. População Absoluta\n");
    printf("2. Área da cidade\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    scanf("%d", &atributo1);

    switch (atributo1) {
    case 1:

        printf("\nPopulação\n");
        printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
        printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

        resultado1 = populacao_cidade1 > populacao_cidade2 ? 1 : 0;

        break;

    case 2:

        printf("\nÁrea\n");
        printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
        printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

        resultado1 = area_cidade1 > area_cidade2 ? 1 : 0;

        break;

    case 3:

        printf("\nPIB\n");
        printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
        printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

        resultado1 = PIB_cidade1 > PIB_cidade2 ? 1 : 0;
        
        break;
        
    case 4:

        printf("\nNúmero de pontos turísticos\n");
        printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
        printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

        resultado1 = nr_pontos_turisticos1 > nr_pontos_turisticos2 ? 1 : 0;

        break;

    case 5:

        printf("\nDensidade populacional\n");
        printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
        printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

        resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;

        break;

    case 6:

        printf("\nPIB per capita\n");
        printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
        printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

        resultado1 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;

        break;   

    case 7:

        printf("\nSuper poder\n");
        printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
        printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

        resultado1 = Super_Poder1 > Super_Poder2 ? 1 : 0;

        break;   

    default:
        printf("\nOpção inválida\n");
        break;
    }
    
    
    printf("\n\nAgora escolha o atributo 2: \n");
    printf("\n1. População Absoluta\n");
    printf("2. Área da cidade\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    scanf("%d", &atributo2);
    
    if (atributo1 == atributo2) {
        printf("\nVocê escolheu o mesmo atributo. Recomece o jogo.\n");
    } else {
        switch (atributo2) {
        case 1:
    
            printf("\nPopulação\n");
            printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
            printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);
    
            resultado2 = populacao_cidade1 > populacao_cidade2 ? 1 : 0;
    
            break;
    
        case 2:
    
            printf("\nÁrea\n");
            printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
            printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);
    
            resultado2 = area_cidade1 > area_cidade2 ? 1 : 0;
    
            break;
    
        case 3:
    
            printf("\nPIB\n");
            printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
            printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);
    
            resultado2 = PIB_cidade1 > PIB_cidade2 ? 1 : 0;
    
            break;
            
        case 4:
    
            printf("\nNúmero de pontos turísticos\n");
            printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
            printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);
    
            resultado2 = nr_pontos_turisticos1 > nr_pontos_turisticos2 ? 1 : 0;
    
            break;
    
        case 5:
    
            printf("\nDensidade populacional\n");
            printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
            printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);
    
            resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
    
            break;
    
        case 6:
    
            printf("\nPIB per capita\n");
            printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
            printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);
    
            resultado2 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
    
            break;   
    
        case 7:
    
            printf("\nSuper poder\n");
            printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
            printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);
    
            resultado2 = Super_Poder1 > Super_Poder2 ? 1 : 0;
    
            break;   
    
        default:
            printf("\nOpção inválida\n");
            break;
        }
    
    printf("\nVeja agora o resultado do jogo: \n");
    
    if (resultado1 && resultado2) {           

        if (atributo1 == 1) {
            printf("\n1º atributo escolhido: População\n");
            printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
            printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

            resultado1 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }                
                
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }

        } else if (atributo1 == 2) {
            printf("\n2º atributo escolhido: Área\n");
            printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
            printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n1º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 3) {
            printf("\n1º atributo escolhido: PIB\n");
            printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
            printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
                        
        } else if (atributo1 == 4) {
            printf("\n1º atributo escolhido: Número de pontos turísticos\n");
            printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
            printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              ;
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 5) {
            printf("\n1º atributo escolhido: Densidade populacional\n");
            printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
            printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              

            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 6) {
            printf("\n1º atributo escolhido: PIB per capita\n");
            printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
            printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              

            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 7) {
            printf("\n1º atributo escolhido: Super poder\n");
            printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
            printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              

            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
        }

        



        
    } else if (resultado1 != resultado2) {

      
        if (atributo1 == 1) {
            printf("\n1º atributo escolhido: População\n");
            printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
            printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

            resultado1 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }                
                
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }

        } else if (atributo1 == 2) {
            printf("\n2º atributo escolhido: Área\n");
            printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
            printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n1º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 3) {
            printf("\n1º atributo escolhido: PIB\n");
            printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
            printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
                        
        } else if (atributo1 == 4) {
            printf("\n1º atributo escolhido: Número de pontos turísticos\n");
            printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
            printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              ;
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 5) {
            printf("\n1º atributo escolhido: Densidade populacional\n");
            printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
            printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              

            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 6) {
            printf("\n1º atributo escolhido: PIB per capita\n");
            printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
            printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              

            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 7) {
            printf("\n1º atributo escolhido: Super poder\n");
            printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
            printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              

            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
        }

        printf ("\nResultado: Houve um empate!\n\n");





    } else {
       
        if (atributo1 == 1) {
            printf("\n1º atributo escolhido: População\n");
            printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
            printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

            resultado1 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }                
                
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }

        } else if (atributo1 == 2) {
            printf("\n2º atributo escolhido: Área\n");
            printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
            printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n1º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 3) {
            printf("\n1º atributo escolhido: PIB\n");
            printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
            printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
                        
        } else if (atributo1 == 4) {
            printf("\n1º atributo escolhido: Número de pontos turísticos\n");
            printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
            printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              ;
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 5) {
            printf("\n1º atributo escolhido: Densidade populacional\n");
            printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
            printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              

            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 6) {
            printf("\n1º atributo escolhido: PIB per capita\n");
            printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
            printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              

            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            } else if (atributo2 == 7) {
                printf("\n2º atributo escolhido: Super poder\n");
                printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
                printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
            
        } else if (atributo1 == 7) {
            printf("\n1º atributo escolhido: Super poder\n");
            printf ("Carta 1 - %s: %.2f\n", nome_cidade1, Super_Poder1);
            printf ("Carta 2 - %s: %.2f\n", nome_cidade2, Super_Poder2);

            resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

            if (atributo2 == 1) {
                printf("\n2º atributo escolhido: População\n");
                printf ("Carta 1 - %s: %lu habitantes\n", nome_cidade1, populacao_cidade1);
                printf ("Carta 2 - %s: %lu habitantes\n", nome_cidade2, populacao_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 2) {
                printf("\n2º atributo escolhido: Área\n");
                printf ("Carta 1 - %s: %.2f km2\n", nome_cidade1, area_cidade1);
                printf ("Carta 2 - %s: %.2f km2\n", nome_cidade2, area_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                
                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);
                
                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 3) {
                printf("\n2º atributo escolhido: PIB\n");
                printf ("Carta 1 - %s: R$ %.2f bilhões de reais\n", nome_cidade1, PIB_cidade1);
                printf ("Carta 2 - %s: R$ %.2f bilhões de reais\n", nome_cidade2, PIB_cidade2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                            
            } else if (atributo2 == 4) {
                printf("\n2º atributo escolhido: Número de pontos turísticos\n");
                printf ("Carta 1 - %s: %d\n", nome_cidade1, nr_pontos_turisticos1);
                printf ("Carta 2 - %s: %d\n", nome_cidade2, nr_pontos_turisticos2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              

            } else if (atributo2 == 5) {
                printf("\n2º atributo escolhido: Densidade populacional\n");
                printf ("Carta 1 - %s: %.2f habitantes por km2\n", nome_cidade1, densidade_populacional1);
                printf ("Carta 2 - %s: %.2f habitantes por km2\n", nome_cidade2, densidade_populacional2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
                
            } else if (atributo2 == 6) {
                printf("\n2º atributo escolhido: PIB per capita\n");
                printf ("Carta 1 - %s: R$ %.2f reais por pessoa\n", nome_cidade1, PIB_per_capita1);
                printf ("Carta 2 - %s: R$ %.2f reais por pessoa\n", nome_cidade2, PIB_per_capita2);

                resultado2 ? printf ("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1) : printf ("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);

                soma_atributos1 = (float) populacao_cidade1 + area_cidade1;
                soma_atributos2 = (float) populacao_cidade2 + area_cidade2;
                printf("A soma dos atributos da carta 1: %.2f\n", soma_atributos1);
                printf("A soma dos atributos da carta 2: %.2f\n", soma_atributos2);

                if (soma_atributos1 > soma_atributos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n\n", nome_cidade1);
                } else if (soma_atributos1 == soma_atributos2) {
                    printf("\nResultado: Houve um empate!\n\n");
                } else {
                    printf("\nResultado: Carta 2 (%s) venceu!\n\n", nome_cidade2);
                }              
            }
        }
    }
    }
    printf("\n *** Fim do jogo *** \n\n");
    }  