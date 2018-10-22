//netbenas
//atom
//visual studio code
//Bienvenido
#include <string>
#include <iostream>


using namespace std;

#ifndef FIGURA_H
#define FIGURA_H


//Inicio clase
class Figura{

    //Atributos
    //private:
        


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
       // Figura();
       // Figura(double,double);

        //metodos accersores / mutadores
        //Hacer virual puro =0
        virtual double getArea();
      
        virtual double getPerimetro();
       
        virtual string toString();

    


};//Fin de la clase


#endif
