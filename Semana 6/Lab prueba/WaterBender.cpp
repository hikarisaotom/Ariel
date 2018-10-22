//Metodo sets ade gets

#include "WaterBender.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
WaterBender::WaterBender(string tribu_oringen,string arma_p){
    this->tribu_oringen=tribu_oringen;
    this->arma_p=arma_p;
}//Fin constructor

//Constructor2
WaterBender::WaterBender(){

}//Fin constructor sencillo

string WaterBender::getTribu_oringen(){
    return tribu_oringen;
}

void WaterBender:: setTribu_oringen(string tribu_oringen){

    this->tribu_oringen=tribu_oringen;

}

string WaterBender::getArma_p(){
    return arma_p;
}

void WaterBender:: setArma_p(string arma_p){

    this->arma_p=arma_p;

}

WaterBender::~WaterBender(){

    cout<<"La instancia de WaterBender fue eliminada";

}
