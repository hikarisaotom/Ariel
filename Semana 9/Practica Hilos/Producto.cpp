//Metodo sets ade gets

#include "Producto.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Producto::Producto(string nombre,int precio){
    this->nombre=nombre;
    this->precio=precio;
}//Fin constructor

//Constructor2
Producto::Producto(){

}//Fin constructor sencillo

string Producto::getNombre(){
    return nombre;
}

void Producto:: setNombre(string nombre){

    this->nombre=nombre;

}

int Producto::getPrecio(){
    return precio;
}

void Producto:: setPrecio(int precio){

    this->precio=precio;

}

Producto::~Producto(){

} 
