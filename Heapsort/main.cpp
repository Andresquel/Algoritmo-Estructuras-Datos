#include <iostream>

using namespace std;

// Despues del using namespace std;
#include "uno.h"
#include "heapsort.h"
#include "dos.h"

// Palabra reservada, privada
using namespace datos;

int main()
{
    int a[100], n;
    cout << "Ingrese el tamanio: ";
    cin >> n;
    insertarElemento(a, n);
    heapSort(a, n);
    cout << endl;
    mostrarElementos(a, n);
    cout << endl;
    return 0;
}
