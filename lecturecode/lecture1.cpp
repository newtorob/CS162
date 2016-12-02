#include <iostream>
//math.h becomes cmath

#include <cmath>
using std::cin;
using std::cout;
using std::endl;

#include "functions.hpp"

//stop using using namespace std!!
int main(int argc, char **argv) {
  
  
  int x = 7;
  int y = 10;

  
  
  std::cout <<"x = " << x << "\t" << "y = " << y << std::endl;
  swap(x,y);
    
  std::cout <<"x = " << x << "\t" << "y = " << y << std::endl;
  

  std:: cout << std::sqrt(121) << std::endl;


  return 0;
}
