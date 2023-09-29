#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int buscasequencial(int *vet, int *encontrado, int busca)
{
    int cont = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (vet[i] == busca)
        {
            encontrado[cont] = i;
            cont++;
            // printf("%d", encontrado[cont]);
        }
    }
    return cont;
}

/*
 *
 */
int main(int argc, char **argv)
{
    int pai[MAX];
    int quant[MAX];
    pai[0] = 1;
    pai[1] = 7;
    pai[2] = 6;
    pai[3] = 2;
    pai[4] = 9;
    pai[5] = 2;
    int iguais;
    iguais = buscasequencial(pai, quant, 2);
    printf("posições:");
    for (int i = 0; i < iguais; i++)
        printf("%d ", quant[i]);
    printf("\n");
    printf("quantidade de elementos iguais: %d ", iguais);
    return (EXIT_SUCCESS);
}
