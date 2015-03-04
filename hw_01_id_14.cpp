 //Autor:Oscar GArcia Avila
//Date: 2/22/2015
//Version:01
//Homework 02 getting size in bytes for some data types
//display the memory size occupied by each variable
  #include<iostream>//biblioteca
  int main(){
   std::cout << "medida de caracter : " << sizeof(char) <<"bytes"<<std::endl,//se usa la funcion sizeof para mostar 
   std::cout << "medida de entero : " << sizeof(int) << "bytes"<<std::endl;//el numero de bytes de cad tipo de variable,
   std::cout << "medida de corta de entero : " << sizeof(short int) << "bytes"<<std::endl;// 8 bites forman un byte
   std::cout << "medida larga de entero : " << sizeof(long int) << "bytes"<<std::endl;
   std::cout << "medida de  : " << sizeof(float) << "bytes"<<std::endl;
   std::cout << "medida de valos doble : " << sizeof(double) << "bytes"<<std::endl;
   std::cout << "medida de wchar_t : " << sizeof(wchar_t) << "bytes"<<std::endl;
return 0;//regresa valor 0
}
