#include <iostream>

using namespace std;

void ingresar(int a[], int c);
void intercambio(int a[], int c);
void imprimir(int a[], int c);

int main()
{
    int num;
    cout << "Ingrese el tamanio del arreglo: ";
    cin >> num;
    int a[num];
    ingresar(a, num);
    imprimir(a, num);
    intercambio(a, num);
    imprimir(a, num);

    return 0;
}

void ingresar(int a[], int c)
{
    for (int i = 0; i < c; i++)
    {
        cout << "Ingrese el " << i + 1 << " valor: ";
        cin >> a[i];
    }
}

void intercambio(int a[], int c)
{
    int m, pos;
    for (int i = 0; i < c; i++)
    {
        pos = i;
        m = a[i];
        while ((pos > 0) && (a[pos - 1] > m))
        {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = m;
    }
}

void imprimir(int a[], int c)
{
    for (int i = 0; i < c; i++)
    {
        cout << "|" << a[i] << "|" << " ";
    }
    cout << endl;
    cout << endl;
}
