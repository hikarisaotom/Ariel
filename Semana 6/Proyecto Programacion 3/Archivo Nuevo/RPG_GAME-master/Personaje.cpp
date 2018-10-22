#include "Personaje.h"
#include "Ataque.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
/*Personaje::Personaje(string nombre,int HP,int ataqueNormal,int ataqueEspecial,int defensa,int poderEspecial){
    this->nombre=nombre;
    this->HP=HP;
    this->ataqueNormal=ataqueNormal;
    this->ataqueEspecial=ataqueEspecial;
    this->defensa=defensa;
    this->poderEspecial=poderEspecial;
}//Fin constructor*/

//Constructor2
Personaje::Personaje(){

}//Fin constructor sencillo

string Personaje::getNombre(){
    return nombre;
}

void Personaje:: setNombre(string nombre){

    this->nombre=nombre;

}

int Personaje::getHP(){
    return HP;
}

void Personaje:: setHP(int HP){

    this->HP=HP;

}

Ataque Personaje::getAtaqueNormal(){
    return ataqueNormal;
}

void Personaje:: setAtaqueNormal(Ataque ataqueNormal){

    this->ataqueNormal=ataqueNormal;

}

Ataque Personaje::getAtaqueEspecial(){
    return ataqueEspecial;
}

void Personaje:: setAtaqueEspecial(Ataque ataqueEspecial){

    this->ataqueEspecial=ataqueEspecial;

}

int Personaje::getDefensa(){
    return defensa;
}

void Personaje:: setDefensa(int defensa){

    this->defensa=defensa;

}

void Personaje:: poderEspecial(){
    cout<<"No deberia estar";



}

Personaje::~Personaje(){

    cout<<"La instancia de Personaje fue eliminada";

}
