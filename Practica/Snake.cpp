#include "Snake.h"

snakepart::snakepart(int col,int row){

    x=col;
    y=row;


}//Fin snakepart

snakepart::snakepart(){
    x=0;
    y=0;



}

snakeclass::snakeclass(){
    initscr();
    nodelay(stdscr,true);//el getch no esperar hasta que se presione una teclas
    keypad(stdscr,true);
    noecho();
    curs_set(0);//Cursor invisible
    getmaxyx(stdscr,maxheight,maxwidth); //meterle el maximo a esa variables

    //init a few variables
    partchar='x';
    oldalchar=(char)219;
    foo='*';
    food.x=0;
    food.y=0;

    for(int i=0;i<5;i++){

        snake.push_back(snakepart(40+i,10));
        points=0;
        del=110000;
        get=false;
        direction='l';
        srand(time(0));//random
        putfood();
        for(int j=0;j<maxwidth-1;j++){
            move(0,j);
            addch(oldalchar);
        }

    }//fin for 1



}//Fin sankeclass