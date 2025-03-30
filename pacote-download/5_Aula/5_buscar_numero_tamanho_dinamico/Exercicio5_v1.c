#include <stdio.h>
 
int main() 
{
    int vetor[20], n, tamanho, i, encontrado = 0;
 
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);
 
    for (i = 0; i < tamanho; i++) {
        printf("Elemento [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }
 
    printf("\nNumero a procurar: ");
    scanf("%d", &n);
 
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == n) {
            printf("\nNumero %d encontrado na posicao %d!\n", n, i + 1);
            encontrado = 1;
            break;
        }
    }
 
    if (!encontrado) {
        printf("\nNumero %d nao encontrado.\n", n);
    }
 
    return 0;
}
 