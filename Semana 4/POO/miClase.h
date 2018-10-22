#include <string>

using namespace std;

#ifndef MICLASE_H
#define MICLASE_H

class MiClase{
	//atributos o metodos privados
	private:
		int codigo;
		string nombre;
	

	//metodos publicos
	public:
		//prototipos de metodos
		//constructor
		MiClase(string,int);
		MiClase();
		//metodos accersores / mutadores
		//
        //Hacer poliformivca
        //marcar como virtual
		//virtual int getCodigo(); para hacerla poliformica
        int getCodigo();
		void setCodigo(int);
		string getNombre();
		void setNombre(string);


	//destructor
	//es publico, mismo nombre de la clase, no lleva parametros, solo puede haber uno.
	~MiClase();
















};









#endif











