#include <stdio.h>

int main()
{
	float temperaturas [4] = {23.5, 24.0, 22.8, 25.1};
	
	for (int i = 0; i < 4; i++)
	{
		printf("Temperaturas[%d] = %.1f\n", i, temperaturas[i]);
	}
	
	return 0;
}
