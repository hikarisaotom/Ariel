//Metodo sets ade gets

#include "NonBender.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
NonBender::NonBender(string trabajo,int fuerza,int velocidad){
    this->trabajo=trabajo;
    this->fuerza=fuerza;
    this->velocidad=velocidad;
}//Fin constructor

//Constructor2
NonBender::NonBender(){

}//Fin constructor sencillo

string NonBender::getTrabajo(){
    return trabajo;
}

void NonBender:: setTrabajo(string trabajo){

    this->trabajo=trabajo;

}

int NonBender::getFuerza(){
    return fuerza;
}

void NonBender:: setFuerza(int fuerza){

    this->fuerza=fuerza;

}

int NonBender::getVelocidad(){
    return velocidad;
}

void NonBender:: setVelocidad(int velocidad){

    this->velocidad=velocidad;

}

NonBender::~NonBender(){

    cout<<"La instancia de NonBender fue eliminada";

}
