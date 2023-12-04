#include "pokebola.h"

Pokebola::Pokebola()
{
    qInfo() << "Construyendo una pokebola";
    setIDPB();
}

Pokebola::~Pokebola()
{
    qInfo() << "Destruyendo Pokebola";
}

void Pokebola::Atrapar()
{

}

void Pokebola::Liberar()
{

}

void Pokebola::setIDPB(){
    QTextStream qtin(stdin);
    qInfo() << "Ingresa el ID de la Pokebola : ";
    IDPB=qtin.readLine();
}

void Pokebola::infoPB()
{
    qInfo() << "El ID de tu pokebola es : " << IDPB;
}
