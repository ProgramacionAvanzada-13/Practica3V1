#ifndef POKEMON_H
#define POKEMON_H

#include <QDebug>
#include <QObject>
//Seria apropiado una funcion que nos diga todas las caracteristicas de nuestro pokemon

//! Una clase llamada Pokemon.
/*!
  Esta clase va a crear Pokemones.
*/
class Pokemon:public QObject
{
    Q_OBJECT
private:
    //! Una variable privada llamada Vida.
    /*!
      Esta variable contendra la vida que tiene nuestro pokemon.
    */
    short Vida;

    //! Una variable Qstring Nombre.
    /*!
      Todo pokemon debe de llevar un nombre, ¡puedes eligir el que quieras!
    */
    QString Nombre;

    //! Una variable Qstring Energia.
    /*!
      Las energías vienen siendo: Normal, Planta, Fuego, Agua, Lucha, Relámpago, Psíquica, Oscuridad, Acero, Dragón y Hada.
    */
    QString Energia; //No se va a usar

    //! Una variable entera Etapa.
    /*!
      Es la etapa del Pokémon en sus evoluciones
    */
    int Etapa; //No se va a usar

    //! Una variable Qstring Habilidad.
    /*!
      Es la habilidad de dicha carta, antes eran conocidos como Poké-Poder/Cuerpox
    */
    int Habilidad;//Hará de nuesrta variable aleatoria

    //! Una variable entera Ataque.
    /*!
      Vienen subdivididos en Ataque, Daño y Efecto (algunas veces el Efecto potencia el Ataque).
    */
    int Ataque;

    //! Una variable entera Defensa.
    /*!
      Es la debilidad del Pokémon hacia un ataque/Es el daño que se le resta al ataque
    */
    float Defensa;

    //! Una variable que identifica a nuestro pokemon de los demás.
    /*!
      Es la debilidad del Pokémon hacia un ataque/Es el daño que se le resta al ataque
    */
    int ID;

public:
    //! Constructor de pokemones.
    /*!
      Aqui vamos a crear pokemones y sus caracteristicas principales
    */
    explicit Pokemon(int num, QObject *parent = nullptr);

    //! Destructor de pokemones.
    /*!
      Destruir un pokemon?
    */
    virtual ~Pokemon();

    //! Funcion de calcular el daño.
    /*!
     * Esta funcion calcula el daño que recibe nuestro pokemon, considerando los atributos del otro pokemon.
      \sa Pokemon(), ~Pokemon() and CalcAtaque()
    */
    void CalcDefensa();

    //! Funcion de calcular el ataque.
    /*!
     * Esta funcion calcula el ataque que inflinge nuestro pokemon, considerando todos sus atributos.
      \sa Pokemon(), ~Pokemon() and CalcDaño()
    */
    void CalcAtaque();

    //! Funcion para asignar la viad.
    /*!
     * Esta funcion asigna un valor de vida estandar a cada pokemon.
      \sa Pokemon(), ~Pokemon() and CalcDaño()
    */
    void setVida();

    //! Funcion para visualizar la informacion del pokemon.
    /*!
     * Esta funcion asigna un valor de vida estandar a cada pokemon.
      \sa Pokemon(), ~Pokemon() and CalcDaño()
    */
    void infoPokemon();

    //! Funcion para darle nombre al pokemon.
    /*!
     * Esta funcion asigna un valor de vida estandar a cada pokemon.
      \sa Pokemon(), ~Pokemon() and CalcDaño()
    */
    void setNombre();
    QString getNombre();

    //! Funcion para que el pokemon genere un numero aleatorio.
    /*!
     * Esta funcion asigna un valor de vida estandar a cada pokemon.
      \sa Pokemon(), ~Pokemon() and CalcDaño()
    */
    int setRand();

    friend class Pokebola;
    friend class Arena;


signals:


public slots:


};

#endif // POKEMON_H
//Holi
