#include <iostream>
#include <string>

//prototipo funcion impriemir
using namespace std;

void print(char*);

int main(){

    char str[]="Hola mundo";
    int enteros[]={1,2,3,4,5,6,7,8,9,10};
    //string meses[] = {"Enero","Febrero"};
    
    
    print(str);
    cout<<endl;
    return 0;





}



void print(char* c){
    if(*c){
       // putchar(*c);
        print(c+1);
        putchar(*c);
    
    }


}//FIn funcion void
