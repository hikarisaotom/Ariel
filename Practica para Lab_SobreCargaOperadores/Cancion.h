//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef CANCION_H
#define CANCION_H


//Inicio clase
class Cancion{

    //Atributos
    private:
        string nombre;
        int duracion;
        string genero;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Cancion();
        Cancion(string,int,string);

        //metodos accersores / mutadores
        string getNombre();
        void setNombre(string);
        int getDuracion();
        void setDuracion(int);
        string getGenero();
        void setGenero(string);
        Cancion* operator+(Cancion&);
        bool operator==(Cancion&);

    //Destructor
    ~Cancion();


};//Fin de la clase


#endif 
