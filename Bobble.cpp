#include <stdio.h>

int main() {
    // vetor inicial para ordenação
    int vetor[] = {10, 2, 14, 26, 8};  
    int n = sizeof(vetor) /sizeof(vetor[0]);  // determina o tamanho do vetor automaticamente

    printf("Vetor original: ");// imprime o vetor original antes da ordenação
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);  // mostra cada elemento do vetor
    	}
    printf("\n");

    for (int i = 0; i < n - 1; i++) {  // agoritmo Bubble Sort para ordenar o vetor em ordem crescente
    for (int j = 0; j < n - 1 - i; j++) {// a cada pasagem, o maior elemento restante vai para o final do vetor
         if (vetor[j] > vetor[j + 1]) {  // compara elementos adjacentes
                                        // se o elemento atual for maior, troca de posição com o próximo
            int temp = vetor[j];         // armazena o valor do elemento atual
               vetor[j] = vetor[j + 1];     // move o proximo elemento para a posição atual
               	 vetor[j + 1] = temp;         // coloca o valor armazenado na próxima posição
         }
        }
}

    printf("Vetor ordenado: "); // iprime o vetor após a ordenação
	for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);  // nostra cada elemento do vetor já ordenad
    }
    printf("\n");

    return 0;  
}

