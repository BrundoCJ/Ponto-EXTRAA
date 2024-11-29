#include <stdio.h>
int main() {
    // definindo o vetor de números a ser ordenado
    int vetor[] = {64, 25, 12, 22, 11};
      int n = sizeof(vetor) / sizeof(vetor[0]); // calculando o tamanho do vetor

       for (int i = 0; i < n - 1; i++) {// algoritmo de ordenação Selection Sort
        // encontra o índice do menor elemento na parte não ordenada
        int menor = i; // assume que o menor elemento é o atual

        for (int j = i + 1; j < n; j++) {
                if (vetor[j] < vetor[menor]) {
                menor = j; // atualiza o índice do menor elemento
         }
     }
        // troca o menor elemento encontrado com o elemento atual
        if (menor != i) { // só troca se os índices forem diferentes
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

