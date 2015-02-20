// Author:Violeta Haruso
// Date:  today
// Version:2.0

/*
Homework 2.0
this assignment size in bytes for some data types

	
*/

#include <iostream>

int main(int argc, char **argv)
{
	std::cout<<"El tamanio de un entero es:\t\t"       << sizeof(int)    << "bytes. \n";
	std::cout<<"El tamanio de un entero corto es:\t"   << sizeof(short)  << "bytes. \n";
	std::cout<<"El tamanio de un entero largo es:\t"   << sizeof(long)   << "bytes. \n";
	std::cout<<"El tamanio de un caracter es:\t\t"     << sizeof(char)   << "bytes. \n";
	std::cout<<"El tamanio de un punto flotante es:\t" << sizeof(float)  << "bytes. \n";
	std::cout<<"El tamanio de un doble es:\t\t"        << sizeof(double) << "bytes. \n";
	std::cout<<"El tamanio de un booleano es:\t\t"     << sizeof(bool)   << "bytes. \n";
	
	return 0;
}




