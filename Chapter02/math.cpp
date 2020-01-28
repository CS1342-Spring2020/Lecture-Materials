#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // point 1
  double totalDist;
  double x1 = 2;
  double y1 = 5.00;
  // point 2
  double x2 = 10.0;
  double y2 = 10.0;
  
  // Implement solution
  double x1x2 = pow(x2 - x1, 2); // 
  double y1y2 = pow(y2 - y1, 2);
  totalDist = sqrt(x1x2 + y1y2);

  cout << "Distance between points: " << totalDist << endl;

  return 0;
}










// double xDist = pow(x2 - x1, 2);
  // double yDist = pow(y2 - y1, 2);
  // totalDist = sqrt(xDist + yDist);
