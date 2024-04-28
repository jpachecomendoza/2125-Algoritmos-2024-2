/*
 * Universidad Nacional Autónoma de México
 * Facultad de Contaduría y Administración
 * Licenciatura en Informática
 *
 * Diseño de algoritmos
 * Clave 2125 Grupo 8192
 * Unidad 6 Actividad Complementaria 2
 * 15 de mayo de 2024
 * Asesor Juan Manuel Martínez Fernández
 * Alumno José Luis Pacheco Mendoza
 * */

/*
 * Unidad 6 Actividad Complementaria 2
 *
 * A partir del estudio de la unidad, elabora un programa
 * que permita sumar los primeros n números pares indicados
 * por el usuario.
 * El programa deberá permitir al usuario ingresar un número n
 * entero positivo, a partir de dicho número el programa deberá
 * de ir mostrando la suma de los primeros números pares
 * acorde a dicha cifra.
 * Por ejemplo, si n = 3.
 * El programa mostrará
 * n = 1, suma = 2
 * n = 2, suma = 4
 * n = 3, suma = 6
 *
 * */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {

    printf("Universidad Nacional Autonoma de Mexico\n"
           "Facultad de Contaduria y Administracion\n"
           "Licenciatura en Informatica\n"
           "\n"
           "Diseno de algoritmos\n"
           "Clave 2125 Grupo 8192\n"
           "Unidad 6 Actividad Complementaria 2\n"
           "15 de mayo de 2024\n"
           "Asesor Juan Manuel Martinez Fernandez\n"
           "Alumno Jose Luis Pacheco Mendoza\n\n");
    printf("Programa para sumar los n numeros pares.\n\n");
    // Inicializar variables.
    int n = 0;
    printf("Proporcionar n, donde n > 0: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("El numero n debe ser un entero positivo.");
        return 0;
    }
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * 2;
        printf("n = %d, suma = %d\n", i, i * 2);
    }
    printf("Suma total = %d", suma);

    return 0;
}