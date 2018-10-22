#include <iostream>
#include <ncurses.h>

using namespace std;

int main(){
    int num=5;
    initscr();

    //Imprimri con posicion es mvprintw(x,y,"TExro")
    //mvprintw(20,30,"BIenvenido a calcular el numero pollon\n");
    //scanw(num);



    //Ejemplo
    printw("El numero pollon es :%d\n\n",num);
    
    while((num=getch())!=27){
        mvprintw(10,0,"pendejo salgase con esc");




    }



    //Para no ver los datod es noecho();

    //El raw() ni puta idea

    //obtener el maximun x y y
    /* int x,y;
        getmaxyx(stdscr,y,x);
        move(y/2,x/2);



    */

     //activar un atributo, 
     /*ejemplo
     attron(A_BOLD); //Negrita
     attroff(A_BOLD); //Cerrar con attroff

     ejemplo2
     attron(A_REVERSE);//remarcar 
     attrof(A_REVERSE);




     */     


    //POner color
    /*
    start_color();
    init_pair(1,COLOR_RED,COLOR_BLACK);//primero el foregroung 
                                        y despues el backgroung

    attron(COLOR_PAIR(1));//PONER color
    attroff();


    */

    //Piner ventana
    /*
    WINDOW* win;
    win=newwin(10,10,10,10); //newwin(height,width,y,x);
    wrefresh(win);
    delwin(win);

    */
    //Nodelay funcion //cerrar
    /*
    nodelay(stdscr,true);

    //otra keypad(stdscr,true);

    //cur_set(0);// hace el cusrsor invisible

    //uitma
    usleep(1000000); //se sale automaticamente
    */
    
    
    
    



    refresh();
    getch();
    endwin();






    return 0;
}



mas(){
    
   int numero;
    char nombre[128],letra,contra[68],fin;

    initscr();
    printw("Buenas joven\n");
    printw("Joven ingrese su nombre: ");
    
    scanw("%s",nombre);
    
    printw("\nAhora joven ingrese su letra favorita: ");
    numero=getch();
    letra=numero;
    printw("\nSu nombre es: %s  y su letra favorita es: %c ",nombre,letra);
    printw("\nAdios\n");
    printw("\nEspere un momento!!!!!!\n");
  
    noecho();
    scanw("%s",contra);
    echo();
    printw("\nLa nueva contraseña es: %s",contra);
    printw("\nAhora si adios\n Presione s");
    refresh();
    bool ya;
    fin=getch();
    while(ya){
        if(fin=='s'){
            ya=false;
        }else{
            printw("\nEsa no es la letra imbecil\nVuelve a introducir otra: ");
            fin=getch();
            ya=true;

        }
    }//Fin while
    printw("alfin!!!!!!!!!!");
    getch()
    //usleep(6);
    endwin();

   
}
