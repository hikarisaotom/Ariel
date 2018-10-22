#include <fstream>
#include <iostream>
#include <string>
#include "Alumno.h"
using namespace std;

void binAlumno();
void crear();
int main(){

    binAlumno();
    crear();
    
        return 0;
}



void binAlumno(){
        ofstream alumnos("Alumnos.dat",ios::binary);
        
        Alumno* alumno1= new Alumno("Claudia cortes",1711357,"Ingenieria en sistemas",19);
        
        alumno1->write(alumnos);
        alumnos.close();
    
    
    
    
}


void crear(){
         ifstream alumnos("Alumnos.dat",ios::binary);
          Alumno* alumno1= new Alumno();
          alumno1->read(alumnos);
        cout<<*alumno1;
}
/*

void writeAlumno(){
        Alumno* alumno = new Alumno("Martin","111111","Ing",20);
        cout<<*alumno;
        delete alumno;

}
*/