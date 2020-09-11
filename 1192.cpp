#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
	char op;
	int t, n1, n2;
	
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin>>n1>>op>>n2;
		
		if(isupper(op) && n1 != n2) {
			cout << n2 - n1 << endl;
		} else if (n1 == n2){
			cout << n1 * n2 << endl;
		} else {
			cout << n1 + n2 << endl;
		}
	}
	
	return 0;
}
