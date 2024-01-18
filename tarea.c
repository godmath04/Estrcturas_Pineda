#include <stdio.h>

struct alumnos
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};

void obtencionDatos(struct alumnos *ptr)
{
    printf("Ingrese el numero de matricula del alumno:\n");
    scanf("%d", &ptr->matricula);
    getchar(); // Tengo un problema con el bufer y eso hace que se llene solo el apartado de nombre

    printf("Ingrese el nombre del alumno:\n");
    gets(ptr->nombre);
    printf("\n");
    printf("Ingrese la direcci'on del alumno:\n");
    gets(ptr->direccion);
    printf("\n");
    printf("Ingrese la carrera del estudiante:\n");
    gets(ptr->carrera);
    printf("\n");
    printf("Ingrese el promedio estudiante:\n");
    scanf("%f", &ptr->promedio);
};

void mostrarDatos(struct alumnos Alumni)
{
    printf("Datos del Alumno:\n");
    printf("Matricula: %d, Nombre: %s, Direccion: %s, Carrera: %s, Promedio: %0.2f", Alumni.matricula, Alumni.nombre, Alumni.direccion, Alumni.carrera, Alumni.promedio);
};

int main(int argc, char const *argv[])
{
    printf("Bienvenido al sistema de registro de alumnos.\n");
    printf("************\n");
    struct alumnos MisAlumnos; 
    {
        obtencionDatos(&MisAlumnos);
        mostrarDatos(MisAlumnos);
    };
    

    return 0;
}
