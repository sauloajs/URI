#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double n1, n2, n3, media;
  
  cin >> n1;
  cin >> n2;
  cin >> n3;
  
  media = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 5.0))/10;
  
  cout.precision(1);
  cout << "MEDIA = " << fixed << media << endl;
  
  return 0;
}
