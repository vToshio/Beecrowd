#include <stdio.h>

int main(void){
	float salario;
	
	scanf("%f", &salario);
	
	if (salario>=0 && salario<=2000)
		printf("Isento\n");
	else if (salario>2000 && salario<=3000)
		printf("R$ %.2f\n", (salario - 2000) * 0.08);
	else if (salario>3000 && salario<=4500)
		printf("R$ %.2f\n", (salario - 3000)*0.18  + 1000*0.08);
	else 
		printf("R$ %.2f\n", ((salario - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
	
	return 0;
}