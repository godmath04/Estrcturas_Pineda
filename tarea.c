#include <stdio.h>

struct alumnos
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};
int variosAlumnos()
{
    int otroAlumno;
    puts("Desea ingresar los datos de otro alumnos: (1 SI | 2 NO)");
    scanf("%d", &otroAlumno);
    return otroAlumno;
}

void obtencionDatos(struct alumnos *ptr)
{

    puts("Ingrese el numero de matricula del alumno:");
    scanf("%d", &ptr->matricula);
    getchar(); // Tengo un problema con el bufer y eso hace que se llene solo el apartado de nombre

    puts("Ingrese el nombre del alumno:");
    gets(ptr->nombre);
    printf("\n");
    puts("Ingrese la direcci'on del alumno:");
    gets(ptr->direccion);
    printf("\n");
    puts("Ingrese la carrera del estudiante:");
    gets(ptr->carrera);
    printf("\n");
    puts("Ingrese el promedio estudiante:");
    scanf("%f", &ptr->promedio);
};

void mostrarDatos(struct alumnos *Alumni, int numeracionAlumnos)
{
    for (int i = 0; i < numeracionAlumnos; i++)
    {
        puts("Datos del Alumno:");
        printf("Matricula: %d\nNombre: %s\nDireccion: %s\nCarrera: %s\nPromedio: %0.2f\n", Alumni[i].matricula, Alumni[i].nombre, Alumni[i].direccion, Alumni[i].carrera, Alumni[i].promedio);
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int numeracionAlumnos = 0;
    puts("Bienvenido al sistema de registro de alumnos.");
    printf("************\n");
    struct alumnos MisAlumnos[100];
    do
    {
        obtencionDatos(&MisAlumnos[numeracionAlumnos]);
        numeracionAlumnos++;
    } while (variosAlumnos() == 1);

    mostrarDatos(MisAlumnos, numeracionAlumnos);

    return 0;
}
