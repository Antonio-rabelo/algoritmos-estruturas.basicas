#include <stdio.h>
//A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.
int main() {
    int N, i;
    int a = 0, b = 1, c;

    scanf("%d", &N);

    for (i = 1; i <= N; i = i + 1) {
        if (i == 1) {
            printf("%d", a);
        } else if (i == 2) {
            printf(" %d", b);
        } else {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }
    printf("\n");

    return 0;
}
//*********************************************************************************************************************************************************************
#include <stdio.h>
//Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.

int main() {
    int N, X, i;

    // Leitura da quantidade de casos
    scanf("%d", &N);

    for (i = 0; i < N; i = i + 1) {
        scanf("%d", &X);

        if (X == 0) {
            printf("NULL\n");
        } else {
            // Verifica paridade
            if (X % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }

            // Verifica sinal
            if (X > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}
