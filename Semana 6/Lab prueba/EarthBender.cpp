//Metodo sets ade gets

#include "EatrhBender.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
EatrhBender::EatrhBender(int coles_cosechadas,int graduacion_ojos){
    this->coles_cosechadas=coles_cosechadas;
    this->graduacion_ojos=graduacion_ojos;
}//Fin constructor

//Constructor2
EatrhBender::EatrhBender(){

}//Fin constructor sencillo

int EatrhBender::getColes_cosechadas(){
    return coles_cosechadas;
}

void EatrhBender:: setColes_cosechadas(int coles_cosechadas){

    this->coles_cosechadas=coles_cosechadas;

}

int EatrhBender::getGraduacion_ojos(){
    return graduacion_ojos;
}

void EatrhBender:: setGraduacion_ojos(int graduacion_ojos){

    this->graduacion_ojos=graduacion_ojos;

}

EatrhBender::~EatrhBender(){

    cout<<"La instancia de EatrhBender fue eliminada";

}
