#include <iostream>
#include <fstream>
#include "template.h"

using namespace std;



int main(){
  int mynum[3] = {1,2,3};
  int start, end, index;
  ifstream infile;
  int count = findCount("tags", ".txt");
  tag tag_list[count];
  tag * tagptr = ptd_tag_constructor(tag_list[0]);
  for (int i = 0; i <count ; i++){
    cout<<"At Address: "<< tagptr+i<< " is tag: " <<tag_list[i].id<<" " <<tag_list[i].tag_name <<endl;
  }
  print("passed \n");
  string line;
  //string word;
  string info[3] = {"Krasten", "\"Some of these\"", "\"Go Fuck Yourself\""};
  string name = "Krasten";
  string message = "Some of these";
  string new_word;
  string mytag;
  infile.open("input_file.txt");
  while (getline (infile,line)) {
    for (int i = 0 ; i <line.length();i++){
      if (line[i] == '\\'){
        start = i;
        string word = obtain_word(line,i);
        print("Word in line: " + word + "\n");
        for (int j = 0; j<count; j++){
          print("Tag: " + tag_list[j].tag_name.length +"\n");
          mytag = tag_list[j].tag_name;
          cout << (word == mytag)<< "\n";
        if (tag_list[j].tag_name == word){
            new_word = info[j];
            index = j;
            print("yeet");
            print(new_word + "\n");
            //cout << index;
          }
        }
      }
    }
    //cout <<"Line: " << line << '\n';
    //print("New Word: " + new_word + "\n");
    //end = (start+tag_list[index].tag_name.length())-1;
    //cout <<"Start: " << start<< " End: "<<end<< endl;
    //cout<< endl;
    //print(modify_line(line, new_word,start+1,end)+"\n");
    //print(new_word);

  }
  infile.close();

  return 0;
}
