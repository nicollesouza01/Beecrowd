#include <stdio.h>
#define pi 3.14159;
 
int main() {
 
    float a, b, c, tri, cir, tra, qua, ret;
    
    scanf("%f %f %f", &a, &b, &c);
    
    tri = (a * c)/2;
    cir = c*c * pi;
    tra = ((a + b) * c)/2;
    qua = b*b; 
    ret = a * b;
    
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", qua);
    printf("RETANGULO: %.3lf\n", ret);
    
    return 0;
}