#include <stdio.h>

int main() {

    int numeros[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int valor = 0;
    int i;

    while (1) 
    {
        printf("Digite um numero inteiro para buscar no vetor: ");
        scanf("%d", &valor);
        
        if (valor == -1)
        {
            break;
        }

        for (i = 0; i < 15; i++) {
            if (numeros[i] == valor) {
                printf("Numero encontrado!\n");
                break;
            }
        }

        if (i == 15) {
            printf("Numero nao encontrado!\n");
        }
    }

    printf("Programa encerrado!\n");

    return 0;
}

