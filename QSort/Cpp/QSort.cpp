#include <iostream>
#include <string>
#include <random>
#include <vector>

using namespace std;

vector<int> Swap(vector<int> ar,int i,int j) {
	int tmp = ar[i];
	ar[i]=ar[j];
	ar[j]=tmp;
	return ar;
}

void PrintAr(vector<int> ar,int n) {
	cout << "[ " << flush;
	for (int i=0; i<n; i++) {
		cout << ar[i];
		if (i != n-1)
			cout << ", ";
	}
	cout << " ]" << endl;
}

vector<int> QSort(vector<int> ar, int left, int right) {
	int i = left;
	int j = right;
	int pivot = ar[left];
	while (1) {
		while (ar[i] < pivot)
			i++;
		while (pivot < ar[j])
			j--;
		if (i >= j)
			break;
		ar=Swap(ar,i,j);
		i++;
		j--;
	}
	if (left < i-1)
		ar=QSort(ar, left, i-1);
	if (j+1 < right)
		ar=QSort(ar, j+1, right);
	return ar;
}


int main() {
	string str;
	int n;
	
	// Input
	cout << "n = ";
	getline(cin,str);
	try {
		n = stoi(str);
	}
	catch(exception &e) {
		n = 0;
	}
	if (n < 10) {
		n = 10;
	}
	cout << endl;
	
	// Initialize
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		ar[i] = i+1;
	}
	
	// Shuffle
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> rand(0, n-1);
	for (int i = n; i > 1; i--) {
        ar=Swap(ar,i-1,rand(mt)%i);
    }
    
    PrintAr(ar,n);
    ar = QSort(ar,0,n-1);
    PrintAr(ar,n);
}