#include <iostream>
#include "threeints.h"
#include <cassert>

using namespace std;

int main() {
   assert(ThreeIntsSum(5, 10, 20) == 35);
   assert(ThreeIntsSum(5, -10, 20) == 15);
   assert(ThreeIntsSum(0, 0, 0) == 0);

   return 0;
}