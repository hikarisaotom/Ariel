//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef EATRHBENDER_H
#define EATRHBENDER_H
#include "Persona.h"

//Inicio clase
class EatrhBender: public Persona{

    //Atributos
    private:
        int coles_cosechadas;
        int graduacion_ojos;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        EatrhBender();
        EatrhBender(int,int);

        //metodos accersores / mutadores
        int getColes_cosechadas();
        void setColes_cosechadas(int);
        int getGraduacion_ojos();
        void setGraduacion_ojos(int);

    //Destructor
    ~EatrhBender();


};//Fin de la clase


#endif

