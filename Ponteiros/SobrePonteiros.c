#include <stdio.h>

void incrementa(int valor){
    printf("antes de incrementar: %d", valor);
    printf("\n depois de incrementar: %d", valor++)
}

int main(){
    int cont = 10;
    printf("O contador vale %d\n", contador);

    incrementa(contador);

    printf("--------\n");
    printf("O contagor agora vale: %d", contador);
}