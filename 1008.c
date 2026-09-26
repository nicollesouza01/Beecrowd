//Problema 1008 - Salário - beecrowd
#include <stdio.h>
 
int main() {
 
    int num, horas;
    double valor, salario;
    
    scanf("%d\n%d\n%lf\n", &num, &horas, &valor);
    
    salario = horas * valor;
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}