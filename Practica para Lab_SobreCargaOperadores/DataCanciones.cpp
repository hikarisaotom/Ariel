#include <iostream>
#include "DataCanciones.h"
#include <fstream>
#include <string>
#include <stdlib.h>



using namespace std;


Cancion* DataCanciones::nuevaCancion(string line){
    Cancion* temp= new Cancion();

    

    int duracion;
    string nombre,genero;
    vector<string> lista;
    string acum;

    for(int i=0; i<line.size();i++){
        if(line[i]!=',')
            acum+= line[i];
        else{

            lista.push_back(acum);
            acum="";
        }

    }

    string durac=lista[2];
    nombre=lista[0];
    genero=lista[1];
    duracion=atoi(durac.c_str());

    cout<<"1. nombre "<<nombre<<endl;
    cout<<"1. nombre "<<genero<<endl;
    cout<<"1. nombre "<<duracion<<endl;
    
    
    temp->setNombre(nombre);
    temp->setGenero(genero);
    temp->setDuracion(duracion);


    return temp;

}

vector<Cancion*> DataCanciones:: getCanciones(string file){
    vector<Cancion*> retval;

    //strng a carater
    //el string.c_str()

    //abrir archivo
   ifstream canciones (file.c_str());

    //mientras hay lineas en el archivo
    if(canciones.is_open()){
        while(!canciones.eof()){
            //Leer una linea
            string line;
            getline(canciones,line);
            if(line=="."){
                break;
            }

            //Parsearla linea y agrear al vector
            Cancion* leido= nuevaCancion(line);
            //TODO: valdar
            retval.push_back(leido);

        }

        //cerrar al archivo}
        canciones.close();

    }

    return retval;


}


void DataCanciones:: setCanciones(vector<Cancion*> lista){

    ofstream canciones;
    
    canciones.open("probando.txt",ios::out);


	if(canciones.fail()){  ///Error al abrie el archivo
		cout<<"No se pudo abrir el archivo";
		exit(1); //Parte de la libreria stlib.h
		
	}

    for(int i=0;i<lista.size();i++){
        canciones<<lista[i]->getNombre()<<","<<lista[i]->getGenero()<<","<<lista[i]->getDuracion()<<","<<"\n";
    }
	
	
	
	canciones.close();//Cerrar el archivo



}
