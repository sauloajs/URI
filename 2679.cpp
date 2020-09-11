#include <iostream>

using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	while(true) {
		n++;
		if (n%2 == 0) {
			cout << n << endl;	
			break;
		}
	}
	
	return 0;
}
