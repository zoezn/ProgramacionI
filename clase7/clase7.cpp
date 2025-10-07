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
    int input1;
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
    return 0;
}
