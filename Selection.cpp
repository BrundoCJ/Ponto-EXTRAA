#include <stdio.h>
int main() {
    // definindo o vetor de n�meros a ser ordenado
    int vetor[] = {64, 25, 12, 22, 11};
      int n = sizeof(vetor) / sizeof(vetor[0]); // calculando o tamanho do vetor

       for (int i = 0; i < n - 1; i++) {// algoritmo de ordena��o Selection Sort
        // encontra o �ndice do menor elemento na parte n�o ordenada
        int menor = i; // assume que o menor elemento � o atual

        for (int j = i + 1; j < n; j++) {
                if (vetor[j] < vetor[menor]) {
                menor = j; // atualiza o �ndice do menor elemento
         }
     }
        // troca o menor elemento encontrado com o elemento atual
        if (menor != i) { // s� troca se os �ndices forem diferentes
            int temp = vetor[i];
             vetor[i] = vetor[menor];
              vetor[menor] = temp;
       }
    }

    // imprime o vetor ordenado
    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]); // exibe cada elemento do vetor
    }
    printf("\n");

    return 0;
}

