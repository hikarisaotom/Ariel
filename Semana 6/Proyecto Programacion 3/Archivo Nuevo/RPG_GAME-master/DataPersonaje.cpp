#include "DataPersonaje.h"

#include "Mago.h"
#include "Brute.h"
#include "Assassin.h"

#include <fstream>

//#include <vector>
//#include <string>

using namespace std;


Personaje* DataPersonaje::parsePersonaje(string line){
    Personaje* retval;

    int HP,tipo,defensa,especial;
    vector<string> temp;
    string acum;

    for(int i=0; i<line.size();i++){
        if(line[i]!=' ' && line[i]!=' ')
            acum+= line[i];
        else{

            temp.push_back(acum);
            acum="";
        }

    }

    

    return retval;

}

vector<Personaje*> DataPersonaje:: getPersonajes(string file){
    vector<Personaje*> retval;

    //strng a carater
    //el string.c_str()

    //abrir archivo
   ifstream personajes (file.c_str());

    //mientras hay lineas en el archivo
    if(personajes.is_open()){
        while(!personajes.eof()){
            //Leer una linea
            string line;
            getline(personajes,line);

            //Parsearla linea y agrear al vector
            Personaje* leido= parsePersonaje(line);
            //TODo: valdar
            retval.push_back(leido);

        }

        //cerrar al archivo}

    }


}
