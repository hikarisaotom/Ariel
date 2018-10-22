#include "Figura.h"
#include "Circulo.h"
#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

//ciclo de vida de apuntadores es un vector
void ejemploVector();

int main(){

    //goto ejmVector;

    Figura* figura= new Circulo(10);
    cout<<figura->toString()<<" \nSu area es: "<<figura->getArea()<<endl;

   

    vector<Figura*> miVector;
    //Se crean 10 circulos nuevos en el vector

    cout<<typeid(*figura).name()<<endl;

    cout<<"pol\n"<<endl;
    ejemploVector();


    
    delete figura;
    
    //Etiqueta
   // ejmVector:
    //cout<<"polla";

    return 0;
}//Fin del main

//get line
//getline(stream,retvaue);



//Ejemplp vector de apuntadores
void ejemploVector(){
    vector<Figura*> myVector;
    //llenar con instancias de circulo
    for(int i=0;i<=10;i++){
        myVector.push_back(new Circulo(i));
        //calcular el area total de las figuras
        double areaTotal=0;

        for(int i;i<myVector.size();i++){
            areaTotal += myVector[i]->getArea();


        }//Fin area total

        //mostrar resultados
        cout<<"El area total es :"<<areaTotal<<endl;

        //liberar memoria
        for(int i=0;i<myVector.size();i++){
            delete myVector[i];
            myVector[i]=NULL;
            

        }
        //Borrar las casillas del vector
        myVector.clear();





    }//Fin del for



}//Fin funcio vector

