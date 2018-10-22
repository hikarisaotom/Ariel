//Matriz
#include <iostream>
#include <fstream>

using namespace std;

//provicionar la matriz de chars para el laberinto
char** provisionarMatriz(int);

// liberar memoria de la matriz
void liberarMatriz(char**&, int); //mandamos la refenciar del apuntador de apuntadores


// imprimir la matriz
void imprimirMatriz(char**, int);

//salir del laberinto: lab, size, x, y
bool salir(char**, int, int, int);


int  main(){
	//abrir el archivo
	ifstream file("laberinto.txt"); //colocarlo en el mismo directorio donde se esta ejecuntado

	int size = 0;
	char** labMatriz = NULL;
	// si el archivo existe
	if(file.is_open()){
		//leer el tamaño
		file>> size;
		
		//inincializar matriz n * n
		labMatriz = provisionarMatriz(size);		

		//leer la matriz del archivo
		for(int i= 0; i< size; i++){
			for(int j =0; j< size; j++){
				file>> labMatriz[i][j];
			}// fin del 2do for
		}// fin del 1er for

		file.close();

		//imprimir laberinto
		imprimirMatriz(labMatriz, size);

		//salir del laberinto
		salir(labMatriz, size, 1,0);

		cout<< endl;
                //imprimir laberinto
                imprimirMatriz(labMatriz, size);

		//liberar matriz
		liberarMatriz(labMatriz, size);
	}// fin idel if

	

	return 0;
}// fin del main


//provisionar matriz  size x size
char** provisionarMatriz(int size){
	char** retValue = new char*[size];
	
	for(int i =0; i<size; i++){
		retValue[i] = new char[size];

	}


	return retValue;

}// fin del metodo provicionar matriz

//liberar Matriz
void liberarMatriz(char**& matriz, int size){
	for(int i = 0; i<size; i++){
		delete[] matriz[i];// sin los corchetes solo se  borra la 1era casilla
		matriz[i] = NULL;
	}// fin del for


	delete[] matriz;
	matriz = NULL;
}// fin del metodo


//imprimir matriz
void imprimirMatriz(char** matriz, int size){
	for(int i = 0; i<size; i++){
		for(int j = 0; j<size; j++){
			cout<< matriz[i][j] << " ";
		}
		cout<< endl;
	}

}// fin del metodo

//salir del laberinto
bool salir(char** matriz, int size, int x, int y){
	bool salio = false;
	if(x>= 0 && x<=size && y>= 0 && y<=size ){
		
		if(/*y == size-1*/ matriz[x][y]='@'){// caso base
			matriz[x][y]='@';
			return true;
		}else{
			matriz[x][y]='*';
			if(x>0 && !salio){
				if(matriz[x-1][y] == '.' || matriz[x-1][y]=='@'){
					salio  = salir(matriz, size, x-1, y);
				}
			}// hacia arriba

                        if(x< size-1 && !salio){
                               if(matriz[x+1][y] == '.' || matriz[x+1][y]=='@'){
                                        salio  = salir(matriz, size, x+1, y);
                                }
                        }// hacia abajo

                        if(y< size -1 && !salio){
                                if(matriz[x][y+1] == '.' || matriz[x][y+1]=='@'){
                                        salio  = salir(matriz, size, x, y+1);
                                }
                        }// hacia derecha

                        if(y>0 && !salio){
                                if(matriz[x][y-1] == '.' || matriz[x][y-1]){
                                        salio  = salir(matriz, size, x, y-1);
                                }
                        }// hacia izquierda
					
					
			if(salio)
				matriz[x][y]='@';

			return salio;
		}
	}else{
		return false;
	}//fin de los casos


}//fin del metodo que busca la salida del laberinto












