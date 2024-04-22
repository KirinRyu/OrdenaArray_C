#include <stdio.h>

int buscaMenor(int *vetor);
void ordenaVetor(int *vetor);

int main(void) {
    int lista[10] = {12, 42, 84, 22, 61, 9, 0, 11, 99, 35};
    ordenaVetor(lista);
    return 0;
}

int buscaMenor(int *vetor) {
    int menor = vetor[0], menor_indice = 0;

    for(int k=0;k<10;k++) {
        if(vetor[k] < menor) {
            menor = vetor[k];
            menor_indice = k;
        }
    }
    return menor_indice;
}

void ordenaVetor(int *vetor) {
    int novoVetor[10], menor;

    printf("A sua nova Lista Ordenada é: ");
    for(int k=0; k<10;k++) {
        menor = buscaMenor(vetor);
        novoVetor[k] = vetor[menor];
    }

    for(int k=0;k<10;k++) {
        printf("%d ", novoVetor[k]);
    }
}
