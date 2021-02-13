#include <iostream>

using namespace std;
int linearSearch(int n, int arr[], int k){
	for(int i=0; i<n ;i++){
		if(arr[i] == k){
			return i;
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
	cout << "\n";
	cin >> k;
	int result = linearSearch(n, arr, k);
	if(result != -1){
		cout << "The element is present at " << (result+1);
	}
	else {
		cout << "The element is not present at " << result;
	}
}
