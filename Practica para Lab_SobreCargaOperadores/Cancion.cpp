//Metodo sets ade gets

#include "Cancion.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Cancion::Cancion(string nombre,int duracion,string genero){
    this->nombre=nombre;
    this->duracion=duracion;
    this->genero=genero;
}//Fin constructor

//Constructor2
Cancion::Cancion(){

}//Fin constructor sencillo

string Cancion::getNombre(){
    return nombre;
}

void Cancion:: setNombre(string nombre){

    this->nombre=nombre;

}

int Cancion::getDuracion(){
    return duracion;
}

void Cancion:: setDuracion(int duracion){

    this->duracion=duracion;

}

string Cancion::getGenero(){
    return genero;
}

void Cancion:: setGenero(string genero){

    this->genero=genero;

}

Cancion* Cancion:: operator+(Cancion& cancion){
    Cancion* aux= new Cancion();
    
    aux->setNombre(this->getNombre()+"-"+cancion.getNombre());
    aux->setDuracion(this->getDuracion()+cancion.getDuracion());
    aux->setGenero(this->getGenero()+"-"+cancion.getGenero());

return aux;
}

bool Cancion:: operator==(Cancion& cancion){
    bool igual;

    if(this->getDuracion()==cancion.getDuracion()){
        igual=true;
    }else{
        igual=false;
    }
    return igual;


}

Cancion::~Cancion(){


}