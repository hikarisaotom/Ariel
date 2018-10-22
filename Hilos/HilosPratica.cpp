#include <iostream>
#include <string>

#include <thread>

using namespace std;



void pollon(){
	for(int i=0;i<23;i++){
	
        cout<<"Que pije pollon"<<endl; 
	}
	
}


int main(){
	
	thread polla(pollon); //Inicia el hilo
    
    for(int i=0;i<23;i++){
        cout<<"buenas"<<endl;
        
        
    }
    polla.join(); //Finaliza el hilo
	
	
	
	return 0;
}
