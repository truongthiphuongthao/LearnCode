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

int tongsonguyento(int n){
	int tong = 0;
	for(int i=1; i<=n; i++){
		if(KTNguyenTo(i)){
			tong = tong + i;
		}
	}
	return tong;	
}
int main(){
	int n;
	cin >> n;
	int ketqua = tongsonguyento(n);
	cout << ketqua;
}
