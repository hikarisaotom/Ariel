//Arrreglos 
#include <iostream>

using namespace std;
//prototipos
//Muestra menu lee y valida entrada
int menu();

//Reserva memoria dinamica para un arreglo de enteros,recibe de parametro el size del arreglo
int* createArray(int);

//liberar la memoria del arreglo
void clearArray(int*);
//imprimer el contenido del arreglo
void printArray(int*,int);

int getSize();


int main(){

	int* array= NULL;
	int size=0;
	int opcion=0;

	while(opcion!=5){
		switch(opcion=menu()){
			case 1:
				//crear el arregloa
				//cout<<"Ingrese el tamaño del arreglo: ";
				//cin>>size;
				size = getSize();
				//evitar memoty liks
				array = createArray(size);
			
				if (array=NULL)
					array = createArray(size);
				else{
					clearArray(array);
					array = createArray(size);
				}

			break;

			case 5: //salit

				if(array!= NULL)
					clearArray(array,size);
			break;

		}	
	
	}//Fin whhile mitch

	return 0;
}

//leer tamaño del arreglo
int getSize(){
	int retval;
	while(true){
		cout << "Ingrese el tamaño del arreglo: ";
		cin >>retval;

		if(retval >=1)
			return retval;
		else{
			cout<< "L cago";
			     	
			
		}
	}//While mitch
	
}


//muerta un menu y valida la entrada
int menu(){
	int entrada = 0;
	do{
		cout<<"\n<MENU DE LA OSTIA>"<<endl;

		cout<<"(1)Crear arreglo"<<endl<<
	     	 "(2)Llenar areglo"<<endl<<
	     	 "(3)Imprimir arreglo"<<endl<<
	     	 "(4)ELiminar arreglo"<<endl<<
	     	 "(5)Salir"<<endl<<
	     	 "\nIngrese su opcion: ";
	
		
		cin>>entrada;
	}while(entrada<1 || entrada>6);
	return entrada;

}





//imprime los contenidos del arreglo
void printArray(int* array,int size){
	for(int i = 0; i< size; i++){
		cout<<" "<<array[i];
	}

	cout<<endl;

}




//libera la memoria del arreglo
void clearArray(int* array){
	delete[] array;
	array = NULL;
}

 ///////////////////////////////////////////////////////////////////////////
//reserva memoria dinamica para un arreglo
int* createArray(int size){
	int retvalue = new int[size];
	return retvalue;
//return new int[size];   // otra opcion

}
