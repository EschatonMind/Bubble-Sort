#include <iostream>
using namespace std;
void Bubblesort(int a[], int& n);
int main() {

	int b;
	cin >> b;
	int* a = new int[b];
	for (int i = 0; i < b; i++) {
		cin >> a[i];
	}

	Bubblesort(a, b);
	
	for (int i = 0; i < b; i++) {

		cout << " | " << a[i] << " | ";

	}
}

void Bubblesort(int a[], int& n) {

	for (int count = 1; count < n - 1; count++) {
		int flag = 0;
		for (int j = 0; j <= n - 2; j++) {
			if (a[j] > a[j + 1]) { swap(a[j], a[j + 1]); 
			flag = 1;
			}
			if (flag == 0) { break; }

		}
	}


}