#include "grandparent.h"
#include "parent.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
  Vector line = {{1,2,3}};
  line.printvec();
  ofstream outfile;
  outfile.open("myfile.txt");
  outfile << line.vec() << endl;
  outfile.close();



  return 0;
}
