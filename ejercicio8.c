// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    // Implementar intercambio aquí
    int c = *b;
    *b = *a;
    *a = c;

}

int main() {
    int arr[] = {5, 10};
    // Código para llamar a la función y mostrar los valores intercambiados
    printf("los valores originales eran %d y %d \n", arr[0],arr[1]);
    intercambiar(&arr[0],&arr[1]);
    printf("los valores modificados son %d y %d", arr[0],arr[1]);
    return 0;
}
