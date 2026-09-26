//Problema 1005 - Média 1 - beecrowd

#include <stdio.h>
 
int main() {
 
    double a, b, media;
    
    scanf("%lf\n%lf\n", &a, &b);

    a = a * 3.5;
    b = b * 7.5;
    
    media = (a + b)/(3.5 + 7.5);
    
    printf("MEDIA = %.5lf\n", media);
 
    return 0;
}