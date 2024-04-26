/*
 * Universidad Nacional Autónoma de México
 * Facultad de Contaduría y Administración
 * Licenciatura en Informática
 *
 * Diseño de algoritmos
 * Clave 2125 Grupo 8192
 * Unidad 6 Actividad 2
 * 8 de mayo de 2024
 * Asesor Juan Manuel Martínez Fernández
 * Alumno José Luis Pacheco Mendoza
 * */

/*
 * Unidad 6 Actividad 2
 *
 * A partir del estudio de la unidad, elabora un programa que cumpla el siguiente
 * objetivo: el programa deberá solicitar al usuario su fecha de nacimiento,
 * con base a los datos del usuario el programa deberá indicar el signo
 * zodiacal del usuario.
 *
 * */

#include <stdio.h>
#include <stdlib.h>

#define DIA_MAXIMO 31
#define DIA_MINIMO 1
#define MES_MINIMO 1
#define MES_MAXIMO 12

/*
 * Constantes para cada mes y la cota inferior para el signo zodiacal
 * Tomados de
 * https://es.wikipedia.org/wiki/Zodiaco_occidental
 * */
#define ENERO 1
#define ENERO_MIN 21
#define FEBRERO 2
#define FEBRERO_MIN 20
#define MARZO 3
#define MARZO_MIN 21
#define ABRIL 4
#define ABRIL_MIN 21
#define MAYO 5
#define MAYO_MIN 21
#define JUNIO 6
#define JUNIO_MIN 21
#define JULIO 7
#define JULIO_MIN 23
#define AGOSTO 8
#define AGOSTO_MIN 24
#define SEPTIEMBRE 9
#define SEPTIEMBRE_MIN 23
#define OCTUBRE 10
#define OCTUBRE_MIN 24
#define NOVIEMBRE 11
#define NOVIEMBRE_MIN 23
#define DICIEMBRE 12
#define DICIEMBRE_MIN 22
#define ARIES "Aries"
#define TAURO "Tauro"
#define GEMINIS "Geminis"
#define CANCER "Cancer"
#define LEO "Leo"
#define VIRGO "Virgo"
#define LIBRA "Libra"
#define ESCORPIO "Escorpio"
#define SAGITARIO "Sagitario"
#define CAPRICORNIO "Capricornio"
#define ACUARIO "Acuario"
#define PISCIS "Piscis"

//Prototipo
char* conversion(int dia, int mes);
int main(int argc, char **argv) {

    printf("Universidad Nacional Autonoma de Mexico\n"
           "Facultad de Contaduria y Administracion\n"
           "Licenciatura en Informatica\n"
           "\n"
           "Diseno de algoritmos\n"
           "Clave 2125 Grupo 8192\n"
           "Unidad 6 Actividad 2\n"
           "8 de mayo de 2024\n"
           "Asesor Juan Manuel Martinez Fernandez\n"
           "Alumno Jose Luis Pacheco Mendoza\n\n");
    printf("Programa para saber tu signo zodiacal.\n");
    // Inicializar variables.
    int dia = 0;
    int mes = 0;
    // Capturar entrada del usuario.
    printf("Introduce el dia [dd] = ");
    // Asignar a la variable dia.
    scanf("%d", &dia);
    // Validar el rango de días
    if (dia > DIA_MAXIMO || dia < DIA_MINIMO) {
        // Mensaje de captura del día inválido y termina la ejecución.
        printf("El numero ingresado no es una dia del mes.\n");
        return 0;
    }
    // El día es válido y solicita la entrada del usuario
    printf("Introduce el mes [mm] = ");
    // Asignar a la variable mes.
    scanf("%d", &mes);
    //Validar el rango de meses.
    if (mes > MES_MAXIMO || mes < MES_MINIMO) {
        // Mensaje de captura de mes inválido y termina la ejecución
        printf("El numero ingresado no corresponde a un mes.\n");
        return 0;
    }
    // Mostrar en pantalla el signo zodiacal del usuario
    printf("El signo zodiacal es %s \n", conversion(dia, mes));
    return 0;
}

char* conversion(int dia, int mes){
    // Cadena de caracteres
    char *signo = "";
    // Validación del signo zodiacal.
    if (mes == MARZO) {
        if (dia < MARZO_MIN) {
            signo = PISCIS;
        } else signo = ARIES;
    } else if (mes == ABRIL) {
        if (dia < ABRIL_MIN) {
            signo = ARIES;
        } else signo = TAURO;
    } else if (mes == MAYO) {
        if (dia < MAYO_MIN) {
            signo = TAURO;
        } else signo = GEMINIS;
    } else if (mes == JUNIO) {
        if (dia < JUNIO_MIN) {
            signo = GEMINIS;
        } else signo = CANCER;
    } else if (mes == JULIO) {
        if (dia < JULIO_MIN) {
            signo = CANCER;
        } else signo = LEO;
    } else if (mes == AGOSTO) {
        if (dia < AGOSTO_MIN) {
            signo = LEO;
        } else signo = VIRGO;
    } else if (mes == SEPTIEMBRE) {
        if (dia < SEPTIEMBRE_MIN) {
            signo = VIRGO;
        } else signo = LIBRA;
    } else if (mes == OCTUBRE) {
        if (dia < OCTUBRE_MIN) {
            signo = LIBRA;
        } else signo = ESCORPIO;
    } else if (mes == NOVIEMBRE) {
        if (dia < NOVIEMBRE_MIN) {
            signo = ESCORPIO;
        } else signo = SAGITARIO;
    } else if (mes == DICIEMBRE) {
        if (dia < DICIEMBRE_MIN) {
            signo = SAGITARIO;
        } else signo = CAPRICORNIO;
    } else if (mes == ENERO) {
        if (dia < ENERO_MIN) {
            signo = CAPRICORNIO;
        } else signo = ACUARIO;
    } else {
        if (dia < FEBRERO_MIN) {
            signo = ACUARIO;
        } else signo = PISCIS;
    }
    return signo;
}