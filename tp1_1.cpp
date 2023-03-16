#include<stdio.h>

int main() {
    int numero = 10;
    int* pNumero = &numero;
    
    printf("direccion de memoria almacenada por el puntero: %p\n", pNumero);
    printf("direccion de memoria de la variable: %p\n", &numero);
    printf("direccion de memoria del puntero: %p\n", &pNumero);
    printf("tamanio del memoria de la variable: %d\n", sizeof(numero));
    printf("el contenido del puntero: %p\n", pNumero);

    return 0;
}