#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    // Parte inicial do programa, onde sao declaradas todas as variaveis
    // (tipo nome_da_variavel[N]) N=Numero de caracteres quando string
    char estado01[30];
    char estado02[30]; 
    char codigo01[4];
    char codigo02[4];
    char cidade01[30];
    char cidade02[30];
    int populacao01 = 0, populacao02 = 0;
    float area01 = 0, area02 = 0;
    float densidade01 = 0, densidade02 = 0;
    float pib01 = 0, pib02 = 0;   
    double  renda01 = 0, renda02 = 0;    
    int pTuristicos01 = 0, pTuristicos02 = 0;
    float poder01;
    float poder02;
    int escolha01, escolha02;
    int final;
    int resultado01, resultado02;

    //Solicita no terminal as informaçoes da carta 01.
    printf("**** Cadastro de Cartas ****\n");
    printf("Insira as informaçoes da primeira carta - \n"); 
    printf("Estado : ");
    scanf("%s", &estado01); 
    printf("Código: ");
    scanf("%s", &codigo01);
    printf("Cidade: ");
    scanf("%s", &cidade01);
    printf("Populaçao: ");
    scanf("%d", &populacao01);
    printf("Área: ");
    scanf("%f", &area01);
    densidade01 = (float)populacao01 / area01;  // Dividindo a populaçao pela area se obtem a densidade populacional.
    printf("PIB (bilhoes): ");
    scanf("%f", &pib01);
    renda01 = (pib01 * 100000000) / (float)populacao01;  // Dividindo o PIB pela populaçao se obtem a renda percapta.
    printf("Número de pontos turisticos: ");
    scanf("%d", &pTuristicos01);

    //Solicita no terminal as informaçoes da carta 2.
    printf("\n");
    printf("Insira as informaçoes da segunda carta - \n"); 
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
    densidade02 = (float)populacao02 / area02;  // Dividindo a populaçao pela area se obtem a densidade populacional.
    printf("PIB (bilhoes): ");
    scanf("%f", &pib02);
    renda02 = (pib02 * 100000000) / (float)populacao02;  // Dividindo o PIB pela populaçao se obtem a renda percapta.
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
    printf("Renda Percapta: R$ %.2lf\n", renda01);
    printf("Número de Pontos Turísticos: %d\n", pTuristicos01);
    poder01 = (float)populacao01 + area01 + pib01 + renda01 + (float)pTuristicos01 + (1 / densidade01);
    printf("Poder: %.2f \n", poder01);
    printf("\n");

    //Escreve no terminal todas as informaçoes salvas nas variaveis referente a carta 02
    printf("\n");
    printf("Carta 02 \n");
    printf("Estado: %s \n", estado02);
    printf("Código: %s \n", codigo02);
    printf("Cidade: %s \n", cidade02);
    printf("População: %d habitantes\n", populacao02);
    printf("Área: %.2f km² \n", area02); // %.2f - O ".2" define o numero de casas decimais de escrita
    printf("Densidade Populacional: %.2f hab/km²\n", densidade02);
    printf("PIB: %.2f bilhoes de reais\n", pib02);
    printf("Renda Percapta: R$ %.2lf\n", renda02);
    printf("Número de pontos turísticos: %d \n", pTuristicos02);
    poder02 = (float)populacao02 + area02 + pib02 + renda02 + (float)pTuristicos02 + (1 / densidade02);
    printf("Poder: %.2f \n", poder02);
    printf("\n");


    // Abre para o jogador escolher o primeiro atributo para a batalha
    printf("### Batalha de Cartas ###\n");
    printf("Escolha o primeiro atributo para a batalha\n");
    printf("1- População, 2- Área, 3- PIB, 4- Renda Percapta, 5- Densidade, 6- Pontos Turísticos): \n");
    scanf("%d", &escolha01);
    printf("###  Primeira batalha  ###\n");

    // Comparaçao de cartas
    // A variavel resultado01 armazena o resultado da comparaçao entre os atributos escolhidos
    switch (escolha01)
    {
    case 1:     
        printf("Carta 01 - %s\n", estado01);
        printf("%d habitantes\n", populacao01);
        printf("Carta 02 - %s\n", estado02);
        printf("%d habitantes\n", populacao02);
        if (populacao01 == populacao02) {
            resultado01 = 0;
        } else { resultado01 = populacao01 > populacao02 ? 1 : -1; }
        break;
    case 2:
        printf("Carta 01 - %s\n", estado01);
        printf("%.2f km²\n", area01);
        printf("Carta 02 - %s\n", estado02);
        printf("%.2f km²\n", area02);
        if (area01 == area02) {
            resultado01 = 0;
        } else { resultado01 = area01 > area02 ? 1 : -1; }
        break;
    case 3:
        printf("Carta 01 - %s\n", estado01);
        printf("%.2f bilhoes de reais\n", pib01);
        printf("Carta 02 - %s\n", estado02);
        printf("%.2f bilhoes de reais\n", pib02);
        if (pib01 == pib02) {
            resultado01 = 0;
        } else { resultado01 = pib01 > pib02 ? 1 : -1; }
        break;
    case 4:
        printf("Carta 01 - %s\n", estado01);
        printf("R$ %.2lf\n", renda01);
        printf("Carta 02 - %s\n", estado02);
        printf("R$ %.2lf\n", renda02);
        if (renda01 == renda02) {
            resultado01 = 0;
        } else { resultado01 = renda01 > renda02 ? 1 : -1; }
        break;
    case 5:
        printf("Carta 01 - %s\n", estado01);
        printf("%.2f hab/km²\n", densidade01);
        printf("Carta 02 - %s\n", estado02);
        printf("%.2f hab/km²\n", densidade02);
        if (densidade01 == densidade02) {
            resultado01 = 0;
        } else { resultado01 = densidade01 < densidade02 ? 1 : -1; }
        break;
    case 6:
        printf("Carta 01 - %s\n", estado01);
        printf("%d pontos turisticos\n", pTuristicos01);
        printf("Carta 02 - %s\n", estado02);
        printf("%d pontos turisticos\n", pTuristicos02);
        if (pTuristicos01 == pTuristicos02) {
            resultado01 = 0;
        } else { resultado01 = pTuristicos01 > pTuristicos02 ? 1 : -1; }
        break;
    default:
        break;
    }

    // Abre para o jogador escolher o segundo atributo para a batalha
    printf("Escolha o segundo atributo para a batalha\n");
    switch (escolha01)
    {
    case 1:
        printf("2- Área, 3- PIB, 4- Renda Percapta, 5- Densidade, 6- Pontos Turísticos): \n");
        break;
    case 2:
        printf("1- População, 3- PIB, 4- Renda Percapta, 5- Densidade, 6- Pontos Turísticos): \n");
        break;
    case 3:
        printf("1- População, 2- Área, 4- Renda Percapta, 5- Densidade, 6- Pontos Turísticos): \n");
        break;
    case 4:
        printf("1- População, 2- Área, 3- PIB, 5- Densidade, 6- Pontos Turísticos): \n");
        break;
    case 5:
        printf("1- População, 2- Área, 3- PIB, 4- Renda Percapta, 6- Pontos Turísticos): \n");
        break;
    case 6:
        printf("1- População, 2- Área, 3- PIB, 4- Renda Percapta, 5- Densidade): \n");
        break; 
    default:
        break;
    }
    scanf("%d", &escolha02);
    
    // Verifica se o jogador escolheu o mesmo atributo
    if (escolha01 == escolha02) {
        while (escolha01 == escolha02) {
            printf("Escolha um atributo diferente do primeiro\n");
            scanf("%d", &escolha02);
        }   
    }

    // Comparaçao de cartas
    printf("###  Segunda batalha  ###\n");
    switch (escolha02)
    {
        case 1:     
            printf("Carta 01 - %s\n", estado01);
            printf("%d habitantes\n", populacao01);
            printf("Carta 02 - %s\n", estado02);
            printf("%d habitantes\n", populacao02);
            if (populacao01 == populacao02) {
                resultado02 = 0;
            } else { resultado02 = populacao01 > populacao02 ? 1 : -1; }
            break;
        case 2:
            printf("Carta 01 - %s\n", estado01);
            printf("%.2f km²\n", area01);
            printf("Carta 02 - %s\n", estado02);
            printf("%.2f km²\n", area02);
            if (area01 == area02) {
                resultado02 = 0;
            } else { resultado02 = area01 > area02 ? 1 : -1; }
            break;
        case 3:
            printf("Carta 01 - %s\n", estado01);
            printf("%.2f bilhoes de reais\n", pib01);
            printf("Carta 02 - %s\n", estado02);
            printf("%.2f bilhoes de reais\n", pib02);
            if (pib01 == pib02) {
                resultado02 = 0;
            } else { resultado02 = pib01 > pib02 ? 1 : -1; }
            break;
        case 4:
            printf("Carta 01 - %s\n", estado01);
            printf("R$ %.2lf\n", renda01);
            printf("Carta 02 - %s\n", estado02);
            printf("R$ %.2lf\n", renda02);
            if (renda01 == renda02) {
                resultado02 = 0;
            } else { resultado02 = renda01 > renda02 ? 1 : -1; }
            break;
        case 5:
            printf("Carta 01 - %s\n", estado01);
            printf("%.2f hab/km²\n", densidade01);
            printf("Carta 02 - %s\n", estado02);
            printf("%.2f hab/km²\n", densidade02);
            if (densidade01 = densidade02) {
                resultado02 = 0;
            } else { resultado02 = densidade01 < densidade02 ? 1 : -1; }
            break;
        case 6:
            printf("Carta 01 - %s\n", estado01);
            printf("%d pontos turisticos\n", pTuristicos01);
            printf("Carta 02 - %s\n", estado02);
            printf("%d pontos turisticos\n", pTuristicos02);
            if (pTuristicos01 == pTuristicos02) {
                resultado02 = 0;
            } else { resultado02 = pTuristicos01 > pTuristicos02 ? 1 : -1; }
            break;
        default:
            break;

    }
    // Verifica o resultado da primeira batalha
    if (resultado01 == 0) {
        printf("Empate na primeira batalha\n");
    } else { resultado01 > 0 ? printf("Carta 01 Venceu a primeira batalha\n") : printf("Carta 02 Venceu a primeira batalha\n");
    }

    // Verifica o resultado da segunda batalha
    if (resultado02 == 0) {
        printf("Empate na segunda batalha\n");
    } else { resultado02 > 0 ? printf("Carta 01 Venceu a segunda batalha\n") : printf("Carta 02 Venceu a segunda batalha\n");
    }

    // Verifica o resultado final
    final = resultado01 + resultado02;
    if (final == 0) {
        printf("Empate no jogo\n");
    } else { final > 0 ? printf("Carta 01 Venceu o jogo\n") : printf("Carta 02 Venceu o jogo\n");
    }

    return 0;
}

