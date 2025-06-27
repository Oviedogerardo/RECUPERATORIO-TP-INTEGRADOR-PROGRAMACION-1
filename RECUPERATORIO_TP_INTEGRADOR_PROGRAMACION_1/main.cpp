#include <iostream>
#include <ctime>
#include <cstdlib>
#include <clocale>
#include "JUGAR.h"

using namespace std;

int main()
{
    int Frase;
    int Opcion;
    int NombreJugadorNumero [2]= {1,2};
    string NombreJugadorLetras [2];

    srand(time(0));

    MostrarMenu();
    MostrarOpciones();
    PedirOpciones(Opcion, Frase, NombreJugadorNumero, NombreJugadorLetras);







    return 0;
}
