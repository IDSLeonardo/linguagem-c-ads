#include <stdio.h>
#include <locale.h>

struct Carro {
    char fabricante[30];
    char modelo[30];
    char tipo_combustivel[20];
    char placa[10];

    float consumo_por_litro;
    float capacidade_tanque;
    float autonomia;
    float quilometragem_total;
    float preco_carro;
};

int main () {
    setlocale(LC_ALL,"");
    #define MAX 3

    int i;
    struct Carro carro[MAX];

    float distancia_viagem, preco_combustivel;
    float litros_necessarios, valor_gasto, tanques_necessarios;

    printf("=== CADASTRO DE CARROS ===\n\n");

    for(i = 0; i < MAX; i++) {
        printf("\n--- Cadastro do Carro Nº %d ---\n", i + 1);

        printf("Fabricante: ");
        scanf(" %[^\n]", carro[i].fabricante);

        printf("Modelo: ");
        scanf(" %[^\n]", carro[i].modelo);

        printf("Placa: ");
        scanf(" %[^\n]", carro[i].placa);

        printf("Valor do carro (R$): ");
        scanf("%f", &carro[i].preco_carro);

        printf("Quilometragem total já rodada (km): ");
        scanf("%f", &carro[i].quilometragem_total);

        printf("Tipo de combustível: ");
        scanf(" %[^\n]", carro[i].tipo_combustivel);

        printf("Capacidade do tanque (litros): ");
        scanf("%f", &carro[i].capacidade_tanque);

        printf("Consumo (km/l): ");
        scanf("%f", &carro[i].consumo_por_litro);

        carro[i].autonomia = carro[i].capacidade_tanque * carro[i].consumo_por_litro;
    }

    printf("\nInforme a distância da viagem (em km): ");
    scanf("%f", &distancia_viagem);

    printf("Informe o preço do combustível (R$/litro): ");
    scanf("%f", &preco_combustivel);

    printf("\n\n=== CARROS CADASTRADOS ===\n");

    for(i = 0; i < MAX; i++) {
        litros_necessarios = distancia_viagem / carro[i].consumo_por_litro;
        valor_gasto = litros_necessarios * preco_combustivel;
        tanques_necessarios = distancia_viagem / carro[i].autonomia;

        printf("\n--- Carro Nº %d ---\n", i + 1);
        printf("Fabricante: %s\n", carro[i].fabricante);
        printf("Modelo: %s\n", carro[i].modelo);
        printf("Placa: %s\n", carro[i].placa);
        printf("Preço: R$ %.2f\n", carro[i].preco_carro);
        printf("Quilometragem: %.1f km\n", carro[i].quilometragem_total);
        printf("Combustível: %s\n", carro[i].tipo_combustivel);
        printf("Capacidade do tanque: %.1f L\n", carro[i].capacidade_tanque);
        printf("Consumo: %.1f km/L\n", carro[i].consumo_por_litro);
        printf("Autonomia estimada: %.1f km\n", carro[i].autonomia);
        printf("Valor gasto para %.1f km: R$ %.2f\n", distancia_viagem, valor_gasto);
        printf("Tanques necessários: %.2f\n", tanques_necessarios);
        printf("-------------------------------");
    }

    return 0;
}

