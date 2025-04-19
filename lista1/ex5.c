#include <stdio.h>

//Escreva um metodo que recebe um array de inteiros e devolve o segundo menor elemento.
int segundoMenorElemento(int n[], int tamanhoArray){
    int menor, segundoMenor;
    menor = segundoMenor = n[0];

    for(int i = 0; i < tamanhoArray; i++){

        if(n[i] < menor){
            segundoMenor = menor;
            menor = n[i];
        } else if(n[i] < segundoMenor && n[i] > menor){
            segundoMenor = n[i];
        }
    }
    
    return segundoMenor;
}

int main(){

    int n[] = {2,-2,-1,0,1,2,3,4,5};

    int tamanhoArray = sizeof(n) / sizeof(n[0]);

    int segMenorElemento = segundoMenorElemento(n, tamanhoArray);
    printf("%d", segMenorElemento);

    return 0;
}