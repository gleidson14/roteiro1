#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    double preco,porcent;

    printf("Preco do sapato: \n");
    scanf("%lf",&preco);

    printf("Cliente! Digite sua idade para saber a promocao.\n");
    scanf("%d",&idade);

    if (idade <= 18){
        porcent = ((preco*10)/100);
        preco = preco - porcent;
        printf("Seu desconto eh de 10%%. Valor a pagar: %.2lf\n", preco);
    }

     if (idade > 18){
        porcent = ((preco*20)/100);
        preco = preco - porcent;
        printf("Seu desconto eh de 20%%. Valor a pagar: %.2lf\n", preco);
    }

    return 0;
}
