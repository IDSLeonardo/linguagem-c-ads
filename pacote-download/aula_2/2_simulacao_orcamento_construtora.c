#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "");  // Define a localidade

    float orcamento_dolar, salario_minimo, cotacao_dolar, orcamento_reais;
    float custo_casa_salarios, preco_casa_reais, quantidade_casas;
    float valor_total_gasto, valor_restante;
    
    printf("-------------------------------------------------------------\n");
    printf("   Bem-vindo ao Sistema da Construtora Pica-Pau S/A\n");
    printf("-------------------------------------------------------------\n\n");
    
    printf("Qual o or�amento liberado? (milh�es) U$ ");
    scanf("%f", &orcamento_dolar);
    
    printf("Qual o valor do sal�rio m�nimo atual? (exemplo: 1518,00) R$ ");
    scanf("%f", &salario_minimo);
    
    printf("Qual a cota��o do d�lar? (exemplo: 5,73) R$ ");
    scanf("%f", &cotacao_dolar);
    
    printf("Quantos sal�rios m�nimos custa cada casa? ");
    scanf("%f", &custo_casa_salarios);
    
    orcamento_reais = orcamento_dolar * cotacao_dolar * 1000000;
    preco_casa_reais = custo_casa_salarios * salario_minimo;
    quantidade_casas = floor(orcamento_reais / preco_casa_reais);
    valor_total_gasto = quantidade_casas * preco_casa_reais;
    valor_restante = orcamento_reais - valor_total_gasto;
    
    printf("\n-------------------------------------------------------------\n");
    printf("                      RESULTADO DA SIMULA��O\n");
    printf("-------------------------------------------------------------\n");
    printf("Quantidade de casas poss�veis: %.0f\n", quantidade_casas);
    printf("Valor total gasto na constru��o: R$ %.2f\n", valor_total_gasto);
    printf("Saldo restante do or�amento: R$ %.2f\n", valor_restante);
    printf("-------------------------------------------------------------\n");
    
    return 0;
}
