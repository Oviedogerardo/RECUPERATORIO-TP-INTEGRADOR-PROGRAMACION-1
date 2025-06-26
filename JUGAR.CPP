//FUNCIONES PARA EL FUNCIONAMIENTO DEL PROGRAMA.-

void MostrarMenu()
{      
        cout<<"                         _______   ____________  _______   ______  ___    ____  ____  _____ "<<endl;
        cout<<"                        / ____/ | / / ____/ __  \/ ____/ | / / _ _ \/   |  / __ \\/ _ \ /  ___/ "<<endl;
        cout<<"                       / __/ /  |/ / /_  / /_/ / __/ /  |/ / / / / /| | / / / / / //\__  \\  "<<endl;
        cout<<"                      / /___/ /|  / __/ / _, _/ /___/ /|  / /_/ / ___ |/ /_/ / /_//___/ /  "<<endl;
        cout<<"                     /_____/_/ |_/_/   /_/ |_/_____/_/ |_/_____/_/  |_/_____/\____//____/   "<<endl;
        cout<<""<<endl<<endl<<endl;
}

void MostrarOpciones()
{
rlutil::locate(30,10);
        cout<<"+---------------------+"<<endl;
        rlutil::locate(30,11);
        cout<<"|1 - JUGAR            |"<<endl;
        rlutil::locate(30,12);
        cout<<"|2 - ESTADISTICAS     |"<<endl;
        rlutil::locate(30,13);
        cout<<"|3 - CREDITOS         |"<<endl;
        rlutil::locate(30,14);
        cout<<"|0 - SALIR            |"<<endl;
        rlutil::locate(30,15);
        cout<<"+---------------------+"<<endl;
}

void PedirOpciones()
{

CambioFrase[4] = rand % 4 + 1; //PARA ELEGIR UNA FRASE AL AZAR DEPENDIENDO DE EL NUMERO

rlutil::locate(30,18);
        cout<<"Ingrese una opcion: ";
        cin >> opcion;

switch (opcion)
        {

        case 0: (aca hacer una funcion para mostrar distintos carteles de despedidas)
if (CambioFrase == 1)
{
//PONER COLOR ACA
cout<<"NOS VEMOS"<<endl;
}

if (CambioFrase == 2)
{
//PONER COLOR ACA
cout<<"HASTA LUEGO"<<endl;
}

if (CambioFrase == 3)
{
//PONER COLOR ACA
cout<<"GRACIAS POR JUGAR"<<endl;
}

if (CambioFrase == 1)
{
//PONER COLOR ACA
cout<<"NOS VEMOS"<<endl;
}


                nos vemos
                hasta luego
                see you space cowboy

            cout << "Gracias por jugar" << endl << endl << endl;
            break;

        case 1:



