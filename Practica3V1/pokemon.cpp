#include <QString>
#include <QTextStream>
#include <iostream>
#include <sstream>
#include <random>
#include <chrono>
#include <windows.h>

#include "pokemon.h"

using namespace std;

Pokemon::Pokemon(int num, QObject *parent)
{
    ID=num;
    qInfo() << "Construyendo un pokemon con identificador : " << ID;
    /*setVida(); //Este pokemon es un objeto que puede llamar funciones del objeto;
    setNombre();
    getNombre();
    CalcAtaque();
    Sleep(1);
    CalcDefensa();
    //infoPokemon();*/
}

Pokemon::~Pokemon()
{
    qInfo() << "Destruyendo Pokemon";
}

void Pokemon::CalcDefensa()
{
    Defensa=(5+(setRand()))/100.0;
}

void Pokemon::CalcAtaque()
{
    Ataque=75+(setRand());
}

void Pokemon::setVida()
{
    Vida=1000;
}

void Pokemon::setNombre(){
    QTextStream qtin(stdin);
    qInfo() << "Ingresa el nombre de tu pokemon : ";
    Nombre=qtin.readLine();
}

QString Pokemon::getNombre(){
    return Nombre;
}

int Pokemon::setRand()
{
    unsigned int semilla = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine motor2(semilla);
    uniform_int_distribution<short> disEntera{0,45};

    int numRand = disEntera(motor2);

    //qInfo() << "Un numero aleatorio : " << numRand;

    Habilidad=numRand;

    return numRand;
}

void Pokemon::infoPokemon()
{

    qInfo() << "El nombre del pokemon es : " << Nombre;
    qInfo() << "La vida del pokemon es : " << Vida;
    qInfo() << "El ataque del pokemon es : " << Ataque;
    qInfo() << "La defensa del pokemon es : " << Defensa*100 << "%";
}
