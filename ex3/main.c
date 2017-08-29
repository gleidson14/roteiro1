#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,maior;
    maior = 0;
    x = 1;

        printf("\t====digite 0 para sair.====\n");

    while(x!=0){
    printf("Digite valores inteiros: \n");
    scanf("%d",&x);

    if((x!=0)&&(x>maior)){
            maior = x;
        }

    };

    printf("o maior numero digitado: %d.\n",maior);
    return 0;
}
