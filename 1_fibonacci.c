#include <stdio.h>
#include <math.h>

int quadradoPerfeito(int conferir)
{
    int raiz = sqrt(conferir);
    raiz = raiz*raiz;
    if (raiz == conferir)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int conferir = (5*(n*n) + 4);

    if (quadradoPerfeito(conferir) == 1)
    {
        printf("O número %d pertence à sequência fibonacci.", n);
    }
    else
    {
        printf("O número %d não pertence à sequência fibonacci.", n);
    }

    return 0;
}