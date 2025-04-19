#include <stdio.h>

// Escreva um metodo que receba um array de doubles e retorne sua media.
// Não sera asumido como sendo PA ou PG

double media(double n[]){
    double soma = 0;
    int i = 0;
    
    while (n[i] != -1) {
        soma += n[i];
        i++;
    }

    return soma / i; // i +1(pq começa em 0) -1(por causa do marcador) => 0
}

int main(){

    double n[] = {1,2,3,4,5,6,8,9, -1}; //Poderia mandar o tamanho do array mas optei pelo marcador -1

    double med = media(n);
    printf("%.2f", med);

    return 0;
}