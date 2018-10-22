comp:	Main.o Persona.o Producto.o
	g++ Main.o Persona.o Producto.o -o comp -lpthread
Main.o:	Main.cpp Persona.h Producto.h
	g++ -c Main.cpp
Producto.o:	Producto.h Producto.cpp
	g++ -c Producto.cpp
Persona.o:	Persona.h Persona.cpp Producto.h
	g++ Producto.h
