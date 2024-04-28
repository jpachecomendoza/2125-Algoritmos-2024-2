/*
 * Universidad Nacional Autónoma de México
 * Facultad de Contaduría y Administración
 * Licenciatura en Informática
 *
 * Diseño de algoritmos
 * Clave 2125 Grupo 8192
 * Unidad 6 Actividad Complementaria 1
 * 15 de mayo de 2024
 * Asesor Juan Manuel Martínez Fernández
 * Alumno José Luis Pacheco Mendoza
 * */

/*
 * Unidad 6 Actividad 3
 *
 * A partir del estudio de la unidad, elabora un programa que permita
 * a un cliente seleccionar 4 paquetes de comida rápida de tu elección.
 * El programa deberá mostrar las opciones al usuario el cual podrá seleccionar
 * el que desee de dicho menú. Emplear la estructura switch para realizarlo.
 *
 * */

#include <stdio.h>
#include <stdlib.h>

#define PAQUETE1 "Hamburguesa con queso, papas y soda."
#define PAQUETE2 "Pizza Hawaiana y soda."
#define PAQUETE3 "Alitas y soda."
#define PAQUETE4 "Orden de tacos al pastor y soda."

#define NUM_PAQUETE1 1
#define NUM_PAQUETE2 2
#define NUM_PAQUETE3 3
#define NUM_PAQUETE4 4

#define MIN 1
#define MAX 4

#define SODA1 "Limon"
#define SODA2 "Naranja"
#define SODA3 "Cereza"
#define NUM_SODA1 1
#define NUM_SODA2 2
#define NUM_SODA3 3
#define SODA_MIN 1
#define SODA_MAX 3

char *seleccion(int opcion);

char *servirSoda(int opcion);

typedef enum {
    VERDADERO, FALSO
} bool;

int main(int argc, char **argv) {

    printf("Universidad Nacional Autonoma de Mexico\n"
           "Facultad de Contaduria y Administracion\n"
           "Licenciatura en Informatica\n"
           "\n"
           "Diseno de algoritmos\n"
           "Clave 2125 Grupo 8192\n"
           "Unidad 6 Actividad Complementaria 1\n"
           "15 de mayo de 2024\n"
           "Asesor Juan Manuel Martinez Fernandez\n"
           "Alumno Jose Luis Pacheco Mendoza\n\n");
    printf("Programa para seleccionar comida rapida.\n\n");
    // Inicializar variables.
    int opcion = 0;
    // Capturar entrada del usuario.
    printf("[Menu] ");
    printf("Ordene por numero... \n");
    printf("[%d] %s\n", NUM_PAQUETE1, PAQUETE1);
    printf("[%d] %s\n", NUM_PAQUETE2, PAQUETE2);
    printf("[%d] %s\n", NUM_PAQUETE3, PAQUETE3);
    printf("[%d] %s\n", NUM_PAQUETE4, PAQUETE4);
    printf("Paquete: ");
    // Capturar el número de paquete.
    scanf("%d", &opcion);
    // Validación de los datos de entrada.
    if (opcion < MIN || opcion > MAX) {
        printf("La opcion seleccionada no esta disponible o no es un paquete en el menu.");
        return 0;
    }
    // Selección de paquete.
    char *paqueteSeleccionado = seleccion(opcion);
    printf("Se esta preparando el Paquete %d: %s.\n", opcion, paqueteSeleccionado);

    // Selección de soda.
    int cerrar = 1;
    char *sodaSeleccionada;
    do {
        // Menú de sodas.
        printf("[Menu de sodas]\n");
        printf("[%d] %s\n", NUM_SODA1, SODA1);
        printf("[%d] %s\n", NUM_SODA2, SODA2);
        printf("[%d] %s\n", NUM_SODA3, SODA3);
        printf("Soda: ");
        scanf("%d", &opcion);
        // Validación de sabor de soda.
        if (opcion < SODA_MIN || opcion > SODA_MAX) {
            // Mensaje de opción incorrecta.
            printf("La opcion seleccionada no es un sabor del menu.\n");
        } else {
            // Seleccionar soda por opción seleccionada.
            sodaSeleccionada = servirSoda(opcion);
            printf("Sabor seleccionado: %s.",sodaSeleccionada);
        }
        // Mensaje de solicitud para concluir el pedido.
        printf("\n[1] Cerrar pedido.\n[2] Escoger otro sabor.\n");
        // Opción seleccionada por el usuario.
        scanf("%d", &cerrar);
    } while (cerrar != 1);
    // Mensaje de cierre y productos seleccionados.
    printf("Entregando pedido...\n");
    printf("Paquete: %s\nSoda sabor: %s.", paqueteSeleccionado, sodaSeleccionada);

    return 0;
}

char *seleccion(int opcion) {
    char *paquete;
    switch (opcion) {
        case NUM_PAQUETE1:
            paquete = PAQUETE1;
            break;
        case NUM_PAQUETE2:
            paquete = PAQUETE2;
            break;
        case NUM_PAQUETE3:
            paquete = PAQUETE3;
            break;
        default:
            paquete = PAQUETE4;
            break;
    }
    return paquete;
}

char *servirSoda(int opcion) {
    char *sabor;
    switch (opcion) {
        case 1:
            sabor = SODA1;
            break;
        case 2:
            sabor = SODA2;
            break;
        default:
            sabor = SODA3;
            break;
    }
    return sabor;
}