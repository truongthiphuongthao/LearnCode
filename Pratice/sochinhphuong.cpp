#include <bits/stdc++.h>

using namespace std;
int kiemtrasochinhphuong(int n){
	// 0 va 1 la o chinh phuong
	int i=0;
	while(i*i <= n){
		if(i*i == n){
			return 1;
		}
		i++;
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
