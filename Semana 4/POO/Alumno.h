#include "miClase.h"
#include <string>
using namespace std;

#ifndef ALUMNO_H	
#define ALUMNO_H

class Alumno: public MiClase{
	private:string carrera;

	public:

		Alumno();
		//nimbre,codigo,carrera
		Alumno(string,int,string);

		//accesores y mutadoers
		void setCarrera(string);
		string getCarrera();



};

#endif
