#include <iostream>

using namespace std;

int main(){
	int n, t;
	string p = "";
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> p >> t;
		
		if (p == "Thor") cout << "Y" << endl;
		else cout << "N" << endl;
	}
	
	return 0;
}
