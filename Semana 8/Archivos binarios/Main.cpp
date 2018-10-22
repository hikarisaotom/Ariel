//archivos binarios
#include <iostream>
#include <string>
#include <fstream>


using namespace std;


int main(){
    //Abrir un archivo binario para escritura
    //Abrir archivoo
    ofstream writeBinFile("binfile.bin",ios::binary);
    //inicializar un int
    int numero=1000;
    //reintrpretar l salida
    char* buf=reinterpret_cast<char*>(&numero);
    //Escribir un bloque en el archivo
    writeBinFile.write(buf,sizeof(int));
    
    writeBinFile.close();
    
    
    //abrir archivo binario para lectura
    ifstream readBinFile("binfile.bin",ios::binary);
    
    
    
    //leer un bloque
    
    
    //reintrpretar el bloque  leido
    int leido;
    readBinFile.read(reinterpret_cast<char*>(&leido),sizeof(int));
    //cerrar archivo
    readBinFile.close();
    
    cout<<"Dato leido: "<<leido<<endl;
    
    
    
    return 0;
    
}//
