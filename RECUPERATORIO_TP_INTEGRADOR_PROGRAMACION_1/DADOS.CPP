#include <iostream>
#include <cstdlib>
#include "JUGAR.h"
#include "DADOS.h"

using namespace std;

void TiraDadoInicial(int &CantidadJugadores, int ValorDadoInicial[],
                     int NombreJugadorNumero[], string NombreJugadorLetras[],
                     int &ValorInicialMaximo) ///[11].-
{
    int ValorDado;  ///VARIABLE PARA PODER DIBUJAR EL DADO CON EL VALOR DEL VECTOR


    for (int i = 1; i<=CantidadJugadores; i++)  ///PARA DAR VALOR A DADOS INICIALES
    {

        ValorDadoInicial[i] = rand() % 6 + 1;
    }

    cout<<"Los Jugadores Tiran su dado inicial: "<<endl;

    PausayLimpia();

    for (int i = 1; i <= CantidadJugadores; i++)  ///PARA MOSTRAR DADOS INICIALES
    {
        cout<<"El Valor del Dado Inicial del Jugador "<<NombreJugadorNumero[i]<<" **"<<NombreJugadorLetras[i]<<"** es: ";
        cout<<ValorDadoInicial[i]<<endl;

        ValorDado = ValorDadoInicial[i];

        DibujarDado(ValorDado);

        if (ValorDadoInicial[i] > ValorDado)
        {
            ValorInicialMaximo = ValorDadoInicial[i];
        }
        else
        {
            ValorInicialMaximo = ValorDado;
        }




    }
    //cout<<ValorInicialMaximo;


}

void DibujarDado(int ValorDado)
{

    switch(ValorDado)
    {
    case 1:
        cout << "+-------+" << endl;
        cout << "|       |" << endl;
        cout << "|   *   |" << endl;
        cout << "|       |" << endl;
        cout << "+-------+" << endl;
        break;
    case 2:
        cout << "+-------+" << endl;
        cout << "| *     |" << endl;
        cout << "|       |" << endl;
        cout << "|     * |" << endl;
        cout << "+-------+"  << endl;
        break;
    case 3:
        cout << "+-------+" << endl;
        cout << "| *     |" << endl;
        cout << "|   *   |" << endl;
        cout << "|     * |" << endl;
        cout << "+-------+"  << endl;
        break;
    case 4:
        cout << "+-------+" << endl;
        cout << "| *   * |" << endl;
        cout << "|       |" << endl;
        cout << "| *   * |" << endl;
        cout << "+-------+" << endl;
        break;
    case 5:
        cout << "+-------+" << endl;
        cout << "| *   * |" << endl;
        cout << "|   *   |" << endl;
        cout << "| *   * |" << endl;
        cout << "+-------+"  << endl;
        break;
    case 6:
        cout << "+-------+" << endl;
        cout << "| *   * |" << endl;
        cout << "| *   * |" << endl;
        cout << "| *   * |" << endl;
        cout << "+-------+" << endl;
        break;
    }
}

void TirarDadosObjetivo (int CantidadDadosObjetivo, int DadoObjetivo[],
                          int NumeroObjetivo) ///[15].-
{


    for (int i = 0; i<=CantidadDadosObjetivo; i++)  ///PARA DAR VALOR A DADOS OBJETIVO
    {
        DadoObjetivo[i] = rand() % 12 + 1;
        NumeroObjetivo += DadoObjetivo[i];
    }

}

void CeroNumeroObjetivo(int NumeroObjetivo) ///[16].-
{
    NumeroObjetivo = 0;

}

void MostrarDadosObjetivo ()
{



}






