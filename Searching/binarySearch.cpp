#include<iostream>

using namespace std;
int binarySearch(int arr[], int l, int r, int k){
	if(r>=1){
		int mid = r + (l-r)/2;
		if(arr[mid] == k){
			return mid;
		}
		if(arr[mid] > k){
			return binarySearch(arr, l, r-1, k);
		}
		else {
			return binarySearch(arr, r+1, r, k);
		}
	}
	return -1;
}
int main(){
	freopen("data.txt", "r", stdin);
	int arr[100];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	int k;
	cin >> k;
	int result = binarySearch(arr, 0, n-1, k);
	if(result != -1){
		cout << "\nThe element is present at: " << result;
	}
	else {
		cout << "\nThe element is not present at: " << result;
	}
}
