#include <iostream>
#include <vector>
#include <ncurses.h>
#include <cstdlib>
#ifndef SNAKE_H
#define SNAKE_H


struct snakepart{  //Es como creqar el objeto  partes de serpiente
    int x,y;
    snakepart(int col,int row);
    snakepart();   




};

class snakeclass{
    int points,del,maxwidth,maxheight;
    char direction,partchar,oldalchar,foo;
    bool get; //si la serpiente se la come (la comida)
    snakepart food;
    std::vector<snakepart> snake;    //usar std porque es un mala pratica el using name

    void putfood();
    bool colision();
    void movesnake();

    public:
    snakeclass();
    ~snakeclass();
    void start();



};//Fin clase




#endif