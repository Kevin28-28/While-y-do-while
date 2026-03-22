#include <stdio.h>

int main() {
    int n, fila = 1, espacios, asteriscos;

    printf("Ingrese la altura de la piramide: ");
    scanf("%d", &n);

    // Bucle para cada fila
    while (fila <= n) {
        // Imprimir espacios en blanco
        espacios = 1;
        while (espacios <= n - fila) {
            printf(" ");
            espacios++;
        }

        // Imprimir asteriscos
        asteriscos = 1;
        while (asteriscos <= (2 * fila - 1)) {
            printf("*");
            asteriscos++;
        }

        // Salto de línea para la siguiente fila
        printf("\n");
        fila++;
    }

    return 0;
}
