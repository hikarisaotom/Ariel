//Personaje
//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef PERSONAJE_H
#define PERSONAJE_H

//Inicio clase
class Personaje
{

  //Atributos
private:
  string nombre;
  int HP;
  int ataqueNormal;
  Ataque ataqueEspecial;
  Ataque defensa;

  //metodos publicos
public:
  //prototipos de metodos
  //constructor
  Personaje();
  //Personaje(string,int,int,int,int,int);

  //metodos accersores / mutadores
  string getNombre();
  void setNombre(string);
  int getHP();
  void setHP(int);
  Ataque getAtaqueNormal();
  void setAtaqueNormal(Ataque);
  Ataque getAtaqueEspecial();
  void setAtaqueEspecial(Ataque);
  int getDefensa();

  void setDefensa(int);
  int getPoderEspecial();
  void setPoderEspecial(int);
  //Metodo poder especial
  virtual void poderEspecial();

  //Destructor
  ~Personaje();

}; //Fin de la clase

#endif