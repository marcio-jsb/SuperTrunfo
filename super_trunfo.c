#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
    setlocale(LC_ALL,"pt_BR.UTF-8");

    char estado1;
    char codDaCarta1[3];
    char NomeDaCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int numPontoTuristico1;

    char estado2;
    char codDaCarta2[3];
    char NomeDaCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numPontoTuristico2;

    printf("--------------------Cadastro de cartas--------------------\n");
    printf("Digite o estado da carta 1(uma letra de A a H):");
    scanf("%c",&estado1);
    getchar();
     
    printf("Digite o codigo da carta 1(a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)):");
    fgets(codDaCarta1,3,stdin);
    codDaCarta1[strcspn(codDaCarta1,"\n")]=0;


    printf("Digite o nome da cidade da carta 1:");
    fgets(NomeDaCidade1,20,stdin);
    NomeDaCidade1[strcspn(NomeDaCidade1,"\n")]=0;
    
    
    printf("Digite a população da carta 1:");
    scanf("%d",&populacao1);

    printf("Digite a area da carta 1:");
    scanf("%f",&area1);

    printf("Digite o pib da carta 1:");
    scanf("%f",&pib1);
    
    printf("Digite o numero de pontos turisticos da carta 1:");
    scanf("%d",&numPontoTuristico1);
    
    printf("\n\n");

    printf("Digite o estado da carta 2(uma letra de A a H):");
    scanf("%c",&estado2);
    getchar();

    printf("Digite o codigo da carta 2(a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)):");
    fgets(codDaCarta2,3,stdin);
    codDaCarta2[strcspn(codDaCarta2,"\n")]=0;
    

    printf("Digite o nome da cidade da carta 2");
    fgets(NomeDaCidade2,20,stdin);
    NomeDaCidade2[strcspn(NomeDaCidade2,"\n")]=0;
    
    printf("Digite a população da carta 2:");
    scanf("%d",&populacao2);

    printf("Digite a area da carta 2:");
    scanf("%f",&area2);

    printf("Digite o pib da carta 2:");
    scanf("%f",&pib2);
    
    printf("Digite o numero de pontos turisticos da carta 1:");
    scanf("%d",&numPontoTuristico2);
    


    


}