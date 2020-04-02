#include <iostream>
#include <fstream>

using namespace std;


void print(string arg){
  std::cout<<arg;
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



int main(){

  string first_name = input("First Name(s): ");
  string last_name = input("Last Name(s): ");
  int age = stoi(input("Age : "));
  string age_message;
  if (age  > 20) {age_message = "You're old!";}
  else if (age < 20){age_message = "You're young!";}
  else {age_message ="You're 20!";}

  ofstream outfile;
  outfile.open("form_letter.txt");

  writeln(outfile, first_name + " " + last_name);
  writeln(outfile, age_message);

  outfile.close();

  ifstream infile;
  string line;
  infile.open("form_letter.txt");
  while (getline (infile,line)) {
    cout << line << '\n';
  }
  infile.close();
  return 0;
}
