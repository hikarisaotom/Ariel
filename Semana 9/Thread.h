//Clase de thread heredarn de ahi alvez
#ifndef THREAD_H
#define THREAD_H

class Thread{

    private:

    public:
    Thread();
    virtual void start();
    virtual void* run(void*)=0; //Virtual puro
};



#endif