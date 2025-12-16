#include <stdio.h>
//Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias. 
int main() {
    int N;
    scanf("%d", &N);

    printf("%d\n", N);

    int n100 = N / 100;
    N = N % 100;

    int n50 = N / 50;
    N = N % 50;

    int n20 = N / 20;
    N = N % 20;

    int n10 = N / 10;
    N = N % 10;

    int n5 = N / 5;
    N = N % 5;

    int n2 = N / 2;
    N = N % 2;

    int n1 = N / 1;
    N = N % 1;

    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}
