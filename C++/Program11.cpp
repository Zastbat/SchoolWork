#include <iostream>
#include <math.h>
using namespace std;
double distance(double x1, double y1, double x2, double y2){
   double X;
   double Y;
   double distance;
   X = x2 - x1;
   Y = y2 - y1;
   X = X * X;
   Y = Y * Y;
   distance = X + Y;
   distance = sqrt(distance);
   return distance;
}
int main() {
double x1, y1, x2, y2;
cout << "Enter x1: ";
cin >> x1;
cout << x1 << endl;
cout << "Enter y1: ";
cin >> y1;
cout << y1 << endl;
cout << "Enter x2: ";
cin >> x2;
cout << x2 << endl;
cout << "Enter y2: ";
cin >> y2;
cout << y2 << endl;
cout << "The distance is ";
cout << distance(x1, y1, x2, y2) << endl;
return 0;
}