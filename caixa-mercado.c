#include <stdio.h>

void main()
{
    float preco, subtotal = 0;
    int itens = 0;

    do
    {
        printf("digite preco: (0 para finalizar): ");
        scanf("%f", &preco);
        if(preco<0)
        {
            printf("preco invalido\n");
        }

    }
    while(preco<0);

    while(preco!=0)
    {
        subtotal = subtotal + preco;
        itens++;
        printf("subtotal: %.2f\n", subtotal);

        do
        {
            printf("digite preco: (0 para finalizar): ");
            scanf("%f", &preco);
            if(preco<0)
            {
                printf("preco invalido\n");
            }

        }
        while(preco<0);
    }

    printf("total da compra: %.2f\n", subtotal);
    printf("total de itens: %i", itens);
}


