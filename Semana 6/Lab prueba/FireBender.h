//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef FIREBENDER_H
#define FIREBENDER_H
#include "Persona.h"
#include <string>
//Inicio clase
class FireBender: public Persona{

    //Atributos
    private:
        int num_cicatrices;
        int victorias;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        FireBender();
        FireBender(string,string,int,string,int,int);

        //metodos accersores / mutadores
        int getNum_cicatrices();
        void setNum_cicatrices(int);
        int getVictorias();
        void setVictorias(int);

    //Destructor
    ~FireBender();


};//Fin de la clase


#endif
