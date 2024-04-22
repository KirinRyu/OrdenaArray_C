#include <stdio.h>

void bubbleSort(int *vetor, int tamanho);

int main(void) {
    int lista[10] = {12, 42, 84, 22, 61, 9, 0, 11, 99, 35};
    bubbleSort(lista, 10);
    return 0;
}

void bubbleSort(int *vetor, int tamanho) {
    int temp, i, j;
    for(i=0;i < tamanho;i++) { // loop externo indica quantas vezes se deve repetir o processo de varrer a array.
        for(j=0;j < tamanho;j++) { // loop interno é para comparar 2 valores adjacentes e fazer a decisão da troca com o 'if'.
            if(vetor[j] > vetor[j+1]) {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

    printf("Seu vetor ficou assim: ");
    for(i=0;i<tamanho;i++) {
        printf("%d ", vetor[i]);
    }
}
