// Problema 1015 - Distância Entre Dois Pontos - beecrowd

#include <stdio.h>
#include <math.h>

int main() {
 
    double x1, y1, x2, y2, raiz;
    
    scanf("%lf %lf\n", &x1, &y1);
    scanf("%lf %lf\n", &x2, &y2);
    
    raiz = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
 
    printf("%.4lf\n", raiz);
    return 0;
}