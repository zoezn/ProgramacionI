#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N = 10;

    // Ejercicio 1
    // Hacer un programa que repita 5 veces la palabra “Hola”.
    cout << "Ejercicio 1" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Hola" << endl;
    }

    // Ejercicio 2
    // Hacer un programa que enumere los números del 1 al 10.
    cout << "Ejercicio 2" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << endl;
    }

    // Ejercicio 3
    // Hacer un programa que enumere los números del 10 al 1.
    cout << "Ejercicio 3" << endl;
    for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }

    // Ejercicio 4
    // Hacer un programa que me pregunte cuántas veces quiero saludarlo, y que repita
    // “hola” la cantidad de veces que lo solicitó el usuario.
    cout << "Ejercicio 4" << endl;
    cout << "Ingrese la cantidad de veces que quiere ser saludado: ";
    int veces;
    cin >> veces;
    for (int i = 0; i < veces; i++)
    {
        cout << "Hola" << endl;
    }

    // Ejercicio 5
    // Hacer un programa que enumere los números del 1 hasta el que el usuario desee.
    cout << "Ejercicio 5" << endl;
    cout << "Ingrese hasta que numero desea contar: ";
    int veces2;
    cin >> veces2;
    for (int i = 0; i < veces2; i++)
    {
        cout << i + 1 << endl;
    }

    // Ejercicio 6
    // Hacer un programa que retorne la sumatoria de 1 hasta el número que ingresa el
    // usuario. Ejemplo: Sumatoria de 5 = 1 + 2 + 3 + 4 + 5.
    cout << "Ejercicio 6" << endl;
    cout << "Ingrese hasta que numero desea sumar: ";
    int maximo;
    cin >> maximo;
    int accum = 0;
    for (int i = 0; i < maximo; i++)
    {
        accum += i + 1;
    }
    cout << "Resultado: " << accum << endl;

    // While
    // Ejercicio 1
    // Que un programa te salude mientras le digas hola. Cuando le digas chau termine.
    bool condicion = true;
    string input;
    while (condicion)
    {
        cout << "Ingresa Hola para ser saludado, o Chau para terminar el programa" << endl;
        cin >> input;
        if (input == "hola")
        {
            cout << "Hola!" << endl;
        }
        else if (input == "chau")
        {
            cout << "Fin del programa" << endl;
            condicion = false;
        }
        else
        {
            cout << "No te entiendo" << endl;
        }
    }

    // Ejercicio 2
    // Hacer un programa que te indique si un número es par o impar. Que se pueda salir
    // cuando se teclea 0.
    bool condicion2 = true;
    int input2;
    while (condicion2)
    {
        cout << "Ingresa un numero para saber si es par o no, ingrese 0 para salir" << endl;
        cin >> input2;
        if (input2 == 0)
        {
            cout << "Fin del programa" << endl;
            condicion2 = false;
        }
        else if (input2 % 2 == 0)
        {
            cout << "El numero es par" << endl;
        }
        else
        {
            cout << "El numero es impar" << endl;
        }
    }

    // Ejercicios Adicionales
    // Ejercicio 1
    // Primos: Hacer un programa que informe si un número es primo.
    bool condicion2 = true;
    int input2;
}
