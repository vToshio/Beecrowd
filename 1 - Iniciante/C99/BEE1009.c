#include <stdio.h>
 
int main() {
 
    char nome;
    double salario, vendas, total;
    
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    
    total = salario + 0.15 * vendas;
    
    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
}