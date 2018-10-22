#include <iostream>
#include <string>
#include <fstream>
//#include <cstdlib>
#include <pthread.h>
//sleep
#include <unistd.h>

//Clases mas
#include "Producto.h"
#include "Persona.h"

using namespace std;

//Variables globales
Persona persona;
int dineroPersona = 0;
//Funciones
int menu();
void comprarTienda();
void listarProductos();
void* hilo(void*);

int main()
{
    char respuesta = 's';
    string nombrePersona = "Polla";
    persona.setNombre(nombrePersona);

    do
    {
        switch (menu())
        {
        case 1:
            cout << "Ingrese el nuevo nombre: ";
            cin >> nombrePersona;
            persona.setNombre(nombrePersona);
            cout << endl;
            break;
        case 2:
            cout << "Ingrese la cantidad que desea retirar: ";
            cin >> dineroPersona;
            persona.setDinero(dineroPersona);
            cout << endl;
            break;
        case 3:
            comprarTienda();
            break;
        case 4:
            listarProductos();
            break;
        case 5:
            cout<<"Usted tiene "<<persona.getDinero()<<" lempiras\n"<<endl;
            break;
        case 6:

            break;
        case 7:
            break;
        case 8:
            break;

        } //Fin del switch

        cout << "Desea continuar en la vida del pendejo?[s/n]";
        cin >> respuesta;
    } while (respuesta == 's');
    persona.setDinero(dineroPersona);

    cout << "\nEl individuo " << persona.getNombre() << "\nQuedo con " << persona.getDinero() << " Lempiras" << endl;

    return 0;
} //Fin funcion main

int menu()
{
    int opcion = 0;
    cout << "---Menu de la vida de este pendejo---" << endl;
    cout << "1. Ponerle nombre, si no le pone se llamara polla" << endl;
    cout << "2. Retirar dinero de la casa" << endl;
    cout << "3. Comprar en la tienda" << endl;
    cout << "4. Listar productos comprados" << endl;
    cout << "5. Mirar billetera" << endl;
    cout << "6. Dejar productos en la casa (binario)" << endl;
    cout << "7. Llevarse los productos(binario)" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    return opcion;
}

void comprarTienda()
{
    cout << "---Elija un producto de la tienda---" << endl;
    cout << "1. Mangos  ...  L.20.00" << endl;
    cout << "2. Televisores  ...  L.100.00" << endl;
    cout << "3. Computadoras  ...  L.200.00" << endl;
    cout << "4. Dildos  ...  L.350.00" << endl;
    int opcion;
    cout << "Ingrese la opcion: ";
    cin >> opcion;

    Producto producto;
    if (opcion == 1)
    {
        producto.setNombre("Mango");
        producto.setPrecio(20);
        persona.setDinero(persona.getDinero()-20);
    }
    else if (opcion == 2)
    {
        producto.setNombre("Televisor");
        producto.setPrecio(100);
        persona.setDinero(persona.getDinero()-100);
    }
    else if (opcion == 3)
    {
        producto.setNombre("Computadora");
        producto.setPrecio(200);
        persona.setDinero(persona.getDinero()-200);
    }
    else if (opcion == 4)
    {
        producto.setNombre("Dildo");
        producto.setPrecio(350);
        persona.setDinero(persona.getDinero()-350);
    }
    else
    {
        cout << "Esto no existe imbecil" << endl;
    }

    if (persona.getDinero() < 20)
    {
        cout << "Alejese pobre de mierda" << endl;
    }
    else
    {
        pthread_t hilo1;

        pthread_create(&hilo1,NULL,hilo,(void*)producto.getNombre().c_str());

       // pthread_join(hilo1,NULL);

      // pthread_exit(NULL);
        persona.pushproductos(producto);
        cout<<"Producto comprado con exito, fijo son dildos cerdo."<<endl;
    }
    cout<<endl;
}///Fin funcion comprar

void listarProductos(){
    for(int i=0;i<persona.getListaProductos().size();i++){
        cout<<i<<". "<<persona.getListaProductos()[i].getNombre()<<endl;

    }
    cout <<endl;





}

void guardarProductos(){
    /*
    int size = nombre.size();
    //length del nombre y contenido.
    out.write(reinterpret_cast<char *>(&size), sizeof(int));
    out.write(nombre.data(), size);
    //Cuenta
    size = cuenta.size();
    out.write(reinterpret_cast<char *>(&size), sizeof(int));
    out.write(cuenta.data(), size);
    //carrera

    size = carrera.size();
    out.write(reinterpret_cast<char *>(&size), sizeof(int));
    out.write(carrera.data(), size);

    //Edad

    out.write(reinterpret_cast<char *>(&edad), sizeof(int));



    */

    ofstream archivo("Casa.mrk",ios::binary);

    int size;
    string nombre=persona.getNombre();
    size=persona.getNombre().size();
    archivo.write(reinterpret_cast<char*>(&size),sizeof(int));
    archivo.write(nombre.data(),size);

    int dinero=persona.getDinero();

    char* buf=reinterpret_cast<char*>(&dinero);

    archivo.write(buf,sizeof(int));

    
    archivo.close();


}



void* hilo(void* nombreproducto){
    char* palabra=(char*)nombreproducto;

    for(int i=0;i<10;i++){
        cout<<nombreproducto<<" cargando... "<<i<<" de 10"<<endl;
        sleep(2);



    }

  // pthread_exit(NULL);

}