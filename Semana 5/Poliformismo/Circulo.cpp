//Metodo sets ade gets

#include "Circulo.h"
#include <iostream>
#include <string>
#include <sstream>
using std::stringstream;
#define PI 3.14159265
///using namespace std;

//Cosntructor 1
Circulo::Circulo(double radio){
   
    this->radio=radio;
}//Fin constructor

//Constructor2
Circulo::Circulo(){
    radio=1;

}//Fin constructor sencillo

double Circulo::getArea(){
    return PI*radio*radio;
}

/*void Circulo:: setArea(double Area){

    this->Area=Area;

}*/

double Circulo::getPerimetro(){
    return PI*2*radio;
}

/*void Circulo:: setPerimetro(double Perimetro){

    this->Perimetro=Perimetro;

}*/

double Circulo:: getRadio(){
    return radio;
}

string Circulo:: toString(){
        string retValue;
        //Declarar/ instanciar el stringstream
        stringstream str;
        //LLenar stringstream
        str<<"Esto es un circulo, y su radio es: "<<radio;
        str>>retValue;
        return retValue;
    
    
}
/*void Circulo:: setRadio(double radio){

    this->radio=radio;

}*/

/*Circulo::~Circulo(){

    cout<<"La instancia de Circulo fue eliminada";

}*/
