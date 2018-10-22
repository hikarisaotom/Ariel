//Bienvenido
#include <string>
#include <iostream>
#include "Persona.h"
using namespace std;

#ifndef AIRBENDER_H
#define AIRBENDER_H


//Inicio clase
class AirBender: public Persona{

    //Atributos
    private:
        int cant_pelo;
        string color_flechas_cuerpos;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        AirBender();
        AirBender(int,string);

        //metodos accersores / mutadores
        int getCant_pelo();
        void setCant_pelo(int);
        string getColor_flechas_cuerpos();
        void setColor_flechas_cuerpos(string);

    //Destructor
    ~AirBender();


};//Fin de la clase


#endif
