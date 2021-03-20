#include <bits/stdc++.h>

using namespace std;

int kiemtrasochinhphuong(int n){
	int i=0;
	while(i*i <= n){
		if(i*i == n){
			return 1;
		}
		i++;
	}
	return 0;
}

int daychinhphuongtangdan(int arr[], int n){
	int brr[100];
	int pos = 0;
	
	for(int i=0; i<n; i++){
		if(kiemtrasochinhphuong(arr[i])){
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
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int kq = daychinhphuongtangdan(arr, n);
	if(kq != 1){
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	
}
