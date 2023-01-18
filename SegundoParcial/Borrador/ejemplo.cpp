#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  // Declara un arreglo de tamaño 10
  int arr[10];

  // Utiliza un ciclo for para asignar valores aleatorios a cada elemento del arreglo
  for (int i = 0; i < 10; i++) {
    arr[i] = rand() % 10 + 1;
  }

  // Imprime el contenido del arreglo
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

