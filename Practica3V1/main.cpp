#include <QCoreApplication>
#include <QDebug>
#include <iostream>

#include "pokemon.h"
#include "pokebola.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Esta es uuna practica sobre pokemones";

    qInfo() << "Ingrese el numero de pokemones que quiere hacer pelear : ";
    int numPok;
    cin >> numPok;

    Pokemon* pokemon[numPok]; //Declaramos un vector de referencias pokemon de longitud numPok
    Pokebola* pokebola[numPok]; //Declaramos un vector de pokebolas

    //Estacion* canales[3];
    //canales[0] = new Estacion{&radio, 1130, "La Ke-Buena"};
    //Estacion *estacion{canales[i]};
    //estacion->broadcast("Estación Transmitiendo");

    int var1;
    for(var1=0; var1<numPok; var1++){
        qInfo() << "++++++++++++++++++++++++++++++++++++++++";
        pokemon[var1] = new Pokemon(var1+1); //Creamos un nuevo pokemon que estará en la posición var1 de nuestro vector de pokemones
        Pokemon *pok{pokemon[var1]}; //Creamos un pokemon inicializado con nuestro pokemon[var1]
        /*
    pok->setVida(); //Este pokemon es un objeto que puede llamar funciones del objeto;
    pok->setNombre();
    pok->getNombre();
    pok->infoPokemon();
    */
        pok->infoPokemon();
    }

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

    Pokemon &pokrand = *pokemon[2];

    //Pokebola pokB(pokrand);

    //Pokebola pokB;

    int var2;
    for(var2=0; var2<numPok; var2++){
        qInfo() << "++++++++++++++++++++++++++++++++++++++++";
        pokebola[var1] = new Pokebola(); //Creamos un nuevo pokemon que estará en la posición var1 de nuestro vector de pokemones
        Pokebola *pokB{pokebola[var1]};
        pokB->infoPB();
    }
//Prueba main
    return a.exec();
}
