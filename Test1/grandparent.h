
#pragma once
#include <iostream>
#include <string>

struct Vector{
  int  vector[4];

  void printvec(){
    std::cout << '(' ;
    for (int i =0; i < 3; i++){
        std::cout << vector[i];
        if (i<2){
          std::cout << ',';
        }
    }
    std::cout << ')';
  }
std::string  vec(){
    std::ostringstream os;
    os << vector[0];
    std::string vect = os.str();
    //for (int i=0;i<4;i++){
    //   vect << vector[i];
  //}
  return vect;
}
};
