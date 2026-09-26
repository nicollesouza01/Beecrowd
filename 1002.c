// Problema 1003 - Área do Círculo - beecrowd
#include <stdio.h>
#include <math.h>
int main() {
 
    double area, raio;
    double n = 3.14159;
    
    scanf("%lf", &raio);
    
    area = n * pow(raio,2);
    
    printf("A=%.4lf\n", area);
    return 0;
}