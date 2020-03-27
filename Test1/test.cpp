// Your First C++ Program

#include <iostream>

using namespace std;

class Factorial {
  public:

    int factorial(int n) {
      int my_fact = 1;
      for (int i = n; i>0; i--){
        my_fact = my_fact*i;
      }
      return my_fact;
    }
};

int main() {
  Factorial myfact;
  int n;
  int m {4};
  double y {m*n};
  std::cin >> n;
  std::cout << myfact.factorial(n ) << endl;
  cout << y;
    return 0;
}
