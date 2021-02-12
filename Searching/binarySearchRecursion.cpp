#include <iostream>
#include <fstream>

using namespace std;

int binarySearch(int arr[], int l, int r, int k){
	if(r>=1){
		int mid = l + (r-l)/2;
		if(arr[mid] == k){
			return mid;
		}
		if(k < mid){
			return binarySearch(arr, l, mid-1, k);
		}
		return binarySearch(arr, mid+1, r, k);
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
