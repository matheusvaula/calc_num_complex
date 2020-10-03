#include "Complexo.h"
#include<math.h>
namespace TP2{

Complexo::Complexo(float parteReal, float parteImaginaria):
    parteReal(parteReal),
    parteImaginaria(parteImaginaria)
{
}

void Complexo::set(float parteReal, float parteImaginaria){
    this->parteReal = parteReal;
    this->parteImaginaria = parteImaginaria;
}

QString Complexo::get()const{
    QString saida = QString::number(parteReal);
    if(QString::number(parteReal)!=0){
        saida += " + (";
    }
    saida += QString::number(parteImaginaria);
    saida +=")i";
    return saida;
}


Complexo  Complexo::operator + (Complexo &objeto)const{
    float auxParteReal = this->parteReal + objeto.parteReal;
    float auxParteImaginaria = this->parteImaginaria + objeto.parteImaginaria;
    Complexo aux(auxParteReal,auxParteImaginaria);
    return aux;
}
Complexo  Complexo::operator -(Complexo &objeto)const{
    float auxParteReal = this->parteReal - objeto.parteReal;
    float auxParteImaginaria = this->parteImaginaria - objeto.parteImaginaria;
    Complexo aux(auxParteReal,auxParteImaginaria);
    return aux;
}
Complexo  Complexo::operator *(Complexo &objeto)const{
    float auxParteReal = (this->parteReal*objeto.parteReal) - (this->parteImaginaria*objeto.parteImaginaria);
    float auxParteImaginaria = (this->parteReal*objeto.parteImaginaria)+(this->parteImaginaria*objeto.parteReal);
    Complexo aux(auxParteReal,auxParteImaginaria);
    return aux;
}
// (a+bi)*(c+di) = (ac-bd)+(ad+bc)i
Complexo Complexo::operator /(Complexo &objeto) const
{
    if(objeto.parteReal==0 && objeto.parteImaginaria==0)throw QString("divisão por 0");
    float auxParteReal =((this->parteReal *objeto.parteReal)+(this->parteImaginaria*objeto.parteImaginaria))/(objeto.parteReal*objeto.parteReal+objeto.parteImaginaria*objeto.parteImaginaria);
    float auxParteImaginaria = ((this->parteImaginaria*objeto.parteReal - this->parteReal *objeto.parteImaginaria)/(objeto.parteReal*objeto.parteReal+objeto.parteImaginaria*objeto.parteImaginaria));
    Complexo aux(auxParteReal, auxParteImaginaria);
    return aux;
}

//(a+bi)/(c+di) = (ac+bd)/(c²+d²) + ((bc-ad)/(c²+d²))i

}

