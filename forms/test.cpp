#include <iostream>
#include <fstream>
#include <typeinfo>
#include <ctype.h>
#include "template.h"

using namespace std;





class MyClass {
  int avar = 0;
  int count = findCount("tags",".txt");
  public:
    tag tag_list;
};

int main(){
    tag test_tags[2]{{1,"test"},{2,"test"}};
    //cout << test_tags[1].tag_name;
    int count = 2;
    tag testtag[count];

    tag * tagptr = tag_ptr(testtag[0]);
    tag tags[count];
    tags[0] = *tagptr;
    //tag * tagptr2 = tag_ptr(testtag[2]);
    //tags[1] = *tagptr2;
    for (int i = 0; i <count ; i++){
      cout<<"At Address: "<< tagptr+i<< " is tag: " <<testtag[i].id<<" " <<testtag[i].tag_name <<endl;
    }
    //cout<<"At Address: "<< tagptr<< " is tag: " << testtag[1].tag_name;
  return 0;
}
