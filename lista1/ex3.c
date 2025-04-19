#include <stdio.h>
#include <stdbool.h> //Importa o tipo bool 

//Escreva um metodo que verifica se um numero e primo

bool primo(int n){
    //Um primo so é divisivel por 1 e por ele mesmo
    //Ent posso verificar o resto de todos os n-1, se um for 0 ent não é primo

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n;

    scanf("%d", &n);

    bool isPrimo = primo(n);
    printf("%d", isPrimo);

    return 0;
}