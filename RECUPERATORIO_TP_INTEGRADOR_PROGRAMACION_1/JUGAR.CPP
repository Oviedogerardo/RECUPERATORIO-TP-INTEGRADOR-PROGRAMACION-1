#include <iostream>
#include <cstdlib>
#include "JUGAR.h"

using namespace std;

//FUNCIONES PARA EL FUNCIONAMIENTO DEL PROGRAMA.-

void MostrarMenu() /// [1]
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

void Fraces(int Frase)   /// [3a]
{
    string CambioFrase [4] = {"NOS VEMOS","HASTA LUEGO","GRACIAS POR JUGAR","SEE YOU SPACE COWBOY"};
    Frase = rand() % 4;

    if (Frase == 0)
    {
        cout<<CambioFrase[0];
    }

    if (Frase == 1)
    {
        cout<<CambioFrase[1];
    }

    if (Frase == 2)
    {
        cout<<CambioFrase[2];
    }

    if (Frase == 3)
    {
        cout<<CambioFrase[3];
    }
}



void PedirOpciones(int Opcion, int Frace,int NombreJugadorNumero[],std::string NombreJugadorLetras[])  /// [3]
{
    cout<<"Ingrese una opcion: ";
    cin >> Opcion;

    switch (Opcion)
    {

    case 0:
        Fraces(Frace);
        break;

    case 1:
        PedirNombres(NombreJugadorNumero,NombreJugadorLetras);




        break;

    }

}

void PedirNombres(int NombreJugadorNumero[],string NombreJugadorLetras[]) /// [4]
{
    cout<<"INGRESAR NOMBRE DEL JUGADOR "<<NombreJugadorNumero[0]<<":";
    cin>>NombreJugadorLetras[0];

    cout<<"INGRESAR NOMBRE DEL JUGADOR "<<NombreJugadorNumero[1]<<":";
    cin>>NombreJugadorLetras[1];

    cout<<NombreJugadorLetras[0]<<endl;

    cout<<NombreJugadorLetras[1]<<endl;
}

void Estadisticas ()
{


}
