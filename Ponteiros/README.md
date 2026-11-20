# Sobre Ponteiros

> Exercício da disciplina **Estrutura de Dados I** — Ciência da Computação, UDESC.

## Sobre

Pequeno rascunho em C (`SobrePonteiros.c`) para estudar a diferença entre passagem por valor e por referência. A função `incrementa` recebe uma cópia do contador e o incrementa, mostrando que o valor original no `main` não muda quando o parâmetro não é um ponteiro.

## Tecnologias

- Linguagem C

## Observação

O código ainda é um rascunho e não compila como está: o `main` declara `cont`, mas usa `contador`, e falta um `;` na função `incrementa`. Depois de corrigir esses pontos:

```bash
gcc SobrePonteiros.c -o ponteiros
./ponteiros
```

## Autor

- Arthur Bertoli
