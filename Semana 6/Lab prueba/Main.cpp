#include <iostream>
using namespace std;
#include <sstream>
#include <typeinfo>
#include <vector>
#include "Persona.h"
//#include "Airbender.h"
#include "FireBender.h"
//#include "WaterBender.h"
//#include "NonBender.h"

int main()
{
    vector<Persona*> personas;

    personas.push_back(new FireBender("pp","rasdsa", 9, "t", 8,6));
    personas.push_back(new FireBender("pp","asda", 9, "t", 8,6));
    personas.push_back(new Persona("c","rooko", 9, "t"));

    for(int i = 0; i<personas.size(); i++){
        cout<< personas[i]->getNombre() << endl;

    }


    for(int i = 0; i<personas.size(); i++){
        if(typeid(*personas[i]) == typeid(FireBender)){
            cout<< "sii "<< endl;
        }
        
       // cout<< typeid(FireBender).name()<< endl;
        //cout<< typeid(*personas[i]).name()<< endl;
    }

    delete personas[2];
    personas[2] = NULL;

    for(int i =0; i< personas.size(); i++){
        if(personas[i] == NULL){
            cout<< "vacio" << endl;
        }else{
            personas[i]->setNombre("ahora");
            cout<< personas[i]->getNombre() << i<< endl;
        }
    }

    
    return 0;
}
