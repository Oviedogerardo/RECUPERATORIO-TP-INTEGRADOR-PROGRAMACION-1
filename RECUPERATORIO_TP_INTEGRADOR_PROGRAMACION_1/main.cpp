#include <iostream>
#include <ctime>
#include <cstdlib>
#include <clocale>
#include "JUGAR.h"

using namespace std;

int main()
{
    int Despedida;
    int Opcion;
    int NombreJugadorNumero [2]= {1,2};
    string NombreJugadorLetras [2];

    srand(time(0));

    do
    {
    MostrarTitulo();

        MostrarOpciones();
        PedirOpciones(Opcion, Despedida, NombreJugadorNumero, NombreJugadorLetras);

    }
    while (Opcion != 0);








    return 0;
}
