#include <stdio.h>

// Escreva um metodo que calcula x elevado a n
double potencia(double x, int n){
    double potencia = 1;
    
    for(int i = 0; i < n; i++){
        potencia = potencia * x;
    }
    
    return potencia;
}

int main(){

    double x;
    int n;

    scanf("%lf %d", &x, &n);
    double p = potencia(x, n);

    printf("%.2f", p);

    return 0;
}