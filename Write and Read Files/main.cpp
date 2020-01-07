#include <iostream>
#include <fstream>

using namespace std;

int menu();
void escribir(ofstream & archivoprueba);
void leer(ifstream & archivolectura);

string nombre;
string apellido;
int edad;
char r;

int main()
{
    int opcion = menu();
    while (opcion != 0)
    {
        switch (opcion)
        {
        case 1:
            {
                ofstream archivoprueba("hola.txt");
                escribir(archivoprueba);
            }
            break;
        case 2:
            {
                // Directamente en una sola linea
                ifstream archivolectura("hola.txt");
                leer(archivolectura);
            }
            break;
        }
        opcion = menu();
    }
    cout << "Adios" << endl;

    return 0;
}

void escribir(ofstream & archivoprueba)
{
    do
    {
        cout << "\tIngrese el nombre: ";
        cin.sync();
        getline(cin, nombre, '\n');
        cout << "\tIngrese el apellido: ";
        cin.sync();
        getline(cin, apellido, '\n');
        cout << "\tIngrese la edad: ";
        cin >> edad;
        archivoprueba << nombre << " " << apellido << " " << edad << "\n";
        cout << "Desea ingresar otro contacto s/n: ";
        cin >> r;
    }
    while (r=='s');
    archivoprueba.close();
}

void leer(ifstream & archivolectura)
{

    string texto;

    while (!archivolectura.eof())
    {
        archivolectura >> nombre >> apellido >> edad;
        if (!archivolectura.eof())
        {
            getline(archivolectura, texto);
            cout << "Nombre es: " << nombre << "\n";
            cout << "Apellido es: " << apellido << "\n";
            cout << "Edad es: " << edad << "\n";
        }
    }
    archivolectura.close();
}

int menu()
{
    int op = -1;
    while ((op < 0) || (op > 3))
    {
        cout << "1.- Escribir un Archivo" << endl;
        cout << "2.- Leer Archivo" << endl;
        cout << "0.- Salir" << endl;
        cout << "Opcion: ";
        cin >> op;
    }

    return op;
}
