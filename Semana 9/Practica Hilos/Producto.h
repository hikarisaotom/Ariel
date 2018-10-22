//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef PRODUCTO_H
#define PRODUCTO_H


//Inicio clase
class Producto{

    //Atributos
    private:
        string nombre;
        int precio;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Producto();
        Producto(string,int);

        //metodos accersores / mutadores
        string getNombre();
        void setNombre(string);
        int getPrecio();
        void setPrecio(int);

    //Destructor
    ~Producto();


};//Fin de la clase


#endif 
