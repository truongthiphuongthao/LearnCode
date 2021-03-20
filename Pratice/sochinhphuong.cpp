#include <bits/stdc++.h>

using namespace std;
int kiemtrasochinhphuong(int n){
	for(int i=1; i<=n/2; i++){
		if(i*i == n){
			return 1;
		}
	}
	return 0;
}
int main(){
	int n;
	cin >> n;
	int kq = kiemtrasochinhphuong(n);
	if(kq != 1){
		cout << "NO";
	}
	else {
		cout << "YES";
	}
}
