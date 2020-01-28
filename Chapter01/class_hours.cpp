#include <iostream>

using namespace std;

int main() {
  const int hoursPerClasss = 3;
  int numberOfClasses;
  cout << "Enter the number of classes you are enrolled in: " << endl;
  cin >> numberOfClasses;

  cout << "You are enrolled in " << numberOfClasses * hoursPerClasss << " hours" << endl;

  return 0;
}