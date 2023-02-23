/*
Nombre: Daniela Sanabria.
Fecha: Febrero 15.
Ejercicio: Práctica con apuntadores y arreglos.
          Crear un array con 10 elementos, crear una función para generar números aleatorios entre 0 y 25, llenar el array con 10 números aleatorios, crear un puntero, imprimir el contenido del array usando el puntero e imprimir las direcciones del contenido del array usando el puntero.
  */
#include <iostream>
#include <cstdlib> //librería para números aleatorios
using namespace std;


int main() {
  int a, array[10];//se crea el arreglo
  int *apuntador;
  for(int i=0;i<10;i++){ //se crea ciclo para llenar el arreglo
    apuntador=&array[i];
    array[i] = rand() % 26; // se genera un valor entre 0 y 25
    cout<<*apuntador<<"\t"; //se imprime el arreglo usando el apuntador.
    cout<<apuntador<<"\t"; //se imprimen las direcciones del contenido del arreglo.
    cout<<endl;
    }
}
