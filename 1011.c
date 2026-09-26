// Problema 1011 - Esfera - beecrowd

#include <stdio.h>
#include <math.h> //importando biblioteca para utilizar função pow.
#define pi 3.14159
/*usando define para deixar o valor fixo
esse conceito é importante 
pq com ele evita-se que o valor varie 
em um coódigo grande por exemplo em caso de bugs.
Também economiza tempo de digitação e espaço na memória.*/
 
int main() {
 
    int raio;
    double vol;
    
    scanf("%d\n", &raio);
    
    vol = (4.0/3) * pi * pow(raio, 3);
    
    printf("VOLUME = %.3lf\n", vol);
 
    return 0;
}