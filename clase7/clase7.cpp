#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<int> ejercicio1(int input)
{
    vector<int> original;
    int acc = 1;
    while (original.size() < input)
    {
        if (acc % 2 == 0)
        {
            original.push_back(acc);
        }
        acc++;
    }
    return original;
}

int main()
{
    //   1. Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual las mismas
    // contengan los primeros números naturales pares e imprimirlo.
    int input1, input2, input3;
    cout << "Ingrese un numero menor a 25" << endl;
    cin >> input1;
    if (cin.fail() || input1 <= 0 || input1 >= 25)
    {
        cout << "Error: debe ingresar un numero menor a 25." << endl;
        return 1;
    }
    vector<int> result = ejercicio1(input1);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    //     2. Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último
    // elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los
    // demás.
    vector<int> elementos;
    cout << "Ingrese un numero menor a 30" << endl;
    cin >> input2;
    cout << "Ingrese " << input2 << " elementos" << endl;
    for (int i = 0; i < input2; i++)
    {
        int elemento;
        cin >> elemento;
        elementos.push_back(elemento);
    }
    if (elementos[input2 - 1] < 10)
    {
        for (int num : elementos)
        {
            if (num < 0)
                cout << num << " ";
        }
    }
    // 3. Ingresar un valor entero N (< 20). A continuación ingresar un conjunto VEC de N componentes.
    // A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento
    // homólogo de VEC. Finalmente imprimir ambos vectores a razón de un valor de cada uno por
    // renglón

    return 0;
}
