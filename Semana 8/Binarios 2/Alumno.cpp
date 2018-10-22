//Metodo sets ade gets


#include <iostream>
#include <string>
#include "Alumno.h"
#include <fstream>

using namespace std;

//Cosntructor 1
Alumno::Alumno(string nombre,int cuenta,string carrera,int edad){
    this->nombre=nombre;
    this->cuenta=cuenta;
    this->carrera=carrera;
    this->edad=edad;
}//Fin constructor

//Constructor2
Alumno::Alumno(){

}//Fin constructor sencillo




//Metodo read
void Alumno:: read(ifstream& in){
        int size;
        in.read(reinterpret_cast<char*>(&size),sizeof(int));
        //buffer de nombre
        char nameBuffer[size];
        in.read(nameBuffer,size);
        
        nombre=nameBuffer;
        
        //cuenta
          in.read(reinterpret_cast<char*>(&cuenta),sizeof(int));
       /* in.read(reinterpret_cast<char*>(&size),sizeof(int));
        
        char numBuffer[size];
        in.read(numBuffer,size);
        
        cuenta=numBuffer;*/
        
        //carrera
        in.read(reinterpret_cast<char*>(&size),sizeof(int));
        char carreraBuffer[size];
        in.read(carreraBuffer,size);
        carrera=carreraBuffer;
    
        //edad
        in.read(reinterpret_cast<char*>(&edad),sizeof(int));
    
    
    
    
    
    
}




//Metodo write
void Alumno::write(ofstream& out){
        int size= nombre.size();
        //lenght el nombre y contenio
        out.write(reinterpret_cast<char*>(&size),sizeof(int));
        out.write(nombre.data(),size);  //retorna el string como apuntador de caracteres
        
        //cuenta
          out.write(reinterpret_cast<char*>(&cuenta),sizeof(int));
       /* size=cuenta.size();
        out.write(reinterpret_cast<char*>(&size),sizeof(int));
       out.write(cuenta.data(),size);*/
        
        //Carrera
        size=carrera.size();
        out.write(reinterpret_cast<char*>(&size),sizeof(int));
        out.write(carrera.data(),size);
        
        out.write(reinterpret_cast<char*>(&edad),sizeof(int));
    
    
    
    
    
    
    
}


ostream& operator<<(ostream& out, const Alumno &student){
        out<<"Nombre: "<<student.nombre<<" Cuenta: "<<student.cuenta<<" Carrera: "<<student.carrera<<" Edad: "<<student.edad<<endl;
        return out;
}

ifstream& operator>>(ifstream& in, Alumno& student){
        string buffer;
        //Leer una linea del acrchivo
        getline(in,buffer);
        string parse="";
        int cont=0;
        for(int i=0;i<buffer.size();i++){
                if(buffer[i]!=',')
                        parse+=buffer[i];
                else{
                        switch(cont){
                                case 0:
                                student.nombre=parse;
                                break;
                                case 1:
//                                student.cuenta=parse;
                                break;
                        }
                        cont++;

                }

        }
        return in;

}//Fin del ifstream
    
    
    
    



 
