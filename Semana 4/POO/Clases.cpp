#include "miClase.h" //las comillas son apra indicar que se encuentra en este lugar
#include<iostream>
#include<string>

using namespace std;


MiClase::MiClase(string pNombre,int  pCodigo){
    nombre=pNombre;
    codigo=pCodigo;
    
    
    
    
    
}//Fin cosntructor

MiClase::MiClase(){
    this->nombre= "Juan Pueblo"; //sepuede usar this   this->nombre="Juan";
    codigo=504;
    
    
    
}//Fin constructos sencillo

           //Metodos
int MiClase::getCodigo(){
        return codigo;
    
    
}

void MiClase::setCodigo(int pCodigo){
        codigo=pCodigo;
    
    
    
}



string MiClase::getNombre(){
        return nombre;
    
}


void MiClase::setNombre(string pNombre){
    nombre=pNombre;
    
}


//desstructior
MiClase::~MiClase(){
    cout<<"La instancia fue eliminada"<<endl;
    
}






//int main(){
    //La POO permite la reutilizacion de codigos y ademas permite eficiencia en el codifo
    //las calses estan compestas de dos archivos .h
    //buenas practicas
    //miClase
    //miVariable
    
    
    
    
    
//    return 0;
//}//fin del main
