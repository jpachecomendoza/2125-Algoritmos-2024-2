/*
 * Universidad Nacional Autónoma de México
 * Facultad de Contaduría y Administración
 * Licenciatura en Informática
 *
 * Diseño de algoritmos
 * Clave 2125 Grupo 8192
 * Unidad 4 Actividad Complementaria 1
 * 3 de abril de 2024
 * Asesor Juan Manuel Martínez Fernández
 * Alumno José Luis Pacheco Mendoza
 * */

/*
 * Unidad 4 Actividad Complementaria 1
 *
 * Después de haber dado lectura a la unidad, desarrolla un programa en lenguaje C de forma libre
 * y en un documento de Word anexa capturas de pantalla en donde vayas describiendo el proceso de
 * compilación, ejecución, verificación y depuración de un programa.
 * Agrega tus conclusiones en el documento y tus referencias.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

    printf("Universidad Nacional Autonoma de Mexico\n"
           "Facultad de Contaduria y Administracion\n"
           "Licenciatura en Informatica\n"
           "\n"
           "Diseno de algoritmos\n"
           "Clave 2125 Grupo 8192\n"
           "Unidad 4 Actividad Complementaria 1\n"
           "3 de abril de 2024\n"
           "Asesor Juan Manuel Martinez Fernandez\n"
           "Alumno Jose Luis Pacheco Mendoza\n\n");
    printf("Programa para ordenar un arreglo de forma ascendente "
           "con el algoritmo de burbuja.\n");

    // Tamaño del arreglo
    int n = atoi(argv[1]);

    // Variables auxiliares
    int rango = 0, aux = 0;

    // Validación
    if(argc-2 < n){
        printf("ERROR: Se esperan %d elementos en el arreglo de entrada. \n", n);
        return 0;
    }

    // Adjudicación de memoria
    int *arreglo = (int*) calloc(n, sizeof (int));

    // Lectura del arreglo
    for (int i = 0; i < n; ++i) {
        sscanf(argv[i+2], "%d", &arreglo[i]);
        //Arreglo sin ordenar
        //printf("%d ", arreglo[i]);
    }
    // Imprimir el arreglo
    printf("arreglo [");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arreglo[i]);
    }
    printf("]");
    printf("\n");
    // Algoritmo de ordenamiento de burbuja.
    for (int i = 0; i < n; ++i) {
        rango = n-1-i;
        for (int j = 0; j < rango; ++j) {
            if(arreglo[j]>arreglo[j+1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        }
    }
    printf("\n");
    printf("Arreglo ordenado \n");
    printf("arreglo [");
    // Salida del arreglo ordenado de forma ascendente.
    for (int i = 0; i < n; ++i) {
        printf("%d ", arreglo[i]);
    }
    printf("]");
    printf("\n");
    return 0;
}
