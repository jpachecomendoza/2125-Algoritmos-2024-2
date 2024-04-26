/*
 * Universidad Nacional Autónoma de México
 * Facultad de Contaduría y Administración
 * Licenciatura en Informática
 *
 * Diseño de algoritmos
 * Clave 2125 Grupo 8192
 * Unidad 6 Actividad 3
 * 8 de mayo de 2024
 * Asesor Juan Manuel Martínez Fernández
 * Alumno José Luis Pacheco Mendoza
 * */

/*
 * Unidad 6 Actividad 3
 *
 * A partir del estudio de la unidad, elabora un programa que cumpla el siguiente
 * objetivo: el programa deberá solicitar al usuario 3 números, los cuales
 * deberán ser mayores de 3 y menores de 15. El programa deberá regresar los números
 * ordenados de mayor a menor e indicar un error si el usuario ingresa números
 * fuera de los parámetros establecidos.
 *
 * */

#include <stdio.h>
#include <stdlib.h>

#define MINIMO 3
#define MAXIMO 15
#define DIMENSION 3

void ordenar(int *numeros);

int main(int argc, char **argv) {

    printf("Universidad Nacional Autonoma de Mexico\n"
           "Facultad de Contaduria y Administracion\n"
           "Licenciatura en Informatica\n"
           "\n"
           "Diseno de algoritmos\n"
           "Clave 2125 Grupo 8192\n"
           "Unidad 6 Actividad 3\n"
           "8 de mayo de 2024\n"
           "Asesor Juan Manuel Martinez Fernandez\n"
           "Alumno Jose Luis Pacheco Mendoza\n\n");
    printf("Programa para ordenar 3 numeros.\n");
    // Inicializar variables.
    int numeros[DIMENSION];
    // Capturar entrada del usuario.
    printf("Introduce tres numeros enteros separados por comas; mayores que %d y menores que %d.\n", MINIMO, MAXIMO);
    printf("Numeros: ");
    // Asignar a la variable dia.
    scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);
    // Validadción de los datos de entrada.
    for (int i = 0; i < DIMENSION; ++i) {
        // Números dentro del rango.
        if (numeros[i] > MAXIMO || numeros[i] < MINIMO) {
            // Mensaje de error.
            printf("Error: el numero [%d] esta fuera del rango [%d, %d]", numeros[i], MINIMO, MAXIMO);
            return 0;
        }
    }
    // Ordenar números
    ordenar(numeros);
    // Mostrar números ordenados de forma descendente.
    printf("Numeros ordenados: ");
    for (int i = 0; i < DIMENSION; ++i) {
        printf("%d ", numeros[i]);
    }
    return 0;
}

void ordenar(int *numeros) {
    // Variables auxiliares
    int rango = 0, aux = 0;
    // Algoritmo de ordenamiento de burbuja.
    for (int i = 0; i < DIMENSION; ++i) {
        rango = DIMENSION - 1 - i;
        for (int j = 0; j < rango; ++j) {
            if (numeros[j] < numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
}