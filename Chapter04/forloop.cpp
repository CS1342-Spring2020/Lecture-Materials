#include <iostream>
using namespace std;

int main() {
  const int arraySize = 5;
  int array[arraySize] = { 1, 2, 3, 4, 5 };
  /*
 * iterate over an array
 */
 for(int i = 0; i < arraySize; i++) {
   cout << array[i] << endl;
 }

/*
 * print all numbers between 1 and 100
 * declare i outside forloop
 */
  int i = 0;
  for (;i < 100; i++) {
    cout << i << endl;
  }

  return 0;
}