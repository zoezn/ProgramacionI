#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct producto
{
    int codigo;
    float precio;
    string nombre;
};

float busquedaPrecio(producto listaProductos[], int n, int codigoProducto)
{
    for (int i = 0; i < n; i++)
    {
        if (listaProductos[i].codigo == codigoProducto)
        {
            return listaProductos[i].precio;
        }
    }
    return 0; // si no se encuentra, devuelvo 0
}

void apareo(int vecA[], int n, int vecB[], int m, int vecC[], int &k)
{
    int i = 0, j = 0;
    k = 0;

    while (i < n && j < m)
    {
        if (vecA[i] < vecB[j])
        {
            vecC[k] = vecA[i];
            i++;
        }
        else
        {
            vecC[k] = vecB[j];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        cout << "siiii" << endl;
        vecC[k] = vecA[i];
        i++;
        k++;
    }

    while (j < m)
    {
        cout << "sigue" << endl;
        vecC[k] = vecB[j];
        j++;
        k++;
    }
}
void imprimirDiferido(int vec[])
{
    int acumulador = 0;
    for (int i = 0; i < 20; i++)
    {
        acumulador += vec[i];
    }
    if (acumulador > 0)
    {
        for (int i = 0; i < 20; i++)
        {
            if (i % 2 == 0)
            {
                cout << vec[i] << " ";
            }
        }
    }
    else
    {
        for (int i = 0; i < 20; i++)
        {
            if (i % 2 != 0)
            {
                cout << vec[i] << " ";
            }
        }
    }
}
int main()
{
    //     VecA: 2, 5, 9, 12
    // VecB: 1, 3, 4, 10
    int vecA[] = {2, 5, 9, 12};
    int vecB[] = {1, 3, 4, 10};
    int n = sizeof(vecA) / sizeof(vecA[0]);
    int m = sizeof(vecB) / sizeof(vecB[0]);
    int vecC[n + m];
    int k = 0;
    apareo(vecA, n, vecB, m, vecC, k);
    int vec[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    // salida esperada: 1 3 5 7 9 11 13 15 17 19
    imprimirDiferido(vec);
    return 0;
}
