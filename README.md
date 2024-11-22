# Programaci-n_estructura
https://github.com/luciaabad/Programaci-n_estructura.git

Estudiante.h
En este archivo .h definimos la estructura estudiante. Luego declaramos los prototipos que manipulan la estructura, definimos qué tipo de datos vamos a utilizar y qué funciones estarán disponibles para usar.

typedef struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

(Aquí estamos definiendo una estructura llamada Estudiante formada por nombre, edad y promedio)

void imprimirEstudiante(Estudiante est);
void modificarEstudiante(Estudiante *est);
void imprimirEstudiante2(Estudiante *est);
Estudiante copiarEstudiante(Estudiante est);
Estudiante* crearEstudiante();
(Aquí declaramos las funciones que vamos a implementar)


Estudiante.c
En este archivo implementamos las funciones que hemos declarado en Estudiante.h. Aquí se define cómo funcionan y qué hacen específicamente.

imprimirEstudiante(Estudiante est):
Esta función imprime los valores de los campos nombre, edad y promedio del estudiante.

modificarEstudiante(Estudiante *est):
Recibe un puntero a un Estudiante. Esto significa que la función puede modificar directamente el objeto original.
Modifica el campo edad del Estudiante al valor 30. Como pasamos un puntero, esta modificación afectará directamente al Estudiante original fuera de la función.

imprimirEstudiante2(Estudiante *est):
Esta función es similar a imprimirEstudiante, pero en lugar de recibir una copia del Estudiante, recibe un puntero a la estructura. Esto nos permite acceder y modificar el contenido del Estudiante original.

copiarEstudiante(Estudiante est):
Esta función toma un Estudiante como argumento y crea una copia de él.
Usamos la función strcpy para copiar el nombre y asignamos directamente los valores de edad y promedio. Luego, la función devuelve la copia creada.

crearEstudiante():
Esta función crea un Estudiante dinámicamente usando malloc.
malloc(sizeof(Estudiante)) reserva memoria para un Estudiante en el heap (memoria dinámica).
Si la asignación de memoria falla (por ejemplo, si no hay suficiente memoria disponible), el programa imprimirá un error y terminará con exit(1).

main.c
En el archivo main.c es donde usamos las funciones definidas en Estudiante.c para crear y manipular estudiantes.

Creamos un Estudiante llamado estudiante1 de manera tradicional, asignándole los valores para nombre, edad, y promedio.
Llamamos a la función imprimirEstudiante(estudiante1) para imprimir los detalles de estudiante1.

Usamos la función crearEstudiante() que asigna memoria dinámicamente para un Estudiante y devuelve un puntero a esa memoria.
Asignamos valores a nombre, edad, y promedio de estudiante2.
Llamamos a imprimirEstudiante2(estudiante2) para imprimir los detalles de estudiante2.

Llamamos a la función modificarEstudiante(&estudiante1) para cambiar la edad de estudiante1. Pasamos la dirección de estudiante1 usando el operador &, lo que permite modificar directamente la estructura.

Llamamos a la función copiarEstudiante(estudiante1) para obtener una copia de estudiante1. La función devuelve un nuevo Estudiante con los mismos valores que el original, y lo imprimimos.

Finalmente, liberamos la memoria de estudiante2 con free(estudiante2) para evitar posibles fugas de memoria, ya que fue creado dinámicamente con malloc.






