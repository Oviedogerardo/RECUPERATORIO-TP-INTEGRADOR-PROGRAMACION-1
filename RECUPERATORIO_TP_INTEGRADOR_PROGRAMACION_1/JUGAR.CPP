#include <iostream>
#include <cstdlib>
#include "JUGAR.h"
#include "DADOS.h"

using namespace std;

//FUNCIONES PARA EL FUNCIONAMIENTO DEL PROGRAMA.-

void MostrarTitulo() /// [1]
{
    cout<<"                         _______   ____________  _______   ______  ___    ____  ____  _____ "<<endl;
    cout<<"                        / ____/ | / / ____/ __  \/ ____/ | / / _ _ \/   |  / __ \\/ _ \ /  ___/ "<<endl;
    cout<<"                       / __/ /  |/ / /_  / /_/ / __/ /  |/ / / / / /| | / / / / / //\__  \\  "<<endl;
    cout<<"                      / /___/ /|  / __/ / _, _/ /___/ /|  / /_/ / ___ |/ /_/ / /_//___/ /  "<<endl;
    cout<<"                     /_____/_/ |_/_/   /_/ |_/_____/_/ |_/_____/_/  |_/_____/\____//____/   "<<endl;
    cout<<""<<endl<<endl<<endl;
}

void MostrarOpciones() /// [2]
{

    cout<<"+---------------------+"<<endl;

    cout<<"|1 - JUGAR            |"<<endl;

    cout<<"|2 - ESTADISTICAS     |"<<endl;

    cout<<"|3 - CREDITOS         |"<<endl;

    cout<<"|0 - SALIR            |"<<endl;

    cout<<"+---------------------+"<<endl;
}

void Despedidas(int &Despedida)   /// [3a]
{
    string CambioDespedida [4] = {"NOS VEMOS","HASTA LUEGO","GRACIAS POR JUGAR","SEE YOU SPACE COWBOY"};
    Despedida = rand() % 4;

    if (Despedida == 0)
    {
        cout<<CambioDespedida[0];
    }

    if (Despedida == 1)
    {
        cout<<CambioDespedida[1];
    }

    if (Despedida == 2)
    {
        cout<<CambioDespedida[2];
    }

    if (Despedida == 3)
    {
        cout<<CambioDespedida[3];
    }
}



void PedirOpciones(int &Opcion, int &Despedida,
                   int &CantidadJugadores,int NombreJugadorNumero[],
                   std::string NombreJugadorLetras[],int ValorDadoInicial[],
                   const int&CantidadJugadoresMaximos, int &Ronda,
                   int ValorInicialMaximo)  /// [3]
{
    cout<<"Ingrese una opcion: ";
    cin >> Opcion;

    switch (Opcion)
    {

    case 0:
        Despedidas(Despedida);
        break;

    case 1:
        Limpia();
        MostrarTitulo();
        IngresarJugadores(CantidadJugadores);
        PedirNombres(CantidadJugadoresMaximos, CantidadJugadores,
                     NombreJugadorNumero, NombreJugadorLetras);
        PausayLimpia();
        MostrarRonda(Ronda);
        TiraDadoInicial(CantidadJugadores,ValorDadoInicial,
                        NombreJugadorNumero,NombreJugadorLetras,
                        ValorInicialMaximo);
        while (Ronda <= 3)
        {
        MostrarRonda(Ronda);



          Ronda++;
        }




        break;

    case 2:
        // Estadisticas(NombreJugadorLetras);
        break;

    case 3:
        Creditos();
        break;

    default:
        cout<<"ESTA OPCION ES INCORRECTA"<<endl;
        PausayLimpia();
    }

}

void PedirNombres(const int &CantidadJugadoresMaximos,int &CantidadJugadores, int NombreJugadorNumero[],
                  string NombreJugadorLetras[]) /// [4]
{

    ///INCIALIZAMOS LOS ARRAY, DESDE JUGADOR 0 AL 9999, PARA USAR NUMERO
    for (int i = 0; i <= CantidadJugadores; i++)
    {
        NombreJugadorNumero[i] = i;
    }


    for (int i = 1; i <= CantidadJugadores; i++)
    {
        cout<<"INGRESAR NOMBRE DEL JUGADOR "<<NombreJugadorNumero[i]<<":";
        cin>>NombreJugadorLetras[i];
    }


    // cout<<NombreJugadorLetras[0]<<endl;  ///JUGADOR1

    // cout<<NombreJugadorLetras[1]<<endl;  ///JUGADOR2
}

/* Estadisticas (string NombreJugadorLetras[], int NombreJugadorNumero[]) ///[6].-
{
    system("cls");


    cout<<"                    ---------------------ESTADISTICAS---------------------"<<endl<<endl;

    ///PARA HACER, ACA VAS A PONER LOS PUNTOS DINAMICAMENTE DEPENDIENDO DE LA CANTIDAD D EJUGADORES QUE ENTREN

    cout<<"El Jugador "<<NombreJugadorNumero[]<<": "<<NombreJugadorLetras[0]<<" tuvo estos puntos: FALTA AGREGAR PUNTOS"<<endl;//<<PuntajeJugador1<<endl<<endl;

    cout<<"El Jugador 2: "<<NombreJugadorLetras[1]<<" tuvo estos puntos: FALTA AGREGAR PUNTOS"<<endl;//<<PuntajeJugador2<<endl<<endl;

    /*if (PuntajeJugador1 == 0 & PuntajeJugador2 == 0)
    {
        cout<<"QUE HACEN MIRANDO ESTO?? VAYAN A JUGAR Y VUELVAN!!!"<<endl<<endl;
    }



} */

void PausayLimpia() ///[5].-
{
    system("pause");
    system("cls");
}

void Limpia() ///[7].-
{
    system("cls");
}

void Pausa()  ///[8].-
{
    system("pause");
}

void Creditos() ///[9].-
{

    cout << "-----CREDITOS-----";

    cout << "----Equipo #35----";

    cout << "BAÑULS BRIZUELA, Fernando Emmanuel";

    cout << "Legajo #33493";

    cout << "OVIEDO, Gerardo Joaquin";

    cout << "Legajo #31647";

    cout << "SARZA, Ludmila";

    cout << "Legajo #32540";

    cout << "VAZQUEZ GONZALEZ, Patricia";

    cout << "Legajo #31174";
    cout << endl;
    PausayLimpia();
}

void MostrarNombres(string NombreJugadorLetras[]) ///[10].-
{

///aca poner un for para mostrar la cantidad de jugadores segun la cantidad de jugadores
    cout<<"                                              Jugador 1: "<<NombreJugadorLetras[0]<<endl;

    cout<<"                                              Jugador 2: "<<NombreJugadorLetras[1]<<endl<<endl;

}



void IngresarJugadores (int &CantidadJugadores) ///[12].-
{
    cout<<"Ingrese la cantidad de Jugadores: ";
    cin>>CantidadJugadores;
}

void MostrarRonda(int &Ronda) ///[13].-
{
    cout<<"                                              RONDA NUMERO: "<<Ronda<<endl<<endl;

}

