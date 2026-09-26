// Problema 1010 - Cálculo Simples - beecrowd

#include <stdio.h>
 
int main() {
 
    int cod1, cod2, qt1, qt2;
    double valor1, valor2, total;
    
    scanf("%d %d %lf\n", &cod1, &qt1, &valor1);
    scanf("%d %d %lf\n", &cod2, &qt2, &valor2);
    
    total = (qt1 * valor1) + (qt2 * valor2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}