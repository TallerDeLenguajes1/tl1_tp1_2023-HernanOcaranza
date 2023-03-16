#include <stdio.h>
#define NUMERO1 10
#define NUMERO2 20
// DECLARACION DE FUNCIONES
int cuadrado(int num);

void cuadradoP(int* num);

void mostrarDatosDeVariable(int var);

void Invertir(int* a,int* b);

void Orden(int* a,int* b);

void MostrarNumeros(int a, int b);
// FUNCION PRINCIPAL
int main () {    
    int numero = NUMERO1, numero2 = NUMERO2;
    printf("El cuadrado de %d es: %d\n", numero, cuadrado(numero)); 
    printf("El cuadrado de %d es: ", numero);
    cuadradoP(&numero);
    printf("%d\n", numero);
    mostrarDatosDeVariable(numero);
    numero = NUMERO1;
    MostrarNumeros(numero, numero2);
    printf("Invertimos\n");
    Invertir(&numero, &numero2);
    MostrarNumeros(numero, numero2);
    Orden(&numero, &numero2);
    printf("Ordenamos\n");
    MostrarNumeros(numero, numero2);
    return 0;
}

// DESARROLLO DE FUNCIONES
int cuadrado(int num) {
    return num * num;
}

void cuadradoP(int* num) {
    *num = *num * *num;
}

void mostrarDatosDeVariable(int var) {
    printf("direccion de la variable %p\ncontenido de la variable: %d\n", &var, var);
}

void Invertir(int* a,int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void Orden(int* a,int* b) {
    if (*a <= *b) return;
    Invertir(a, b);
}

void MostrarNumeros(int a, int b) {
    printf("Numero1 : %d\tNumero2: %d\n", a, b);
}