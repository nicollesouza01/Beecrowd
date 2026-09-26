// Problema 1014 - Consumo - beecrowd

#include <stdio.h>
 
int main() {
 
    double km, l, cons;
    
    scanf("%lf\n", &km);
    scanf("%lf\n", &l);
    
    cons = km/l;
    
    printf("%.3lf km/l", cons);
    
    return 0;
}