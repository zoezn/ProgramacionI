#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Inscripcion
{
    int legajo;  // 8 dígitos
    int materia; // 6 dígitos
    string apellidoNombre;
};
// Apareo de vectores ordenados
void apareoDeVectoresOrdenados(Inscripcion vecA[], int n, Inscripcion vecB[], int m, Inscripcion vecC[], int &k)
{
    // Contadores para la posicion de los vectores A y B.
    int i = 0, j = 0;
    // Contador para posicionarse en el vector resultante.
    k = 0;
    // Mientras pueda comparar valores (al menos uno de los vectores tiene valor)
    while (i < n && j < m)
    {
        // Comparo los valores de los vectores
        if (vecA[i].materia < vecB[j].materia)
        {
            // Coloco el elemento de A porque es menor
            vecC[k] = vecA[i];
            // Me muevo en el vector A
            i++;
        }
        else
        {
            vecC[k] = vecB[j];
            j++;
        }
        // Incremento el contador de la posicion del vector resultante
        k++;
    }
    // Paso todos los elementos restantes de A
    while (i < n)
    {
        vecC[k] = vecA[i];
        i++;
        k++;
    }
    // Paso todos los elementos restantes de B
    while (j < m)
    {
        vecC[k] = vecB[j];
        j++;
        k++;
    }
}
// Teoria
// Vector: conjunto finito y homogeneo de elementos que ocupan posiciones contiguas de memoria y se encuentran asociados a un mismo nombre en comun
// int vecA[4]
// int vecA[4] = {10,20,30,40};
// vecA[2] = 30

int main()
{
    // Ej. 1: Se dispone un vector de inscripción de alumnos a exámenes finales MAESTROFINALES y otro con
    // las inscripciones del día de hoy DIAFINALES, ambos ordenados ascendente por código de materia y con el
    // siguiente diseño:
    // Nro de legajo (8 dígitos) Código de materia (6 dígitos) ApellidoNombre(cadena)
    // Se pide desarrollar un procedimiento que complete un nuevo vector de inscripciones a finales
    // FINALESACT resultante del apareo de los dos vectores anteriores, con el mismo orden y diseño
    vector<Inscripcion> maestrofinales = {
        {00000001, 000001, "Perez Juan"},
        {00000002, 000001, "Garcia Ana"},
        {00000003, 000002, "Lopez Pedro"},
        {00000004, 000004, "Rodriguez Maria"}};
    vector<Inscripcion> diafinales = {
        {00000001, 000001, "Perez Juan"},
        {00000002, 000001, "Garcia Ana"},
        {00000004, 000004, "Rodriguez Maria"}};

    vector<Inscripcion> finalesact;
    apareoDeVectoresOrdenados(maestrofinales, maestrofinales.size(), diafinales, diafinales.size(), finalesact, k);

    return 0;
}
