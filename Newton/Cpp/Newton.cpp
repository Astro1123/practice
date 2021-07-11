#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double f(double x) {
	return x * x - 2;
}

double fd(double x,double h) {
	return (f(x+h/2)-f(x-h/2))/h;
}

double Newton(double x,double h) {
	return x - f(x) / fd(x,h);
}

int main() {
	string str;
	double x,eps,h;
	int count;
	
	cout << "x = " << flush;
	getline(cin,str);
	try {
		x = stoi(str);
	}
	catch(exception &e) {
		x = 0;
	}
	cout << "eps = " << flush;
	getline(cin,str);
	try {
		eps = stoi(str);
	}
	catch(exception &e) {
		eps = 0;
	}
	if ( eps >= 1 || eps <= 0 ) eps = 0.0000000001;
	cout << "h = " << flush;
	getline(cin,str);
	try {
		h = stoi(str);
	}
	catch(exception &e) {
		h = 0;
	}
	if ( h > 1 || h <= 0) h = 0.00001;
	cout << "count = " << flush;
	getline(cin,str);
	try {
		count = stoi(str);
	}
	catch(exception &e) {
		count = 0;
	}
	if (count <= 0) count = 1000;
	cout << endl;
	
	
	for (int i=0; i<count; i++) {
		x = Newton(x,h);
		if (abs(f(x)) < eps) break;
	}
	cout << "x = " << x << endl;
	cout << "f(x) = " << f(x) << endl;
	cout << endl;
}