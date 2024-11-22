//
// Created by Lucia Abad on 22/11/24.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
typedef struct Estudiante Estudiante;
Estudiante copiarEstudiante(Estudiante est);
void imprimirEstudiante(Estudiante est);



#endif //ESTUDIANTE_H
