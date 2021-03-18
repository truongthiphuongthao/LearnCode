#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int KTNguyenTo(int n){
	if(n < 2){
		return 0;
	}
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}	
}
int main(){
	int n;
	cin >> n;
	int kq = KTNguyenTo(n);
	if(kq!=1){
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	
}
