#include<iostream>

using namespace std;
int binarySearch(int arr[], int l, int r, int k){
	while(l <= r){
		int mid = l + (r-l)/2;
		if(arr[mid] == k){
			return mid;
		}
		if(arr[mid] > k){
			r = mid - 1;
		}
		else l = mid + 1;
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
