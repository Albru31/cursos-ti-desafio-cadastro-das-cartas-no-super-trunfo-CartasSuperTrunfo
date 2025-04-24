#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    /*Parte inicial do programa, onde sao declaradas todas as variaveis 
    (tipo nome_da_variavel[N]) N=Numero de caracteres quando string*/
    char estado01[60] = "A";
    char estado02[60] = "B"; 
    char codigo01[5] = "A01";
    char codigo02[5] = "B01";
    char cidade01[60] = "a";
    char cidade02[60] = "b";
    int populacao01 = 0, populacao02 = 0;
    float area01 = 0, area02 = 0;
    float densidade01 = 0, densidade02 = 0;
    float pib01 = 0, pib02 = 0;   
    float renda01 = 0, renda02 = 0;    
    int pTuristicos01 = 0, pTuristicos02 = 0;
    
    /* printf - escreve no terminal
    scanf - salva o que foi escrito no terminal na variavel
    \n - pula linha no terminal
    %s - string
    %d - inteiro
    %f - flutuante - que possui casas decimais    
    = - iguala as variaveis
    / - divide as variaveis  */

    printf("Insira as informaçoes da primeira carta - \n"); //Solicita no terminal as informaçoes da carta 01.
    printf("Estado: ");
    scanf("%s", &estado01); 
    printf("Código: ");
    scanf("%s", &codigo01);
    printf("Cidade: ");
    scanf("%s", &cidade01);
    printf("Populaçao: ");
    scanf("%d", &populacao01);
    printf("Área: ");
    scanf("%f", &area01);
    densidade01 = populacao01 / area01;  // Dividindo a populaçao pela area se obtem a densidade populacional.
    printf("PIB: ");
    scanf("%f", &pib01);
    renda01 = populacao01 / area01;  // Dividindo o PIB pela populaçao se obtem a renda percapta.
    printf("Número de pontos turisticos: ");
    scanf("%d", &pTuristicos01);


    printf("\n");
    printf("Insira as informaçoes da segunda carta - \n"); //Solicita no terminal as informaçoes da carta 2.
    printf("Estado: ");
    scanf("%s", &estado02);
    printf("Código: ");
    scanf("%s", &codigo02);
    printf("Cidade: ");
    scanf("%s", &cidade02);
    printf("Populaçao: ");
    scanf("%d", &populacao02);
    printf("Área: ");
    scanf("%f", &area02);
    densidade02 = populacao02 / area02;  // Dividindo a populaçao pela area se obtem a densidade populacional.
    printf("PIB: ");
    scanf("%f", &pib02);
    renda02 = populacao02 / pib02;  // Dividindo o PIB pela populaçao se obtem a renda percapta.
    printf("Número de pontos turisticos: ");
    scanf("%d", &pTuristicos02);

    /*Escreve no terminal todas as informçoes salvas nas variaveis referente a carta 01*/
    printf("\n");
    printf("**** Suas Cartas sao ****\n");
    printf("\n");
    printf("Carta 01\n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %d habitantes\n", populacao01);
    printf("Área: %.2f km²\n", area01); // %.2f - O ".2" define o numero de casas decimais de escrita
    printf("Densidade Populacional: %.2f hab/km²\n", densidade01);
    printf("PIB: %.2f bilhoes de reais\n", pib01);
    printf("Renda Percapta: R$ %.2f\n", renda01);
    printf("Número de Pontos Turísticos: %d\n", pTuristicos01);
    printf("\n");

    /*Escreve no terminal todas as informaçoes salvas nas variaveis referente a carta 02*/
    printf("\n");
    printf("Carta 02 \n");
    printf("Estado: %s \n", estado02);
    printf("Código: %s \n", codigo02);
    printf("Cidade: %s \n", cidade02);
    printf("População: %d habitantes\n", populacao02);
    printf("Área: %.2f km² \n", area02); // %.2f - O ".2" define o numero de casas decimais de escrita
    printf("Densidade Populacional: %.2f hab/km²\n", densidade02);
    printf("PIB: %.2f bilhoes de reais\n", pib02);
    printf("Renda Percapta: R$ %.2f\n", renda02);
    printf("Número de pontos turísticos: %d \n", pTuristicos02);

    return 0;
}
