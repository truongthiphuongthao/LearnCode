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

int daysotangdan(int pos, int brr[]){
	for(int i=0; i<pos-1; i++){
		if(brr[i] > brr[i+1]){
			return 0;
		}
	}
	return 1;
}

int songuyentotangdan(int n, int arr[]){
	// lay mang luu lai so nguyen to
	int brr[100];
	int pos = 0;
	for(int i=0; i<n; i++){
		if(KTNguyenTo(arr[i])){
			brr[pos] = arr[i];
			pos++;
		}	
	}
	int kiemtra = daysotangdan(pos, brr);
	return kiemtra;
}
int main(){
	int n;
	cin >> n;
	int arr[100];
	for(int i=0; i<n; i++){
		cin >> arr[i];		
	}
	int ketqua = songuyentotangdan(n, arr);
	if(ketqua != 1){
		cout << "NO";
	}
	else {
		cout << "YES";
	}
}
