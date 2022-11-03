#include<iostream>
using namespace std;
bool isPrime[1000005];
int n;
void snt() {
	for (int i = 0;i <= 1000000;i++) {
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2;i*i <= 1000000;i++) {
		if (isPrime[i] == true) {
			for (int j = i * i;j <= 1000000;j = j + i) {
				isPrime[j] = false;
			}
		}
	}
}
int main() {
	cin >> n;
	snt();
	int x;
	for (int i = 1; i <= n;i++) {
		/*cin >> x;*/
		if (isPrime[i] == true) {
			cout << i << " ";
		}
		/*else {
			cout << " " << endl;
		}*/
	}
	
}