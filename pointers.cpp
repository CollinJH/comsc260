#include <iostream>

int main() {


  // x is an int that holds the value of 42
  // ptr is a pointer variable that stores the address of x using &
  // to acccess the value of x we use the * operator to dereference the pointer
  // therefore it allows us to indirectly access and modify the value of x
  // by manipulating the memory location where x is 
  int x = 42;
  int *ptr = &x;

  std::cout << "Value of x: " << x << std::endl;
  std::cout << "Memory address of x: " << &x << std::endl;
  std::cout << "Value of x through pointer: " << *ptr << std::endl;

}
