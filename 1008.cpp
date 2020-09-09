#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, h;
  double v;
  
  cin >> n;
  cin >> h;
  cin >> v;
  
  cout.precision(2);
  cout << "NUMBER = " << n << endl << fixed << "SALARY = U$ " << h*v << endl;
  
  return 0;
}
