//Bienvenido
#include <string>
#include <iostream>
#include "Figura.h"

using namespace std;

#ifndef RECTANGULO_H
#define RECTANGULO_H


//Inicio clase
class Rectangulo: public Figura {

    //Atributos
    private:
        double largo;
        double ancho;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Rectangulo();
        Rectangulo(double,double);

        //metodos accersores / mutadores
        double getLargo();
        //void setLargo(double);
        double getAncho();
        double getArea();
        double getPerimetro();
        virtual string toString();


   


};//Fin de la clase


#endif