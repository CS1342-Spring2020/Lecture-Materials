#include <iostream>
#include <cstdlib> // rand & srand
#include <ctime> // time

using namespace std;

int main() {
  srand(time(NULL));
  int random = rand() % 10;
  cout << "Random Number: " << random << endl;

  return 0;
}