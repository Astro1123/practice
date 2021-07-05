#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cout << "n = " << flush;
	getline(cin,str);
	int n;
	try {
		n = stoi(str);
	}
	catch(exception &e) {
		n = 100;
	}
	if ( n < 1 ) n = 100;
	cout << endl;
	for (int i = 0; i < n; i++) {
		if ((i+1)%15==0) {
			cout << "Fizz Buzz" << endl;
		} else if ((i+1)%5==0) {
			cout << "Buzz" << endl;
		} else if ((i+1)%3==0) {
			cout << "Fizz" << endl;
		} else {
			cout << i+1 << endl;
		}
	}
	cout << endl;
}