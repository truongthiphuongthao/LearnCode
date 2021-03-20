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
