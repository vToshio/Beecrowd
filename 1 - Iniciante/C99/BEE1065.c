#include <stdio.h>

int main(void){
	int i, n, pares=0;
	
	for (i=1; i<=5; i++){
		scanf("%d", &n);
		
		if (n % 2 == 0)
			pares++;
	}
	printf("%d valores pares\n", pares);
	
	return 0;
}