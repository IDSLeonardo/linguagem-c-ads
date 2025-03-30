#include <stdio.h>
 
int main() {
    int paes, broas;
    float total_paes, total_broas, total_arrecadado;
    float poupanca, poupanca_valor;
 
    printf("Quantos paes foram vendidos? ");
    scanf("%d", &paes);
 
    printf("Quantas broas foram vendidas? ");
    scanf("%d", &broas);
 
    total_paes = paes * 0.12;
    total_broas = broas * 1.5;
    total_arrecadado = total_paes + total_broas;
 
    printf("\n\n-------- RESULTADO DAS VENDAS --------\n\n");
    printf("Voce vendeu %d paes = R$ %.2f\n", paes, total_paes);
    printf("Voce vendeu %d broas = R$ %.2f\n", broas, total_broas);
    printf("Total em vendas = R$ %.2f\n", total_arrecadado);
 
    printf("\nQual percentual voce deseja guardar na poupanca? ");
    scanf("%f", &poupanca);
 
    poupanca_valor = (poupanca / 100) * total_arrecadado;
 
    printf("\n\n-------- RESUMO --------\n\n");
    printf("Paes vendidos = %d | Valor unitario = R$ 0.12 | Valor das vendas = R$ %.2f\n", paes, total_paes);
    printf("Broas vendidas = %d | Valor unitario = R$ 1.50 | Valor das vendas = R$ %.2f\n", broas, total_broas);
    printf("Valor total arrecadado = R$ %.2f\n", total_arrecadado);
    printf("Percentual que sera guardado na poupanca = %.2f%% | Valor guardado = R$ %.2f\n", poupanca, poupanca_valor);
    printf("Voce deve guardar = R$ %.2f\n", poupanca_valor);
 
    return 0;
}
 