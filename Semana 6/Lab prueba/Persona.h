using namespace std;

#ifndef PERSONA_H
#define PERSONA_H
#include <string>

//Inicio clase
class Persona{

    //Atributos
    private:
        string nacion;
        string nombre;
        int edad;
        string sexo;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        
        Persona(string,string,int,string);
	Persona();
        //metodos accersores / mutadores
        string getNacion();
        void setNacion(string);
        string getNombre();
        void setNombre(string);
        int getEdad();
        void setEdad(int);
        virtual string getSexo();
        void setSexo(string);

    //Destructor
    ~Persona();


};//Fin de la clase


#endif
