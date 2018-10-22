//Metodo sets ade gets

#include "AirBender.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
AirBender::AirBender(int cant_pelo,string color_flechas_cuerpos){
    this->cant_pelo=cant_pelo;
    this->color_flechas_cuerpos=color_flechas_cuerpos;
}//Fin constructor

//Constructor2
AirBender::AirBender(){

}//Fin constructor sencillo

int AirBender::getCant_pelo(){
    return cant_pelo;
}

void AirBender:: setCant_pelo(int cant_pelo){

    this->cant_pelo=cant_pelo;

}

string AirBender::getColor_flechas_cuerpos(){
    return color_flechas_cuerpos;
}

void AirBender:: setColor_flechas_cuerpos(string color_flechas_cuerpos){

    this->color_flechas_cuerpos=color_flechas_cuerpos;

}

AirBender::~AirBender(){

    cout<<"La instancia de AirBender fue eliminada";

}
