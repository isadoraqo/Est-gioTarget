#include <stdio.h>
#include <string.h>

int main()
{
    int contador = 0;
    int existe_A = 0;

    printf("Digite uma palavra, frase ou texto:");
    char string[1000];
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < strlen(string); i++)
        {
            if (string[i] == 'a' || string[i] == 'A') 
            {
                contador++;
            }
        }

    if (contador > 0)
    {
        printf("Nessa string a letra \"A\" ocorre %d vezes.", contador);
    }

    return 0;
    }