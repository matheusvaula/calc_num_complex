#ifndef COMPLEXO_H//Nome : Matheus de Carvalho Vaula
#define COMPLEXO_H//Matricula : 2016.1.0033.0376-1
#include<QString>
namespace TP2{

class Complexo
{
private:
    float parteReal;
    float parteImaginaria;

public:
    Complexo(float parteReal, float parteImaginaria);
    void set(float parteReal, float parteImaginaria);
    QString get()const;
    Complexo operator +(Complexo &objeto)const;
    Complexo operator -(Complexo &objeto)const;
    Complexo operator *(Complexo &objeto)const;
    Complexo operator /(Complexo &objeto)const;
    bool operator == (Complexo &objeto)const{if(this->parteReal==objeto.parteReal && this->parteImaginaria==objeto.parteImaginaria)return true;else return false;}
    bool operator != (Complexo &objeto)const {if(this->parteReal!=objeto.parteReal || this->parteImaginaria!=objeto.parteImaginaria)return true;else return false;}
};
}

#endif // COMPLEXO_H
