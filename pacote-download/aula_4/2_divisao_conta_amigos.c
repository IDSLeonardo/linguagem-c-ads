#include <stdio.h>
#include <math.h>

int main()
{
	
	
	float conta_total, conta_carlos, conta_andre, conta_felipe;
	
	printf("Insira o valor total da conta: R$ ");
	scanf("%f", &conta_total);
	
	conta_carlos = trunc(conta_total / 3);
	conta_andre = trunc(conta_total / 3);
	conta_felipe = conta_total - conta_carlos - conta_andre;
	
	printf("\nValor total da conta: R$ %.2f\n", conta_total);
	printf("\nCarlos deve pagar: R$ %.2f", conta_carlos);
	printf("\nAndre deve pagar: R$ %.2f", conta_andre);
	printf("\nFelipe deve pagar: R$ %.2f", conta_felipe);
	
	return 0;
}