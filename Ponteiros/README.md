# Sobre Ponteiros

> Exercício da disciplina **Estrutura de Dados I** — Ciência da Computação, UDESC.

## Sobre

Pequeno programa em C (`SobrePonteiros.c`) para estudar a diferença entre passagem por valor e por referência:

- `incrementa(int valor)` recebe uma **cópia** do contador e a incrementa; o valor no `main` continua o mesmo.
- `incrementaPorReferencia(int *valor)` recebe o **endereço** do contador (`&contador`) e incrementa o valor apontado (`(*valor)++`); o valor no `main` muda.

## Tecnologias

- Linguagem C

## Como compilar e executar

```bash
gcc -Wall -std=c99 SobrePonteiros.c -o ponteiros
./ponteiros
```

Saída esperada:

```
O contador vale 10
antes de incrementar: 10
 depois de incrementar: 11
--------
O contador agora vale: 10 (nao mudou)
antes de incrementar: 10
 depois de incrementar: 11
--------
O contador agora vale: 11 (mudou)
```

## Autor

- Arthur Bertoli
