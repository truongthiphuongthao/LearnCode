#include <bits/stdc++.h>

using namespace std;

// kiem tra so nguyen to
int kiemtrasnt(int n){
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

int indayngtotangdan(int arr[], int n){
	int brr[100];
	int pos = 0;
	for(int i=0; i<n; i++){
		if(kiemtrasnt(arr[i])){
			brr[pos] = arr[i];
			pos++;
		}
	}
	for(int i=0; i<pos-1; i++){
		if(brr[i] > brr[i+1]){
			return 0;
		}
	}
	return 1;
	
}
int main(){
	int n;
	cin >> n;
	int arr[100];
	for(int i=0; i<n ;i++){
		cin >> arr[i];
	}
	int kq = indayngtotangdan(arr, n);
	if(kq != 1){
		cout << "NO";
	}
	else {
		cout << "YES";
	}
}
