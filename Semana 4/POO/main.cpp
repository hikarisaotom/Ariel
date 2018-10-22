//void*     apuntador generico
//Dinamic-cast

#include "Alumno.h"
#include "miClase.h"
#include <iostream>
//Validar entradas investifagr cin




//libteria nueva
#include <typeinfo>

using namespace std;

//metodos de prueba de clases
void runClases();
//prueba con apuntadores
void runClasesPtr();
//Hrereece
void runAlumno();
//Dinamyca cast
void runDynamicCast();
//Istanciae algo en memoria
//new

int main(){

	//runClasesPtr();
   // runAlumno();
    runDynamicCast();
	return 0;
}

//prueba de dynamic cast
void runDynamicCast(){
    MiClase* miClase= new Alumno();
    Alumno* alumno = NULL;
    
    
    
    //type id   aqui e¿tira un numero que son clas cantodad de letras de lac clase
    cout<<"El tipo de dato es: "<<typeid(*miClase).name()<<endl;
    cout<<"El tipo de dato es: "<<typeid(alumno).name()<<endl;
    
    
    
    //Version primitiva del instancae of
    //comparar el tipo de dato contenido en el apuntador
    if(typeid(miClase) == typeid(MiClase*)){
            cout<<"Es un apuntador a MiClase."<<endl;
        
        
        
    }
    
    
    //compararel tipo de dato contenido en el apuntador
    if(typeid(*miClase)==typeid(Alumno)){
            cout<<"El contenido es un Alumno."<<endl;
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    //No compila: MIClase no tiene un metodo getCarrera
    //cout<<"La Carrera es: "<< miClase->getCarrera()<endl;
    
    
    alumno=dynamic_cast<Alumno*>(miClase);
    
    if(alumno != NULL){
            cout<< "La Carrera es: "<<alumno->getCarrera()<<endl;
        
    }
    
    
    
    miClase->setNombre("Reynold");
    
    cout<<"El nombre es: "<<alumno->getNombre()<<endl;
    
    
    
    delete miClase;
    
    
    
    
}







//preuba de la clase heredada
void runAlumno(){
        Alumno* alumno= new Alumno("Maritn",11711278,"Sistemas");
        
        cout<<"El nombre es: "<< alumno->getNombre()<<endl;
        cout<<"El el codifo es : "<< alumno->getCodigo()<<endl;
        cout<<"La carrera es: "<< alumno->getCarrera()<<endl;
        
        delete alumno;
}






void runClasesPtr(){
    
   
        MiClase* var= new MiClase("Martin",11711267);
        
        cout<<"El nombre 2 es: " << var->getNombre()<<endl;
        cout<<"La cuenta es: "<< var->getCodigo()<<endl;
        
        
        //si es apuntador si imprimer direccion en memoria
        cout<<var<<endl;
    
        delete var;
    
    
}



void runClases(){
	MiClase var("Martin",11711267); //var es el objetos

	cout<<"El nombre es: "<<var.getNombre()<<endl;
	cout<<"La cuenta es: "<<var.getCodigo()<<endl;


}//Fin run Clases
