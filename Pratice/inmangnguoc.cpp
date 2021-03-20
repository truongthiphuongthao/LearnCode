#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void inmangnguoc(int arr[], int n){
	for(int i=0; i<n/2; i++){
		swap(&arr[i], &arr[n-i-1]);
	}
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}
int main(){
	int n;
	cin >> n;
	int arr[100];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	inmangnguoc(arr, n);
}
