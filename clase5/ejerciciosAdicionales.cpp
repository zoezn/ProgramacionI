#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Ejercicio 1
    // Primos: Hacer un programa que informe si un número es primo.
    bool condicion = true;
    int input;
    while (condicion)
    {
        cout << "Ingresa un numero para saber si es par o no" << endl;
        cin >> input;
        if (input == 0)
        {
            cout << "Fin del programa" << endl;
            condicion = false;
        }
        else if (input % 2 == 0)
        {
            cout << "El numero es par" << endl;
        }
        else
        {
            cout << "El numero es impar" << endl;
        }
    }
    cout << endl;
    cout << "------------------------------------------" << endl;
    // Ejercicio 2
    // Ciclos: Mostrar por pantalla, los número del 1 al 30, pero que no muestre los números múltiplos de 5.
    for (int i = 1; i <= 30; i++)
    {
        if (i % 5 != 0)
        {
            cout << i << endl;
        }
    }
    cout << endl;
    cout << "------------------------------------------" << endl;
    // Ejercicio 3
    // Ciclos: Pedir valores por pantalla y informar: Cuantos pares se ingresaron, y cuanto
    // impares. Con cero se sale del programa. También informar cuanto suman los pares y
    // los impares por separado.
    int input3;
    vector<int> pares;
    vector<int> impares;
    int sumaDePares = 0;
    int sumaDeImpares = 0;
    bool condicion3 = true;
    while (condicion3)
    {
        cout << "Ingresa un valor, ingrese 0 para salir" << endl;
        cin >> input3;
        if (input3 == 0)
        {
            cout << "Fin del programa" << endl;
            condicion3 = false;
        }
        else if (input3 % 2 == 0)
        {
            pares.push_back(input3);
        }
        else
        {
            impares.push_back(input3);
        }
    }
    for (int i = 0; i < pares.size(); i++)
    {
        sumaDePares += pares.at(i);
    }
    for (int i = 0; i < impares.size(); i++)
    {
        sumaDeImpares += impares.at(i);
    }
    cout << "Se ingresaron " << pares.size() << " numeros pares" << endl;
    cout << "La suma total es de " << sumaDePares << endl;
    cout << "Se ingresaron " << impares.size() << " numeros impares" << endl;
    cout << "La suma total es de " << sumaDeImpares << endl;
    cout << endl;
    cout << "------------------------------------------" << endl;
    // Ejercicio 4
    // Productoria. (pedir valores por pantalla, y que devuelva la multiplicación de todos ellos.
    int input4;
    vector<int> valores;
    int multiplicacion = 1;
    bool condicion4 = true;
    while (condicion4)
    {
        cout << "Ingresa un valor, ingrese 0 para salir" << endl;
        cin >> input4;
        if (input4 == 0)
        {

            condicion4 = false;
        }
        else
        {
            valores.push_back(input4);
        }
    }
    for (int i = 0; i < valores.size(); i++)
    {
        multiplicacion = multiplicacion * valores.at(i);
    }
    cout << "Se ingresaron " << pares.size() << " numeros pares" << endl;
    cout << "El resultado de la multiplicacion entre todos los valores ingresados es: " << multiplicacion << endl;
    cout << endl;
    cout << "------------------------------------------" << endl;
    // Ejercicio 5
    //  Escalera. Realizar una escalera de #.
    // a. Ejemplo
    // #
    // ##
    // ###
    // ####
    // b. Que el usuario pueda disponer la cantidad de escalones.

    int escalones;
    cout << "Ingrese la cantidad de escalones que desea: ";
    cin >> escalones;
    for (int i = 0; i < escalones; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
    cout << endl;
    cout << "------------------------------------------"
         << endl;

    // Ejercicio 6
    // Juego: Acierta un número de 1 al 50. El programa debe informar si el número a
    // descubrir es mayor o menor al ingresado, y cuando el jugador lo descubre, debe
    // informar la cantidad de intentos y terminar.
    int numeroSecreto = 27;
    bool fueAdivinado = false;
    int numeroIngresado;
    int cantidadDeIntentos;

    while (fueAdivinado == false)
    {
        cout << "Ingrese un numero del 1 al 50 para adivinar" << endl;
        cin >> numeroIngresado;
        cantidadDeIntentos += 1;
        if (numeroIngresado == numeroSecreto)
        {
            cout << "Felicitaciones! Adivinaste, el numero era " << numeroSecreto << endl;
            cout << "Cantidad de intentos: " << cantidadDeIntentos << endl;
        }
        else
        {
            if (numeroIngresado > numeroSecreto)
            {
                cout << "El numero secreto es menor" << endl;
            }
            else
            {
                cout << "El numero secreto es mayor" << endl;
            }
        }
    }
}
