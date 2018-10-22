//Bienvenido
#include <string>
#include <iostream>
#include "Persona.h"

using namespace std;

#ifndef NONBENDER_H
#define NONBENDER_H


//Inicio clase
class NonBender: public Persona{

    //Atributos
    private:
        string trabajo;
        int fuerza;
        int velocidad;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        NonBender();
        NonBender(string,int,int);

        //metodos accersores / mutadores
        string getTrabajo();
        void setTrabajo(string);
        int getFuerza();
        void setFuerza(int);
        int getVelocidad();
        void setVelocidad(int);

    //Destructor
    ~NonBender();


};//Fin de la clase


#endif
