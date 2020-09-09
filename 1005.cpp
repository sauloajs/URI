#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double n1, n2, media;
  
  cin >> n1;
  cin >> n2;
  
  media = (((n1 * 3.5)) + ((n2 * 7.5)))/11;
  
  cout.precision(5);
  cout << "MEDIA = " << fixed << media << endl;
  
  return 0;
}
