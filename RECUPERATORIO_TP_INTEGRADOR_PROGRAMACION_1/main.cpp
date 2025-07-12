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
    const int CantidadJugadoresMaximos = 5; ///ESTO SE AGREGO PORQUE DABA ERROR Y EN C++ NO ESTA PERMITIDO DE LA MANERA QUE SE PLANTEO USAR ARRAYS DINAMICOS
    int CantidadJugadores;
    int NombreJugadorNumero [CantidadJugadoresMaximos];
    string NombreJugadorLetras [CantidadJugadoresMaximos];
    int Ronda = 1;
    int ValorDadoInicial[CantidadJugadoresMaximos];
    int ValorIncialMaximo;
    const int CantidadDadosObjetivo = 2;
    int DadoObjetivo[CantidadDadosObjetivo];
    int NumeroObjetivo = 0;



    srand(time(0));

    do
    {
        MostrarTitulo();

        MostrarOpciones();
        PedirOpciones(Opcion, Despedida,
                      CantidadJugadores,NombreJugadorNumero,
                      NombreJugadorLetras,ValorDadoInicial,
                      CantidadJugadoresMaximos,Ronda,
                      ValorIncialMaximo, CantidadDadosObjetivo,
                      DadoObjetivo, NumeroObjetivo);
    }
    while (Opcion != 0);

    return 0;
}
