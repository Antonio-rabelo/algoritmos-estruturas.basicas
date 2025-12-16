#include <stdio.h>
//A primeira linha de entrada contem um número L (0 ≤ L ≤ 11) indicando a linha que será considerada para operação. A segunda linha de entrada contém um único caractere Maiúsculo T ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz, sendo que a mesma é preenchida linha por linha, da linha 0 até a linha 11, sempre da esquerda para a direita.
int main() {
    int L, i, j;
    char T;
    double M[12][12];
    double soma = 0.0;

    // Leitura da linha e da operação
    scanf("%d", &L);
    scanf(" %c", &T);

    // Leitura da matriz 12x12
    for (i = 0; i < 12; i = i + 1) {
        for (j = 0; j < 12; j = j + 1) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Calcula a soma dos elementos da linha L
    for (j = 0; j < 12; j = j + 1) {
        soma = soma + M[L][j];
    }

    // Se for média, divide pela quantidade de elementos
    if (T == 'M') {
        soma = soma / 12.0;
    }

    // Imprime resultado com 1 casa decimal
    printf("%.1lf\n", soma);

    return 0;
}
//************************************************************************************************
#include <stdio.h>
//Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.
int main() {
    int N[20];
    int i, temp;

    // Leitura dos 20 valores
    for (i = 0; i < 20; i = i + 1) {
        scanf("%d", &N[i]);
    }

    // Trocas: primeiro com último, segundo com penúltimo, etc.
    for (i = 0; i < 10; i = i + 1) {
        temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    // Impressão do vetor modificado
    for (i = 0; i < 20; i = i + 1) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
