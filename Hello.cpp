#include <iostream>
using namespace std;

int main() {
  std::cout <<"Hello World"<< std::endl;
  for (int i = 0 ; i < 10 ; i++) cout << i << (i == 9 ? '\n' : ' ');
  return 0;
}
