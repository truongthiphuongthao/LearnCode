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

void lietkesochinhphuong(int arr[], int n){
	int dem = 0;
	for(int i=0; i<n; i++){
		if(kiemtrasochinhphuong(arr[i])){
			cout << arr[i];
			dem ++;
		}
	}
	if(dem < 1){
		cout << "0";
	}
}
int main(){
	int n;
	cin >> n;
	int arr[100];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	lietkesochinhphuong(arr, n);
}
