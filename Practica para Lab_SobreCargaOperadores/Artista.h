//Bienvenido
#include <string>
#include <iostream>
#include "Personaje.h"

using namespace std;

#ifndef MAGO_H
#define MAGO_H


//Inicio clase
class Mago:public Personaje{

    //Atributos
    private:
    


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Mago();
        void poderEspecial();

            //metodos accersores / mutadores

            //Destructor
            ~Mago();

};//Fin de la clase


#endif