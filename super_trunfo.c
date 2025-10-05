#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char estado1;
    char codDaCarta1[4];
    char NomeDaCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int numPontoTuristico1;

    char estado2;
    char codDaCarta2[4];
    char NomeDaCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numPontoTuristico2;

    printf("--------------------Cadastro de cartas--------------------\n");

    // Carta 1
    printf("Digite o estado da carta 1 (uma letra de A a H): ");
    scanf(" %c", &estado1); // espaço antes de %c ignora espaços em branco
    getchar();

    printf("Digite o código da carta 1 (A letra do estado seguida de um número de 01 a 04(ex: A01, B03)): ");
    scanf(" %s", codDaCarta1);
    getchar();
   
    printf("Digite o nome da cidade da carta 1: ");
    fgets(NomeDaCidade1,20, stdin);
    NomeDaCidade1[strcspn(NomeDaCidade1, "\n")] = 0;
    

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &numPontoTuristico1);
    getchar();

    printf("\n");

    

    // Carta 2
    printf("Digite o estado da carta 2 (uma letra de A a H): ");
    scanf(" %c", &estado2);
    getchar();
    
    printf("Digite o código da carta 2 (A letra do estado seguida de um número de 01 a 04(ex: A01, B03)): ");
    scanf(" %s",codDaCarta2);   
    getchar();


    printf("Digite o nome da cidade da carta 2: ");
    fgets(NomeDaCidade2, 20, stdin);
    NomeDaCidade2[strcspn(NomeDaCidade2, "\n")] = 0;
 

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &numPontoTuristico2);

    printf("\n\n");

    printf("Carta 1:\n");
    printf("Estado:%c\n",estado1);
    printf("Codigo:%s\n",codDaCarta1);
    printf("Nome da cidade:%s\n",NomeDaCidade1);
    printf("População:%d\n",populacao1);
    printf("Area:%.2f km²\n",area1);
    printf("PIB:%.2f bilhões de reais\n",pib1);
    printf("Número de Pontos Turísticos:%d\n",numPontoTuristico1);

    printf("\n\n");

    printf("Carta 2:\n");
    printf("Estado:%c\n",estado2);
    printf("Codigo:%s\n",codDaCarta2);
    printf("Nome da cidade:%s\n",NomeDaCidade2);
    printf("População:%d\n",populacao2);
    printf("Area:%.2f km²\n",area2);
    printf("PIB:%.2f bilhões de reais\n",pib2);
    printf("Número de Pontos Turísticos:%d\n",numPontoTuristico2);


    return 0;
}
