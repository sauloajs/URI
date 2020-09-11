#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, r = 0;
	
	while (true) {
		cin >> n;
		
		if (n == 0) break;
		
		if (n > r) r = n;
	}
	
	cout << r << endl;
	
	return 0;
}
