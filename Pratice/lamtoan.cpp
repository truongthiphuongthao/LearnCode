#include <bits/stdc++.h>

using namespace std;

int lamtoan(int a, int b){
	int tl = 0;
	int nho = 0;
	while(a != 0 ||  b != 0){
		
		int xa = a % 10;
		int xb = b % 10;
		if(xa + xb + nho > 9){
			nho = 1;
			tl ++;
		}
		a = a/10;
		b = b/10;
	}
	return tl;
}
int main(){
	while(1){
		int a;
		cin >> a;
		int b; 
		cin >> b;
		if(a == 0){
			break;
		}
		int kq = lamtoan(a, b);
		cout << kq << "\n";
	}
}
