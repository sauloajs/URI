#include <iostream>

using namespace std;

int main() {
	int cv, ce, cg, fv, fe, fg, cp, fp;
	
	cin >> cv >> ce >> cg >> fv >> fe >> fg;
	
	cp = (cv*3) + ce;
	fp = (fv*3) + fe;
	
	if (cp > fp) cout << "C" << endl;
	
	else if (cp == fp) {
		if (cg > fg) {
			cout << "C" << endl;
		} else if (cg < fg) {
			cout << "F" << endl;
		} else {
			cout << "=" << endl;
		}
	}
	
	else cout << "F" << endl;
	
	return 0;
}
