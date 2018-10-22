//Metodo sets ade gets
#include "Persona.h"
#include "FireBender.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
FireBender::FireBender(string n,string m,int o,string p ,int num_cicatrices,int victorias):Persona(n, m, o, p){
    this->num_cicatrices=num_cicatrices;
    this->victorias=victorias;
}//Fin constructor

//Constructor2
FireBender::FireBender(){

}//Fin constructor sencillo

int FireBender::getNum_cicatrices(){
    return num_cicatrices;
}

void FireBender:: setNum_cicatrices(int num_cicatrices){

    this->num_cicatrices=num_cicatrices;

}

int FireBender::getVictorias(){
    return victorias;
}

void FireBender:: setVictorias(int victorias){

    this->victorias=victorias;

}

FireBender::~FireBender(){

    cout<<"La instancia de FireBender fue eliminada";

}
