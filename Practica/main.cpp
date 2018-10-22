#include <iostream>
#include <string>
#include <ncurses.h>
//#include <pthread.h>
#include<sstream>
//#include <stdlib.h>
#include <unistd.h>
#include <vector>
using namespace std;
using std::stringstream;

int convertirNumero(char);
int getX(string);
int getY(string);


int main (){
/*vector<string> polla;
    polla.push_back("1-2");
    polla.push_back("2-2");
    polla.push_back("3-2");


    for(int j=0;j<polla.size();j++){
                int x,y;
                stringstream str;
                x=getX(polla[j]);
                y=getY(polla[j])-1;
                string retValue;
                str<<x<<"-"<<y;
			    str>>retValue;
                polla[j]=retValue;
            
            

    }
    cout<<"Polla es: "<<polla[1]<<endl;*/
    


    

    
    int x1=1,x2=2;
    int n;
    vector<string> polla;
    polla.push_back("5-8");
    polla.push_back("6-8");
    polla.push_back("7-8");
    initscr();
    /*WINDOW *ventana=newwin(10,20,10,10);
    refresh();
    box(ventana,0,0);
    wrefresh(ventana);
    //int maxX,maxY;
    //getmaxyx(stdscr,maxY,maxX);
    
   /* WINDOW* win;
    win=newwin(maxY,maxX,90,90); //newwin(height,width,y,x);
    wrefresh(win);
    getch();
    printw("Ingrese su nombre: ");
    delwin(win);*/


    for(int i=0;i<50;i++){
        start_color();
        init_pair(1,COLOR_RED,COLOR_YELLOW);
        attron(COLOR_PAIR(1));
        curs_set(0);
        
        for(int j=0;j<polla.size();j++){
            int x,y;
            
            mvprintw(getY(polla[j]),getX(polla[j])," ");
           

        }


    
        attroff(COLOR_PAIR(1));
       
        //sleep(1);
        refresh();
        
        int entrada=getch();


        if(entrada==119){//w
            for(int j=0;j<polla.size();j++){
                int x,y;
                
                stringstream str;
                x=getX(polla[j]);
                y=getY(polla[j])-1;
                string retValue;
                str<<x<<"-"<<y;
			    str>>retValue;
                polla[j]=retValue;

            
            

            }



        }//fin del if w
        else if(entrada==100){   //d
            for(int j=0;j<polla.size();j++){
                int x,y;
                stringstream str;
                x=getX(polla[j])+1;
                y=getY(polla[j]);
                string retValue;
                str<<x<<"-"<<y;
			    str>>retValue;
                polla[j]=retValue;
            
            

            }
        }//Fin del if d
        else if(entrada==97){//a
            for(int j=0;j<polla.size();j++){
                int x,y;
                stringstream str;
                x=getX(polla[j])-1;
                y=getY(polla[j]);
                string retValue;
                str<<x<<"-"<<y;
			    str>>retValue;
                polla[j]=retValue;
            
            

            }
        }//Fin if a
        else if(entrada==115){//S
            for(int j=0;j<polla.size();j++){
                int x,y;
                stringstream str;
                x=getX(polla[j]);
                y=getY(polla[j])+1;
                string retValue;
                str<<x<<"-"<<y;
			    str>>retValue;
                polla[j]=retValue;
            
            

            }



        }





        
        clear();







    }//Fni
    getch();
   

    endwin();
  





    

    return 0;
}//Fin del main



int convertirNumero(char le){
    int n=0;

    if(le=='1'){
        n=1;
    }else if(le=='2'){
        n=2;
    }else if(le=='3'){
        n=3;
    }else if(le=='4'){
        n=4;
    }else if(le=='5'){
        n=5;
    }else if(le=='6'){
        n=6;
    }else if(le=='7'){
        n=7;
    }if(le=='8'){
        n=8;
    }else if(le=='9'){
        n=9;
    }

    return n;


}//Fin de la funcion convertir nuermeo


int getX(string palabra){
    int x;
    x=convertirNumero(palabra[0]);
    return x;


}//Fin getX

int getY(string palabra){
    int y=0;
    y=convertirNumero(palabra[2]);
    return y;



}


