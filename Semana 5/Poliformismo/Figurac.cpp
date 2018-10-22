#include "Figura.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
/*Figura::Figura(double Area,double Perimetro){
    this->Area=Area;
    this->Perimetro=Perimetro;
}//Fin */

//Constructor2
/*Figura::Figura(){

}//Fin constructor sencillo*/

double Figura::getArea(){
    return -1;
}

/*void Figura:: setArea(double Area){

    this->Area=Area;

}*/

double Figura::getPerimetro(){
    return -1;
}

/*void Figura:: setPerimetro(double Perimetro){

    this->Perimetro=Perimetro;

}*/


string Figura:: toString(){
        return "Esto es una figura.";
}

/*Figura::~Figura(){

    cout<<"La instancia de Figura fue eliminada";

}*/
