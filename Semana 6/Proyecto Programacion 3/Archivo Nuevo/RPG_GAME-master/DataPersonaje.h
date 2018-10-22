#ifndef DATAPERSONAJE_H
#define DATAPERSONAJE_H

#include "Personaje.h"
#include <vector>
#include <string>

using namespace std;

class DataPersonaje{
    private:
        Personaje* parsePersonaje(string);

    public:
        //Retorna los personjes en el archivo inidicado como parametro
        vector<Personaje*> getPersonajes(string);




};

#endif