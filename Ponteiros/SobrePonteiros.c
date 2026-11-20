#include <stdio.h>

/* Passagem por valor: a função recebe uma cópia e só altera a cópia. */
void incrementa(int valor){
    printf("antes de incrementar: %d", valor);
    valor++;
    printf("\n depois de incrementar: %d\n", valor);
}

/* Passagem por referência: a função recebe o endereço e altera o original. */
void incrementaPorReferencia(int *valor){
    printf("antes de incrementar: %d", *valor);
    (*valor)++;
    printf("\n depois de incrementar: %d\n", *valor);
}

int main(void){
    int contador = 10;
    printf("O contador vale %d\n", contador);

    incrementa(contador);

    printf("--------\n");
    printf("O contador agora vale: %d (nao mudou)\n", contador);

    incrementaPorReferencia(&contador);

    printf("--------\n");
    printf("O contador agora vale: %d (mudou)\n", contador);

    return 0;
}
