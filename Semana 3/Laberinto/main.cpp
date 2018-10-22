#include <iostream>
using namespace std;
//PROTOTIPOS.

//leer tamano.

int getsize();
//MUestra un menu y valida la entrada.
int menu();

//reserva memoria dinamica para un arreglo de enteros, recibe de parametros el
//size del arreglo.
int * createArray(int);
//Libera la memoria del arreglo.
void clearArray(int*);//Prototipo de la funcion.

//Imprime el contenido del arreglo.
void printArray(int*, int);


int* llenarArray(int*,int);



int main(){
	int* array=NULL;
	int size=0;
	int Opcion=0;

	while(Opcion!=5){
		switch(Opcion=menu() ){
			case 1://Crear el arreglo
			cout<< "Ingrese el tamano del arreglo: ";
			cin>>size;
			if (array==NULL){
					array = createArray(size);
			}else{
				clearArray(array);
				array= createArray(size);
			}
			break;

			case 2:

				array=llenarArray(array,size);
			break;
			case 3:
				printArray(array,size);
			break;
			case 4:
				//areglar double free    array = NULL;
				clearArray(array);

				size=0;
			break;
			case 5://Salir del programa.
				if(array!=NULL)
					clearArray(array);
			break;
		}//FIn del switch.
	}
	return 0;
}

//Muestra un menu y valida la entrada.
int menu(){
int Resp=89;
bool bandera=true;
	while (bandera){
		cout<< "Bienvenido al sistema de manejo de arreglos"<<endl
	       	<< "Escoja una opcion"<<endl;
		cout<< "1- Crear un arreglo."<<endl
		<<"2-Llenar un arreglo."<<endl<<
		"3-Imprimir un arreglo."<<endl
		<<"4-Limpiar un arreglo."<<endl;
		std::cin >> Resp;
		//getline (std::cin, Resp);
			if(Resp<1||Resp>5){
		//	bandera=true;
			cout<<"Opcion no Valida...";
			continue;
		}else{
		//	bandera=false;
			return Resp;
		}//FIn dle if.
	}//FIn del while.
}//FIn del metodo.
//Leer tamano del arreglo.

int getsize(){
	int retval=0;
	while(true){
		cout<<"INgrese el tamano dle arreglo: ";
		cin>>retval;
			if(retval>=1)
			return retval;
		else
		cout<<"se aceptan unicamente los valores positivos";
	}
}
//IMprimir el contenido del arreglo.
void printArray(int* array, int size){
	for(int i =0;i<size;i++){
		cout<<" "<<array[i];
	}
	cout<<endl;

}

//LIbera la memoria dle arreglo.
void clearArray(int* Array){
	delete[] Array;
	Array=NULL;

}

//Reserva memoria dinamica para un arreglo 
int * createArray(int size){
	int* retvalue = new int [size];
	return retvalue;
	//Return new int[size];
}

int* llenarArray(int* array, int size){
	        for(int i =0;i<size;i++){
			cout<<"Ingrese un numero:  ";
			cin>>array[i];
		}

		        cout<<endl;
	return array;
}



