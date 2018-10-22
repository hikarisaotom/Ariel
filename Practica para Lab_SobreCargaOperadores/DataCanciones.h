#ifndef DATACANCIONES_H
#define DATACANCIONES_H

#include <vector>
#include <string>
#include "Cancion.h"

using namespace std;

class DataCanciones{
    private:
        Cancion* nuevaCancion(string);

    public:
        //Retorna los personjes en el archivo inidicado como parametro
        vector<Cancion*> getCanciones(string);
        void setCanciones(vector<Cancion*>);




};

#endif