#include <iostream>

using namespace std;

int main(){
	int t, k, n, aux, aux2;
	int i;
	
	cin >> t;
	
	for(i = 0; i < t; i++){
		cin >> k >> n;
		
		
		if (n > k) {
			cout << k << endl;
			continue;
		}
		
		
		aux = k/n;
		aux2 = k%n;
		
		cout << aux + aux2 << endl;
	}
	
	return 0;
}
