//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef WATERBENDER_H
#define WATERBENDER_H
#include "Persona.h"

//Inicio clase
class WaterBender: public Persona{

    //Atributos
    private:
        string tribu_oringen;
        string arma_p;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        WaterBender();
        WaterBender(string,string);

        //metodos accersores / mutadores
        string getTribu_oringen();
        void setTribu_oringen(string);
        string getArma_p();
        void setArma_p(string);

    //Destructor
    ~WaterBender();


};//Fin de la clase


#endif
