 //Metodo sets ade gets

#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;


//Cosntructor 1
/*Persona::Persona(string nombre,int dinero,int listaProductos){
    this->nombre=nombre;
    this->dinero=dinero;
    this->listaProductos=listaProductos;
}//Fin constructor*/

//Constructor2
Persona::Persona(){

}//Fin constructor sencillo

string Persona::getNombre(){
    return nombre;
}

void Persona:: setNombre(string nombre){

    this->nombre=nombre;

}

int Persona::getDinero(){
    return dinero;
}

void Persona:: setDinero(int dinero){

    this->dinero=dinero;

}

vector<Producto> Persona::getListaProductos(){
    return listaProductos;
}

void Persona:: setListaProductos(vector<Producto> listaProductos){

    this->listaProductos=listaProductos;

}

void Persona:: pushproductos(Producto producto){
    listaProductos.push_back(producto);
}

Persona::~Persona(){

    

}
