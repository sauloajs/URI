#include <iostream>

using namespace std;

int main(){
	int n;
	double r = 0.0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		r = 1.0/( r + 6.0);
	}
	
	cout.precision(10);
	cout << fixed << r + 3.0 << endl;
	
	return 0;
}
