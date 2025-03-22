#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main() {
    int menuGeral, menuVetor, menuMatriz;
    int vetor1[TAM], vetor2[TAM], resultadoVetor[TAM];
    int matriz1[TAM][TAM], matriz2[TAM][TAM], resultadoMatriz[TAM][TAM];
    int i, j;

    printf("Escolha uma opcao:\n1 - Vetor\n2 - Matriz\nOpcao: ");
    scanf("%d", &menuGeral);

    switch (menuGeral) {
        case 1:
            printf("\nEscolha uma operacao com vetor:\n");
            printf("1 - Soma entre dois vetores\n");
            printf("2 - Elevar os valores do vetor ao quadrado\n");
            printf("3 - Multiplicacao entre dois vetores\nOpcao: ");
            scanf("%d", &menuVetor);

            printf("\nDigite os elementos do primeiro vetor:\n");
            for (i = 0; i < TAM; i++) {
                scanf("%d", &vetor1[i]);
            }

            if (menuVetor != 2) {
                printf("Digite os elementos do segundo vetor:\n");
                for (i = 0; i < TAM; i++) {
                    scanf("%d", &vetor2[i]);
                }
            }

            switch (menuVetor) {
                case 1:
                    for (i = 0; i < TAM; i++) {
                        resultadoVetor[i] = vetor1[i] + vetor2[i];
                    }
                    printf("Resultado da soma: ");
                    for (i = 0; i < TAM; i++) {
                        printf("%d ", resultadoVetor[i]);
                    }
                    break;

                case 2:
                    printf("Resultado ao quadrado: ");
                    for (i = 0; i < TAM; i++) {
                        printf("%d ", vetor1[i] * vetor1[i]);
                    }
                    break;

                case 3:
                    for (i = 0; i < TAM; i++) {
                        resultadoVetor[i] = vetor1[i] * vetor2[i];
                    }
                    printf("Resultado da multiplicacao: ");
                    for (i = 0; i < TAM; i++) {
                        printf("%d ", resultadoVetor[i]);
                    }
                    break;

                default:
                    printf("Opcao invalida!");
            }
            break;

        case 2:
            printf("\nEscolha uma operacao com matriz:\n");
            printf("1 - Soma entre duas matrizes\n");
            printf("2 - Multiplicacao entre duas matrizes\n");
            printf("3 - Transposicao de uma matriz\nOpcao: ");
            scanf("%d", &menuMatriz);

            printf("\nDigite os elementos da primeira matriz:\n");
            for (i = 0; i < TAM; i++) {
                for (j = 0; j < TAM; j++) {
                    scanf("%d", &matriz1[i][j]);
                }
            }

            if (menuMatriz != 3) {
                printf("Digite os elementos da segunda matriz:\n");
                for (i = 0; i < TAM; i++) {
                    for (j = 0; j < TAM; j++) {
                        scanf("%d", &matriz2[i][j]);
                    }
                }
            }

            switch (menuMatriz) {
                case 1:
                    for (i = 0; i < TAM; i++) {
                        for (j = 0; j < TAM; j++) {
                            resultadoMatriz[i][j] = matriz1[i][j] + matriz2[i][j];
                        }
                    }
                    printf("Resultado da soma:\n");
                    for (i = 0; i < TAM; i++) {
                        for (j = 0; j < TAM; j++) {
                            printf("%d ", resultadoMatriz[i][j]);
                        }
                        printf("\n");
                    }
                    break;

                case 2:
                    for (i = 0; i < TAM; i++) {
                        for (j = 0; j < TAM; j++) {
                            resultadoMatriz[i][j] = 0;
                            for (int k = 0; k < TAM; k++) {
                                resultadoMatriz[i][j] += matriz1[i][k] * matriz2[k][j];
                            }
                        }
                    }
                    printf("Resultado da multiplicacao:\n");
                    for (i = 0; i < TAM; i++) {
                        for (j = 0; j < TAM; j++) {
                            printf("%d ", resultadoMatriz[i][j]);
                        }
                        printf("\n");
                    }
                    break;

                case 3:
                    printf("Transposicao da matriz:\n");
                    for (i = 0; i < TAM; i++) {
                        for (j = 0; j < TAM; j++) {
                            printf("%d ", matriz1[j][i]);
                        }
                        printf("\n");
                    }
                    break;

                default:
                    printf("Opcao invalida!");
            }
            break;

        default:
            printf("Opcao invalida!");
    }

    return 0;
}
