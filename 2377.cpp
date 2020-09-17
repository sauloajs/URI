#include <iostream>

using namespace std;

int main() {
	int K, P, L, D, total;
	
	cin >> L >> D;
	cin >> K >> P;
	
	total = ((L / D) * P) + (L * K);
	
	cout << total << endl;
	
	return 0;
}
