#include <iostream>
#include <fstream>
#include <typeinfo>
#include <ctype.h>
#include "template.h"

using namespace std;



int main(){
    char* testptr;
    char test;
    test = 'a';
    testptr = &test;
    cout<< test << *testptr;
  return 0;
}
