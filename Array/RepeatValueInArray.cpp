#include <bits/stdc++.h>
using namespace std;

void findDuplicateArray(int arr[], int n){
	bool f[n];
	for(int i=0; i<n; i++){
		f[i] = false;
	}
	for(int i=0; i<n ;i++){
		if(f[i]){
			continue;
		}
		int count = 0;
		for(int j=0; j<n; j++){
			if(arr[i] == arr[j]){
				f[j] = true;
				count ++;
			}
		}
		cout << arr[i] << "-" << count << " " ;
	}
}
int main(){
	freopen("data.txt", "r", stdin);
	int arr[100];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	for(int i=0; i<n ;i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
	findDuplicateArray(arr, n);
	
}
