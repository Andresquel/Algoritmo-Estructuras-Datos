#include <iostream>

using namespace std;

void ingresar(int arreglo[], int n);           //Tamaño n de nuestro arreglo
void burbuja(int arreglo[], int n);
void imprimir(int arreglo[], int n);

int main()
{
    int arreglo1[5];
    ingresar(arreglo1, 5);
    burbuja(arreglo1, 5);
    imprimir(arreglo1, 5);

    return 0;
}

void ingresar(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)                 //En la posicion 0
    {
        cout << "Elemento " << i << " : ";         //Mensaje
        cin >> arreglo[i];
    }
}
void burbuja(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)          //Empieza desde cero
    {
        for (int j = i + 1; j <= n - 1; j++)  //For al apar con el otro for
        {
            if (arreglo[i] > arreglo[j])
            {
                int aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
        }
    }
}
void imprimir(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)                 //En la posicion 0
    {
        cout << arreglo[i] << " *-* " << ":p ";
    }
}
