#include <iostream>
#include <fstream>

using namespace std;

void agregar(int a[], int n);
void buscar(ofstream & data, int a[], int n, int dato);
void imprimir(ofstream & data, int a[], int n);

int main()
{
    ofstream data("file.txt");
    setlocale(LC_CTYPE, "Spanish");     // Funcion para tildes, caracteres especiales ANSI
    int n, dato;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int arreglo1[n];
    agregar(arreglo1, n);
    cout << "Elementos del arreglo son: ";
    imprimir(data, arreglo1, n);
    cout << endl;
    cout << "Ingrese el elemento a buscar: ";
    cin >> dato;
    buscar(data, arreglo1, n, dato);

    return 0;
}


void agregar(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void buscar(ofstream & data, int a[], int n, int dato)
{
    bool c = false;
    for (int i = 0; i < n; i++)
    {
            if (a[i] == dato)    // Comparacion
            {
                cout << "Elemento encontrado" << endl;
                cout << "En la posicion " << i + 1;
                data << "Elemento encontrado" << endl;
                data << "En la posicion " << i + 1;
                c = true;
            }
    }
    if (c==false)
            {
                cout << "Elemento no encontrado";
                data << "Elemento no encontrado";
            }
    data.close();
}

void imprimir(ofstream & data, int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
            cout << " | " << a[i] << " | " << " ";
            data << "| " << a[i] << " |" << "\n";
    }
}
