/*
 * Universidad Nacional Autónoma de México
 * Facultad de Contaduría y Administración
 * Licenciatura en Informática
 *
 * Diseño de algoritmos
 * Clave 2125 Grupo 8192
 * Unidad 5 Actividad Complementaria 2
 * 1 de mayo de 2024
 * Asesor Juan Manuel Martínez Fernández
 * Alumno José Luis Pacheco Mendoza
 * */

/*
 * Unidad 5 Actividad Complementaria 2
 *
 * Después de haber dado lectura a la unidad, realiza lo siguiente:
 * Elabora un programa en lenguaje C en dónde generes una sucesión numérica
 * a partir de la siguiente fórmula: [n(n+1)(2n+1)]/6.
 * Donde n son los números enteros positivos diferentes de cero.
 * El programa deberá mostrar a partir de un número ingresado
 * por el usuario los números generados a partir del 1 hasta el valor ingresado.
 * Por ejemplo: si n = 4, se debe mostrar:
 * Salida = 1, 5, 14, 30.
 * Emplea las estructuras iterativas que consideres necesarias.
 *
 * Sube a la plataforma un archivo comprimido que contenga el archivo fuente
 * y el archivo ejecutable.
 * */

#include <stdio.h>
#include <stdlib.h>


int getserie(int elemento) {
    return (elemento * (elemento + 1) * ((2 * elemento) + 1) )/(6);
}

int main(int argc, char **argv) {

    printf("Universidad Nacional Autonoma de Mexico\n"
           "Facultad de Contaduria y Administracion\n"
           "Licenciatura en Informatica\n"
           "\n"
           "Diseno de algoritmos\n"
           "Clave 2125 Grupo 8192\n"
           "Unidad 5 Actividad Complementaria 2\n"
           "1 de mayo de 2024\n"
           "Asesor Juan Manuel Martinez Fernandez\n"
           "Alumno Jose Luis Pacheco Mendoza\n\n");
    printf("Programa para generar una sucesion numerica con la expresion"
           " [n(n+1)(2n+1)]/6.\n\n");

    // Número de elementos en la serie.
    int n = atoi(argv[1]);
    if(n<=0){
        printf("n = %d \n", n);
        printf("El programa solamente acepta enteros positivos.\n");
        return 0;
    }
    // Impresión en pantalla de los elementos de la serie.
    printf("n = %d \nSalida = ", n);
    for (int i = 1; i <= n; ++i) {
        printf("%d ", getserie(i));
    }
    printf("\n");
    return 0;
}


