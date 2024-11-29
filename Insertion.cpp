#include <stdio.h>

int main() {
    // Definindo o vetor de números a ser ordenado
    int vetor[] = {5, 3, 8, 4, 2};
    
    // Calculando o tamanho do vetor
    int n = sizeof(vetor) / sizeof(vetor[0]);

    // Início do algoritmo de Insertion Sort
    for (int i = 1; i < n; i++) {
        // A chave é o elemento que vamos inserir na posição correta
        int chave = vetor[i];
        
        // 'j' é o índice do elemento anterior à chave
        int j = i - 1;

        // A seguir, vamos mover os elementos da parte ordenada do vetor
        // para a direita, caso sejam maiores que a chave
        while (j >= 0 && vetor[j] > chave) {
            // Mover o elemento para a direita
            vetor[j + 1] = vetor[j];
            
            // Decrementar 'j' para comparar o próximo elemento da parte ordenada
            j--;
        }

        // Inserir a chave na posição correta (onde j parou)
        vetor[j + 1] = chave;
    }

    // Após a ordenação, vamos imprimir o vetor ordenado
    printf("Vetor ordenado: ");
    
    // Laço para imprimir os elementos do vetor
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");

    return 0;
}
