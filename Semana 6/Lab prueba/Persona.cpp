//Metodo sets ade gets

#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Persona::Persona(string nacion,string nombre,int edad,string sexo){
    this->nacion=nacion;
    this->nombre=nombre;
    this->edad=edad;
    this->sexo=sexo;
}//Fin constructor

//Constructor2
Persona::Persona(){

}//Fin constructor sencillo

string Persona::getNacion(){
    return nacion;
}

void Persona:: setNacion(string nacion){

    this->nacion=nacion;

}

string Persona::getNombre(){
    return nombre;
}

void Persona:: setNombre(string nombre){

    this->nombre=nombre;

}

int Persona::getEdad(){
    return edad;
}

void Persona:: setEdad(int edad){

    this->edad=edad;

}

string Persona::getSexo(){
    return sexo;
}

void Persona:: setSexo(string sexo){

    this->sexo=sexo;

}

Persona::~Persona(){

    cout<<"La instancia de Persona fue eliminada";

}
