#include <iostream>
#include <stdlib.h>
#include<fstream> // para los archivos de texto

using namespace std;

void escribir();


int main(){
	escribir();
	return 0;
}


//Escribir archivo nomral
void escribir(){
	ofstream archivo;
	
	archivo.open("prueba.txt",ios::app); //Abriendo el archivo     //Abre el archivo con el punterp al final, ios::app
																	/* binary    //binario
																	    in
																		out
																		trunc        //borra  
																		  
																		  
																		  
																		  */
	

	
	if(archivo.fail()){  ///Error al abrie el archivo
		cout<<"No se pudo abrir el archivo";
		exit(1); //Parte de la libreria stlib.h
		
	}
	
	archivo<<"Pije pendejo usted verdad,jodese";
	
	archivo.close();//Cerrar el archivo
	
	
	
	
	
	
}//Fin del metodo escribir

void escribirPidiendoalUsuario(){
		//pedirle a l susuria el nombre
	string nombre;
	cout<<"Escriba el nombre del archivo";
	getline(cin,nombre);
	
		ofstream archivo;
	
	archivo.open(nombre.c_str(),ios::out); //Abriendo el archivo
	

	
	if(archivo.fail()){  ///Error al abrie el archivo
		cout<<"No se pudo abrir el archivo";
		exit(1); //Parte de la libreria stlib.h
		
	}
	
	archivo<<"Pije pendejo usted verdad";
	
	archivo.close();//Cerrar el archivo
	
	
	
	
	
}

//El usuario ingresa el texto
void escribi3(){
	
		//pedirle a l susuria el nombre
	string nombre,frase;
	cout<<"Escriba el nombre del archivo";
	getline(cin,nombre);
	
		ofstream archivo;
	
	archivo.open(nombre.c_str(),ios::out); //Abriendo el archivo
	

	
	if(archivo.fail()){  ///Error al abrie el archivo
		cout<<"No se pudo abrir el archivo";
		exit(1); //Parte de la libreria stlib.h
		
	}
	
	cout<<"Escriba lo que le pegeu la gana: ";
	getline(cin,frase);
	
	
	archivo<<frase;
	
	archivo.close();//Cerrar el archivo
	
	
	
}






//Leer archivos de texto
void leerarchivo(){
	
	ifstream archivo;
	string texto;
	archivo.open("programacion.txt",ios::in);
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close();
	
	
	
}
