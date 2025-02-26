// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamaño) {
    int suma = 0;
    for(int i = 0; i < tamaño; i++){
        suma += arr[i];
    }
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int suma = sumaArreglo(numeros, sizeof(numeros) / sizeof(numeros[0]));
    printf("La suma total es %d", suma);
    return 0;
}
