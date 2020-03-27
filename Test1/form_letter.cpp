#include <iostream>
#include <fstream>

using namespace std;

int main(){
  cout<< "First Name: ";
  string first_name;
  cin >> first_name;
  cout<<"Last Name: ";
  string last_name;
  cin >> last_name;
  cout << "Age: ";
  int age;
  cin >> age;
  string age_message;
  if (age  > 20) {age_message = "You're old!";}
  else if (age < 20){age_message = "You're young!";}
  else {age_message ="You're 20!";}

  ofstream outfile;
  outfile.open("form_letter.txt");
  outfile << first_name << " " << last_name << endl << age_message;
  outfile.close();
  return 0;
}
