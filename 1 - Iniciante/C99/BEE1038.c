#include <stdio.h>

int main(void){
	int cod, qtd;
	
	scanf("%d %d", &cod, &qtd);
	
	switch (cod){
		case 1:
			printf("Total: R$ %.2f\n", qtd * 4.00);
			break;
		case 2:
			printf("Total: R$ %.2f\n", qtd * 4.50);
			break;
		case 3:
			printf("Total: R$ %.2f\n", qtd * 5.00);
			break;
		case 4:
			printf("Total: R$ %.2f\n", qtd * 2.00);
			break;
		case 5:
			printf("Total: R$ %.2f\n", qtd * 1.50);
			break;
	}
	
	return 0;
}