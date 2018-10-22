//Metodo sets ade gets

#include "Rectangulo.h"
#include <iostream>
#include <string>


using namespace std;

//Cosntructor 1
Rectangulo::Rectangulo(double largo,double ancho){
    this->largo=largo;
    this->ancho=ancho;
}//Fin constructor

//Constructor2
Rectangulo::Rectangulo(){
    largo=ancho=0;
}//Fin constructor sencillo

//Metodos polimorficps
double Rectangulo::getArea(){
    return largo*ancho;


}

double Rectangulo:: getPerimetro(){
    return largo+largo+ancho+ancho;




}


string Rectangulo:: toString(){
    return "Esto es rectangulo";



}





double Rectangulo::getLargo(){
    return largo;
}


double Rectangulo::getAncho(){
    return ancho;
}

