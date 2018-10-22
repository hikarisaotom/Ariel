 //Bienvenido
#include <string>
#include <iostream>
#include <vector>
#include "Producto.h"

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H



//Inicio clase
class Persona{

    //Atributos
    private:
        string nombre;
        int dinero;
        vector<Producto> listaProductos;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Persona();
        Persona(string,int,int);

        //metodos accersores / mutadores
        string getNombre();
        void setNombre(string);
        int getDinero();
        void setDinero(int);
        vector<Producto> getListaProductos();
        void setListaProductos(vector<Producto>);
        void pushproductos(Producto);

    //Destructor
    ~Persona();


};//Fin de la clase


#endif
