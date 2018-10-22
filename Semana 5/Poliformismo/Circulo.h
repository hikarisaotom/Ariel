//Bienvenido
#include <string>
#include <iostream>
#include "Figura.h"


#ifndef CIRCULO_H
#define CIRCULO_H


//Inicio clase
class Circulo: public Figura {

    //Atributos
    private:
        double radio;
        


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Circulo(double);
        Circulo();

        //metodos accersores / mutadores
        double getArea();
        //void setArea(double);
        double getPerimetro();
        double getRadio();
        //void setPerimetro(double);
        string toString();

    //Destructor
   // ~Circulo();


};//Fin de la clase


#endif
