#include <stdio.h>
void bubble_sort(float a[],
 int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {   // bucle n veces - 1 por elemento
        for (j = 0; j < n - i - 1; j++) { // los últimos i elementos ya están ordenados
            if (a[j] > a[j + 1]) {  // cambiar si la orden se rompe
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main() {
  int a[100], n; 
  float i; //d, swap;
  printf("Ingrese el numero de elementos del arreglo:\n");
  scanf("%d", &n); 
  printf("Ingrese las fracciones:\n", n);
  for (i = 0; i < n; i++)
    scanf("%f", &a[i]);
  bubble_sort("%f" a , n);
  printf("Imprimiendo la matriz ordenada:\n");
  for (i = 0; i < n; i++)
     printf("%f\n", a[i]);
  return 0;
}

//Algoritmo de ordenamiento para numeros enteros donde tenemos dos bucles

#include <stdio.h>
void bubble_sort(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {   //bucle n veces - 1 por elemento
        for (j = 0; j < n - i - 1; j++) { // los últimos i elementos ya están ordenados
            if (a[j] > a[j + 1]) {  // cambiar si la orden se rompe
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main() {
  int a[100], n, i, d, swap;
  printf("Ingrese el numero de elementos del arreglo:\n");
  scanf("%d", &n); 
  printf("Ingrese las fracciones:\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  bubble_sort(a, n);
  printf("Imprimiendo la matriz ordenada:\n");
  for (i = 0; i < n; i++)
     printf("%d\n", a[i]);
  return 0;
}