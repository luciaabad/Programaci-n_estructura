//
// Created by Lucia Abad on 22/11/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estudiante.h"

int main() {

    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    printf("Imprimir estudiante 1:\n");
    imprimirEstudiante(estudiante1);
    printf("\n");

    Estudiante *estudiante2 = (Estudiante *) malloc(sizeof(Estudiante));
    strcpy(estudiante2->nombre, "Ana");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;

    printf("Imprimir estudiante 2 (usando puntero):\n");
    imprimirEstudiante2(estudiante2);
    printf("\n");

    modificarEstudiante(&estudiante1);
    printf("Estudiante 1 después de modificar la edad:\n");
    imprimirEstudiante(estudiante1);
    printf("\n");

    Estudiante estudianteCopiado = copiarEstudiante(estudiante1);
    printf("Estudiante copiado:\n");
    imprimirEstudiante(estudianteCopiado);
    printf("\n");





return 0;
}