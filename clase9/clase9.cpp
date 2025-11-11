#include <iostream>
#include <vector>
#include <string>

using namespace std;

string formatFecha(int fechaAaaammdd)
{
    int y = fechaAaaammdd / 10000;
    int m = (fechaAaaammdd / 100) % 100;
    int d = fechaAaaammdd % 100;
    return to_string(d) + "/" + to_string(m) + "/" + to_string(y);
}
struct Inscripcion
{
    int legajo;  // 8 dígitos
    int materia; // 6 dígitos
    string apellidoNombre;
};
// Apareo de vectores ordenados
void apareoDeVectoresOrdenados(Inscripcion vecA[], int n, Inscripcion vecB[], int m, Inscripcion vecC[])
{
    // Contadores para la posicion de los vectores A y B.
    int i = 0, j = 0;
    // Contador para posicionarse en el vector resultante.
    int k = 0;
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

struct RegistroLocal
{
    int codigo;       // 4 dígitos
    string autor;     // cadena
    int stockLocal;   // int
    string titulo;    // cadena
    string editorial; // cadena
    string genero;    // cadena
};
struct RegistroDeposito
{
    int codigo;    // 4 dígitos
    int stockDepo; // int
};
struct RegistroFaltante
{
    int codigo; // 4 dígitos
    int stock;  // int
    bool faltanteEnLocal;
    bool faltanteEnDeposito;
};

void apareoEjercicio2(RegistroLocal vecA[], int n, RegistroDeposito vecB[], int m, RegistroFaltante vecC[], int &k)
{
    int i = 0, j = 0;
    k = 0;
    while (i < n && j < m)
    {
        // Comparo los valores de los vectores
        if (vecA[i].codigo < vecB[j].codigo)
        {
            // Coloco el elemento de A porque es menor
            if (vecA[i].stockLocal == 0)
            {
                vecC[k] = {vecA[i].codigo, vecA[i].stockLocal, true, false};
                k++;
            }
            // Me muevo en el vector A
            i++;
        }
        else
        {
            if (vecB[j].stockDepo == 0)
            {

                vecC[k] = {vecB[j].codigo, vecB[j].stockDepo, false, true};
                k++;
            }
            j++;
        }
        // Incremento el contador de la posicion del vector resultante
    }
    // Paso todos los elementos restantes de A
    while (i < n)
    {
        if (vecA[i].stockLocal == 0)
        {
            vecC[k] = {vecA[i].codigo, vecA[i].stockLocal, true, false};
            k++;
        }
        i++;
    }
    // Paso todos los elementos restantes de B
    while (j < m)
    {
        if (vecB[j].stockDepo == 0)
        {

            vecC[k] = {vecB[j].codigo, vecB[j].stockDepo, false, true};
            k++;
        }
        j++;
    }
}

struct Episodio
{
    int idSerie;             // 9 dígitos
    int numeroTemporada;     // 1..12
    long cantidadDescargas;  // long
    string tituloEpisodio;   // cadena
    int numeroEpisodio;      // int
    int fechaUltimaDescarga; // aaaammdd
};
void apareoConControl(Episodio vec[], int n)
{
    int i = 0;
    // int ausentes = 0;
    int key;
    while (i < n)
    {
        key = vec[i].idSerie;
        cout << "Serie: " << key << endl;
        // ausentes = 0;
        while (i < n && key == vec[i].idSerie)
        {
            int temporada = vec[i].numeroTemporada;
            cout << "  " << "Temporada: " << temporada << endl;
            while (i < n && temporada == vec[i].numeroTemporada)
            {

                cout << "  " << "N. de episodio: " << "Titulo del episodio: " << "Cant. descargas: " << "Fecha de ultima descarga: " << endl;
                cout << "       " << vec[i].numeroEpisodio << "         " << vec[i].tituloEpisodio << "         " << vec[i].cantidadDescargas << "       " << formatFecha(vec[i].fechaUltimaDescarga) << endl;
                i++;
            }
            cout << "....................................." << endl;
        }

        // cout << “Legajo : ” << key << “ faltas : ” << ausentes << endl;
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

    vector<Inscripcion> finalesact(maestrofinales.size() + diafinales.size());

    apareoDeVectoresOrdenados(maestrofinales.data(), maestrofinales.size(), diafinales.data(), diafinales.size(), finalesact.data());
    // for (Inscripcion insc : finalesact)
    // {
    //     cout << insc.legajo << " " << insc.materia << " " << insc.apellidoNombre << endl;
    // }
    // Ej. 2: El dueño de un local de venta de libros desea relevar el stock que posee en el local y en el depósito, para realizar las compras del mes. Para ello cuenta con dos conjuntos de datos:
    // a) StockEnLocal, ordenado por código del libro, con un registro por cada libro que se encuentra en el
    // local, con el siguiente diseño:
    // ● Código de libro ( 4 dígitos )
    // ● Autor (cadena)
    // ● Stock en el local (int)
    // ● Título del libro (cadena)
    // ● Editorial (cadena)
    // ● Genero ( cadena)

    vector<RegistroLocal> stockEnLocal = {
        {1, "Autor A", 2, "Titulo A", "Editorial A", "Genero A"},
        {2, "Autor B", 5, "Titulo B", "Editorial B", "Genero B"},
        {3, "Autor C", 0, "Titulo C", "Editorial C", "Genero C"},
        {4, "Autor D", 0, "Titulo D", "Editorial D", "Genero D"},
        {5, "Autor E", 3, "Titulo E", "Editorial E", "Genero E"}};
    vector<RegistroDeposito> stockEnDeposito = {
        {1, 0},
        {3, 0},
        {5, 4}};
    // b) StockEnDeposit, ordenado por código del libro, con un registro por cada libro que se encuentra en el
    // depósito, con el siguiente diseño:
    // ● Código de libro ( 4 dígitos )
    // ● Stock en depósito (int)
    // Se pide desarrollar la metodología necesaria para escribir un algoritmo que reciba ambos conjuntos de datos
    // y emita un listado ordenado por código de libro, con un renglón por cada libro que tenga faltante en stock sea
    // en depósito, local o en ambos lugares, con el siguiente formato:

    int longitudFaltantes = 0;
    vector<RegistroFaltante> faltantes(stockEnLocal.size() + stockEnDeposito.size());
    // vector<RegistroFaltante> faltantes(longitudFaltantes);

    apareoEjercicio2(stockEnLocal.data(), stockEnLocal.size(),
                     stockEnDeposito.data(), stockEnDeposito.size(),
                     faltantes.data(), longitudFaltantes);
    cout << "Libros faltantes" << endl;
    cout << "Codigo" << " " << "Observacion" << endl;
    for (int i = 0; i < longitudFaltantes; i++)
    {
        for (int j = i + 1; j < longitudFaltantes; j++)
        {
            if (faltantes[i].codigo == faltantes[j].codigo)
            {
                // Combinar flags
                if (faltantes[j].faltanteEnDeposito)
                    faltantes[i].faltanteEnDeposito = true;
                if (faltantes[j].faltanteEnLocal)
                    faltantes[i].faltanteEnLocal = true;

                // Eliminar elemento duplicado
                for (int k = j; k < longitudFaltantes - 1; k++)
                {
                    faltantes[k] = faltantes[k + 1];
                }
                longitudFaltantes--;
                j--;
            }
        }
    }
    for (int i = 0; i < longitudFaltantes; i++)
    {

        if (faltantes[i].faltanteEnDeposito && faltantes[i].faltanteEnLocal)
        {
            cout << faltantes[i].codigo << " " << "Faltante en local y en deposito" << endl;
        }
        else if (faltantes[i].faltanteEnLocal)
        {
            cout << faltantes[i].codigo << " " << "Faltante en local" << endl;
        }
        else
        {
            cout << faltantes[i].codigo << " " << "Faltante en deposito" << endl;
        }
    }

    cout << "Total de libros en falta: " << longitudFaltantes << endl;

    // Una aplicación para descargas de Series posee la información en un conjunto de datos Episodios,
    // con un registro por cada episodio, ordenado ascendente por Id_Serie y Número de temporada, con el
    // siguiente diseño:
    // 1) Id_Serie ( 9 dígitos )
    // 3) Número de temporada (1..12)
    // 5) Cantidad de descargas (long)
    // 2) Título del episodio (cadena)
    // 4) Número de episodio (int)
    // 6) Fecha de última descarga (aaaammdd)
    // Se pide desarrollar la metodología necesaria para escribir un algoritmo emita el siguiente listado:
    vector<Episodio> episodios = {
        {100000001, 1, 1500, "Episodio 1", 1, 20240101},
        {100000001, 1, 1200, "Episodio 2", 2, 20240102},
        {100000001, 2, 1800, "Episodio 1", 1, 20240201},
        {100000002, 1, 2000, "Episodio 1", 1, 20240301},
        {100000002, 1, 2200, "Episodio 2", 2, 20240302},
        {100000003, 1, 3000, "Episodio 1", 1, 20240401}};
    apareoConControl(episodios.data(), episodios.size());

    return 0;
}
