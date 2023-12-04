#ifndef POKEBOLA_H
#define POKEBOLA_H
#include <QDebug>

#include "pokemon.h"

/*
 * Principio de responsablidad unica
 *
 * La pokebola solo se va a encargar de atrapar o liberar pokemones,
 * todas las pokebolas creadas deben de estar vacias por defecto
 *
 * La pokebola solo se va a encargar de atrapar o liberar a un pokemon
 */

//! Una clase llamada Pokebola.
/*!
  Esta clase va acrear objetos Pokebola.
*/

class Pokebola
{
private:
    //! Una variable privada.
    /*!
      El unico contenido de una pokebola es un pokemon, que estara guardado en esta variable.
    */
    //Pokemon PokemonP; //Aquí se deberá guardar el pokemon que atrapemos
    //Pokemon* pokemon;
    QString IDPB;




public:

    //! Constructor de pokebolas.
    /*!
      Este constructor se va a encargar de crear pokebolas vacias, por defecto
    */
    Pokebola();

    //! Un destructor.
    /*!
      Creamos un destructor por defecto, lo usaremos mas tarde.
    */
    ~Pokebola();

    //! Un miembro normal que se encarga de modificar en contenido de una pokebola, agregando un pokemon a la pokebola.
    /*!
     * Atrapamos a un pokemon, con todas sus caracteristicas
      \sa Pokebola(), ~Pokebola(), Atrapar() and Liberar()
    */
    void Atrapar();

    //! Un miembro normal que se encarga de modificar en contenido de una pokebola, liberando el pokemon y dejando la pokebola vacia
    /*!
     * Liberamos al pokemon contenido
      \sa Pokebola(), ~Pokebola(), Atrapar() and Liberar()
    */
    void Liberar();

    void setIDPB();

    void infoPB();

};

#endif // POKEBOLA_H
