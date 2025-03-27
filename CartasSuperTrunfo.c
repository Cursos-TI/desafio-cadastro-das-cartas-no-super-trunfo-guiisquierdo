#include <stdio.h>

int main      (){

    printf("Desafio super trunfo \n");



    printf("carta 01 \n");

    char    Estado1[20] = "Alagoas";
    char   Numero1[20]= "A01";
    char     Cidade1[20] = "Maceio";
    int habitantes1 = 957;
    float   tamanho1 = 509.32;
    float      PIB1 = 76.07;
    int turismo1 = 20;

    printf("digite o Estado: ");
    scanf("%s", Estado1);
    printf("O Estado é: %s\n", Estado1);

    printf("digite o código:");
    scanf("%s", Numero1);
    printf("O Código é: %s\n", Numero1);
    
    printf("Digite a cidade:");
    scanf("%s", Cidade1);
    printf("A cidade é: %s\n", Cidade1);

    printf("Digite a populaçao:");
    scanf("%d", &habitantes1);
    printf("A populçao é: %d\n", habitantes1);

    printf("Digite tamanho da cidade:");
    scanf("%f", &tamanho1);
    printf("O tamanho é: %.2f km\n", tamanho1);

    printf("Digite o PIB");
    scanf("%f", &PIB1);
    printf("O PIB é: %3.f\n", PIB1);


    printf("Digite o numero de pontos turisticos:");
    scanf("%d", &turismo1);
    printf("Pontos turisticos: %d\n", turismo1);



    printf("Carta 02 \n");

    char    estado2[20] = "Ceara";
    char    codigo2[20] = "B01";
    char    cidade2[20] = "Fortaleza";
    int habitantes2 = 2500000;
    float   tamanho2 =312.00;
    float   PIB2 = 194.00;
    int turismo2 = 15;

    printf("Digite o estado:");
    scanf("%s", estado2);
    printf("O estado é: %s\n", estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2);
    printf("O codigo é: %s\n", codigo2);

    printf("Digite a ciade:");
    scanf("%s", cidade2);
    printf("A cidade é: %s\n", cidade2);

    printf("Digite a populaçao é:");
    scanf("%d", &habitantes2);
    printf("A populaçao é: %d\n", habitantes2);

    printf("Digite o tamanho da cidade:");
    scanf("%f", &tamanho2);
    printf("O tamanho é: %2.f\n", tamanho2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("O PIB é: %.f\n",PIB2);

    printf("Digite o numero de pontos turisticos:");
    scanf("%d", &turismo2);
    printf("Pontos turisticos: %d\n", turismo2);

return 0;

}















    

    
    









