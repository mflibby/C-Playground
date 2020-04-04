#pragma once
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <ctype.h>

using namespace std;

struct tag{
  int id;
  string tag_name;
};



int findCount(string FileName, string ext){
  ifstream infile(FileName+ext);
  int count = 0;
  string line;
  while (getline(infile,line)){
    count ++;
  }
  return count;
}

tag findTag(int lineIndex, string FileName, string ext){
  ifstream infile(FileName+ext);
  int count = 0;
  string line;
  tag indexed_tag;
  while (getline(infile,line)){
    count ++;
    if (count == lineIndex){
      indexed_tag = {count,line};
    }
  }
  return indexed_tag;
}

tag * ptd_tag_constructor(tag& testtag){
  cout<<&testtag << endl;
  ifstream infile("tags.txt");
  int count = 0;
  string line;
  tag indexed_tag;
  while (getline(infile,line)){
    //cout<< line;
    *((&testtag)+count)= {count,line};
    count++;
    }
  return &testtag;
}

void print(string arg){
  std::cout<<arg;
}

string obtain_word(string line, int start){
  // Takes a line and the starting index in the line and returns the word
  int line_length = line.length();
  int i = start;
  string word = "";
  while (isalpha(line[i]) | line[i] == '\\' | isdigit(line[i])){
    word+= line[i];
    i++;
  }
  return word;
}

string modify_line(string line, string new_word, int start, int end){

    string new_line = line.substr(0,start-1) + new_word + line.substr(end+1, line.length()-1);
    return new_line;
}

string input(string arg){
      print(arg);
      string inLine;
      cin >> inLine;
      return inLine;
}

void writeln(ofstream& file, string line){
      file << line << endl;
}

void debug_str_info(string strng, string header, bool debug_on, bool write_to_log, ofstream& log){
  string debug_string = header + (string)typeid(strng).name() + " " + strng  ;
  if (debug_on){
    cout <<  debug_string <<  endl;
  }
  if (write_to_log){
    writeln(log, debug_string);
  }
}
