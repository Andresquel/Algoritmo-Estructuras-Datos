#include <iostream>

using namespace std;

void horas(int c[], int h);
int imprimir(int a[], int cont);

int main()
{
    int h, s, d = 6, contador = 0, total;
    cout << "Ingrese las horas trabajadas: " << endl;
    cin >> h;
    int c[h];
    horas(c, d);
    while (contador < d)
    {
    	total = imprimir(c, contador);
    	contador++;
	}
    cout << "Ingrese el sueldo: ";
    cin >> s;
    cout << "Total de horas trabajadas es: " << total << " y su sueldo es: " << " $ " << (s / 120) * total << endl;

    return 0;
}

void horas(int c[], int h)
{
    for (int i = 0; i < h - 1; i++)
    {
        cin >> c[i];
    }
}

int imprimir(int a[], int cont)
{
	int total = 0;
    for (int i = 0; i < cont; i++)
    {
        total = total + a[i];
    }

    return total;
}
