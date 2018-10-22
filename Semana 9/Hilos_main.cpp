//Hilos, Threadss
//0 false
#include <iostream>
#include <cstdlib>
#include <pthread.h>
//Sleep
#include <unistd.h>

//HIlso clases
#include "Thread.h"
#include "MyThread.h"

/*
Tecnivasx
semaforo
candado mutex



*/

using namespace std;

#define NUM_HILOS 10

//Para compilar: aagrregar -lpthread al comando g++

pthread_mutex_t mutex1= PTHREAD_MUTEX_INITIALIZER;




void* say_Something(void* something){
    char* palabra= (char*)something;

    while(true){
        cout<<palabra<<endl;
        sleep(3);
    }

}

void *PrintHello(void *threadid)
{
    long id_thread;
    id_thread = (long)threadid;

    //Proteger
    pthread_mutex_lock(&mutex1);
    cout << "Hilo en ejecucion! ID, " << id_thread << endl;
    pthread_mutex_unlock(&mutex1);

    for (int i = 0; i < 10; i++)
    {
        //Candad0
        pthread_mutex_lock(&mutex1);
        cout << "Thread ID, " << id_thread << ": i- " << i << endl;
        pthread_mutex_unlock(&mutex1);
    }
    pthread_exit(NULL);
}//Fi inicio funcion




int main()
{
   
    
   /* pthread_t threads[NUM_HILOS];
    int control,i;

    for(int i=0;i<NUM_HILOS;i++){

        //Candado
        pthread_mutex_lock(&mutex1);
        cout<<"Creando thread "<<i<<endl;
        pthread_mutex_unlock(&mutex1);


        control=pthread_create(&threads[i],NULL,PrintHello,(void*)i);

        if(control)
        {
            pthread_mutex_lock(&mutex1);
            cout<< "Error al crear un hilo, " << control << endl;
            exit(-1);
        }



    }

    pthread_exit(NULL);*/

    pthread_t hilo1;

    pthread_create(&hilo1,NULL,say_Something,(void*)"Buenos dias");

    pthread_join(hilo1,NULL);
    

    /***Thread* myThread = new MyThread();
    myThread->start();
    
    delete myThread;***/





    return 0;
}
