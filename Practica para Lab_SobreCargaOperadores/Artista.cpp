#include "Artista.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Artista::Artista(string Nombre,vector<Cancion*> listaCanciones){
    this->Nombre=Nombre;
    this->listaCanciones=listaCanciones;
}//Fin constructor

//Constructor2
Artista::Artista(){

}//Fin constructor sencillo

string Artista::getNombre(){
    return Nombre;
}

void Artista:: setNombre(string Nombre){

    this->Nombre=Nombre;

}

vector<Cancion*>Artista::getListaCanciones(){
    return listaCanciones;
}

void Artista:: setListaCanciones(vector<Cancion*> listaCanciones){

    this->listaCanciones=listaCanciones;

}

Artista::~Artista(){

   

} 
 
