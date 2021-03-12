#include <iostream>
using namespace std;

// binarySearch recursion
int IndexOfElement(int arr[], int l, int r, int k){
	if( r>=1 ){
		int mid = (l+r)/2;
		if(arr[mid] == k){
			return mid;
		}
		if(arr[mid] > k){
			return IndexOfElement(arr, l, mid-1, k );
		}
		else {
			return IndexOfElement(arr, mid+1, r, k);
		}
	}
	return -1;
}
int main(){
	freopen("data.txt", "r", stdin);
	int n;
	cin >> n;
	int arr[100];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int k;
	cin >> k;
	
	cout << "Mang ban dau\n";
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << "\nPhan tu muon tim kiem ";
	cout << k << "\n";
	
	int index = IndexOfElement(arr, 0, n-1, k);
	cout << index;
	
	
}
