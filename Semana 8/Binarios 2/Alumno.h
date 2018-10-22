 
//Bienvenido
#include <string>
#include<iostream>
#include <fstream>

using namespace std;

#ifndef ALUMNO_H
#define ALUMNO_H


//Inicio clase
class Alumno{

    //Atributos
    private:
       


    //metodos publicos
    public:
        string nombre;
        int cuenta;
        string carrera;
        int edad;
        //prototipos de metodos
        //constructor
        Alumno();
        Alumno(string,int,string,int);

         void read(ifstream&);
        void write(ofstream&);
       
        int operator+(Alumno&);
        
        friend ostream& operator <<(ostream&,const Alumno&);
        friend istream& operator >>(istream&,Alumno&);
        ///	friend ostream &operator<<(ostream &, const Racional &);
       

    //Destructor
    //~Alumno();


};//Fin de la clase


#endif
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /*void write(ofstream&);
  * 
  * 
  * 
  */
