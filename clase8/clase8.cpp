#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ingresarDato(int &var, string title)
{
    cout << "Ingrese " << title << " de la inscripcion" << endl;
    cin >> var;
}

struct Boleta
{
    string apellido;
    int legajo;
    int materiaCod;
    int dia;
    int mes;
    int año;
};
struct Registro
{
    string apellido;
    int legajo;
};
int main()
{
    //    Ej. 1: Se dispone de un conjunto de boletas de inscripción de alumnos (100 como máximo) a examen en el mes de mayo. Cada boleta tiene los siguientes datos: apellido, número de legajo, código de materia, día, mes y año del examen. Los datos finalizan con un legajo igual a 0.
    // a. Desarrollar un programa que, a partir del ingreso de las boletas mencionadas, por teclado genere un vector de inscripción de alumnos a exámenes finales según el siguiente diseño:
    // a.1 Nro. de legajo (8 dígitos)
    // a.2 Código de materia (6 dígitos)
    // a.3 Día del examen (1..31)
    // a.4 Mes del examen (1..12)
    // a.5 Año del examen (4 dígitos)
    // a.6 Apellido (25 caract)
    cout << "Especifique la cantidad de boletas a ingresar, maximo 100" << endl;
    int input;
    cin >> input;
    Boleta vector[input];
    for (int i = 0; i < input; i++)
    {
        cout << "Ingrese apellido del alumno" << endl;
        cin >> vector[i].apellido;
        ingresarDato(vector[i].legajo, "número de legajo");
        ingresarDato(vector[i].materiaCod, "código de materia");
        ingresarDato(vector[i].dia, "día del examen");
        ingresarDato(vector[i].mes, "mes del examen");
        ingresarDato(vector[i].año, "año del examen");
    }
    for (Boleta num : vector)
    {
        cout << num.apellido << num.año << num.dia << num.mes << num.legajo << endl;
    }
    // b. Dado el vector generado, desarrolle un procedimiento que genere un vector ordenado por número de legajo (cada registro debe tener los campos legajo y apellido y nombre) para todos los alumnos que se inscribieron una o más veces. Cada legajo debe ocupar una posición única y predecible. El intervalo de los legajos es 80001 a 80100 y están todos al menos una vez.

    Registro ordenado[100];
    for (Boleta num : vector)
    {
        if (ordenado[num.legajo - 80001].apellido == "")
        {
            ordenado[num.legajo - 80001] = {apellido : num.apellido, legajo : num.legajo};
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (ordenado[i].apellido != "")
        {
            cout << ordenado[i].apellido << ordenado[i].legajo << i << endl;
        }
    }

    return 0;
}
