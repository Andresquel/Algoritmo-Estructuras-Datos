void heapSort(int a[], int n)
{
    int valor, tmp, b;
    // Insertar los nodos en el arreglo
    for (int i = n; i > 0; i--)
    {
        // Agregar los elementos al arreglo
        for (int j = 1; j <= i; j++)
        {
            valor = a[j];
            b = j / 2;
            // Intercambiar las posiciones
            // De los nodos del arbol
            while (b > 0 && a[b] < valor)
            {
                a[j] = a[b];
                j = b;
                b = b / 2;
            }
            // Determinar el nodo raiz e intercambiar
            // Las posiciones
            a[j] = valor;
        }
        tmp = a[1];
        a[1] = a[i];
        a[i] = tmp;
    }

}
