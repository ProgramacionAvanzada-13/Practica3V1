#include <QCoreApplication>
/*#include <QDebug>
#include <iostream>
#include <windows.h>

#include "pokemon.h"
#include "pokebola.h"*/

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Vacio";

    return a.exec();
}

/*
    qInfo() << "Esta es uuna practica sobre pokemones";

    qInfo() << "Ingrese el numero de pokemones que quiere hacer pelear : ";
    int numPok;
    cin >> numPok;

    //Pokemon* pokemon[numPok]; //Declaramos un vector de referencias pokemon de longitud numPok
    //Pokebola* pokebola[numPok]; //Declaramos un vector de pokebolas

    //Estacion* canales[3];
    //canales[0] = new Estacion{&radio, 1130, "La Ke-Buena"};
    //Estacion *estacion{canales[i]};
    //estacion->broadcast("Estación Transmitiendo");

    int var1;
    for(var1=0; var1<numPok; var1++){
        qInfo() << "********************************************************";
        pokemon[var1] = new Pokemon(var1+1); //Creamos un nuevo pokemon que estará en la posición var1 de nuestro vector de pokemones
        Pokemon *pok{pokemon[var1]}; //Creamos un pokemon inicializado con nuestro pokemon[var1]

        qInfo() << "Vida";
        pok->setVida(); //Este pokemon es un objeto que puede llamar funciones del objeto;
        pok->setNombre();
        qInfo() << "Nombre";
        pok->getNombre();
        qInfo() << "Ataque";
        pok->CalcAtaque();
        Sleep(1);
        qInfo() << "Defensa";
        pok->CalcDefensa();
        qInfo() << "Informacion";
        pok->infoPokemon();
    }
*/
/* Des esta manera accedo a la informacion de un solo pokemon
Pokemon &pokemon3 = *pokemon[2];
pokemon3.infoPokemon();
*/
/* Generador de numeros aleatorios para el pokemon
Pokemon &pokrand = *pokemon[2];
qInfo() << pokrand.setRand();
qInfo() << pokrand.setRand();
qInfo() << pokrand.setRand();
qInfo() << pokrand.setRand();
qInfo() << pokrand.setRand();
qInfo() << pokrand.setRand();*/
/*
    qInfo() << "------------------------------------------";
    Pokemon *pok2{pokemon[0]};
    //pokemon[1]->infoPokemon();
    pok2->infoPokemon();
    qInfo() << "------------------------------------------";

    //Pokebola pokB(pokrand);

    //Pokebola pokB;

    int var2;
    for(var2=0; var2<numPok; var2++){
        qInfo() << "*******************************************";
        pokebola[var1] = new Pokebola(); //Creamos un nuevo pokemon que estará en la posición var1 de nuestro vector de pokemones
        Pokebola *pokB{pokebola[var2]};

        pokB->infoPB();
    }

    qInfo() << "------------------------------------------";
    Pokebola &pokrandB = *pokebola[2];
    pokrandB.infoPB();
    qInfo() << "------------------------------------------";
//Prueba main*/
