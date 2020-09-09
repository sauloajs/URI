#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double area, n = 3.14159, raio;
  
  cin >> raio;
  
  area = pow(raio, 2) * n;
  
  cout.precision(4);
  cout << "A=" << fixed << area << endl;
  
  
  return 0;
}
