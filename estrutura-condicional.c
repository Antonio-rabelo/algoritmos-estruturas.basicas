#include <stdio.h>
//Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".
int main() {
    int A, B, C, D;
    // Leitura dos 4 valores inteiros
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Verificação das condições
    if (B > C &&
        D > A &&
        (C + D) > (A + B) &&
        C > 0 &&
        D > 0 &&
        A % 2 == 0) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
#include <stdio.h>
//Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.
int main() {
    int a, b, c;
    int x, y, z;

    // Leitura dos 3 valores
    scanf("%d %d %d", &a, &b, &c);

    // Guardar os valores originais
    x = a;
    y = b;
    z = c;

    // Ordenação simples (trocas)
    if (a > b) { int temp = a; a = b; b = temp; }
    if (a > c) { int temp = a; a = c; c = temp; }
    if (b > c) { int temp = b; b = c; c = temp; }

    // Mostrar em ordem crescente
    printf("%d\n%d\n%d\n", a, b, c);

    // Linha em branco
    printf("\n");

    // Mostrar na ordem original
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
