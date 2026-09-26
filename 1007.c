// Problema 1007 - Diferenca - beecrowd
#include <stdio.h>
 
int main() {
 
    int a, b, c, d, diferenca;
    
    scanf("%d\n%d\n%d\n%d\n", &a, &b, &c, &d);
    
    diferenca = (a*b) - (c*d);
    
    printf("DIFERENCA = %d\n", diferenca);
    
 
    return 0;
}