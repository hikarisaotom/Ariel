#include <iostream>

using namespace std;



int main(){
	int size=3;
	int matrix[size][size];

	matrix[1][1] = 100;

	cout<<matrix[1][1];


	//matriz memoria dinamica con apuntadores
	//el * dice que apunta a lo que esta atras
	int** matrix2;
	//instanciar
	matrix2 = new int*[size];

	for(int i=0; i<size;i++){
		matrix2[i]= new int[size];
	
	}

	//accesar sus elementos

	matrix2[1][1]= 500;
	cout<<matrix2[1][1];


	//liberar memoria
	for(int i=0;i<size;i++){
		delete[]matrix2[i];
		matrix2[i]=NULL;
	
	
	}

	delete[] matrix2;
	matrix2= NULL;	






	return 0;

}//FIn main

