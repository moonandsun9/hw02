Author:   Juan Pueblo
Date:     today
Version:  1.0

/*
  Homework 02
  this assignment try ...
*/

#include <iostream>

int main ()
{
  std::cout<<" Size in bytes for some data types: "<<std::endl;

  std::cout << "size of type data integer is:\t\t" << sizeof(int) << " bytes.\n";
  std::cout << "size of type data short is:\t" << sizeof(short) << " bytes.\n";
  std::cout << "size of type data long is:\t" << sizeof(long) << " bytes.\n";
  std::cout << "size of type data char is:\t\t" << sizeof(char) << " bytes.\n";
  std::cout << "size of type data float is:\t\t" << sizeof(float) << " bytes.\n";
  std::cout << "size of type data double is:\t" << sizeof(double) << " bytes.\n";
  std::cout << "size of type data bool is:\t" << sizeof(bool) << " bytes.\n";

  return 0;
}
