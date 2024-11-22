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



return 0;
}