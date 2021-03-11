#include <iostream>

using namespace std;

void reverseArray(int arr[], int n){
	for(int i= n-1; i>= 0; i--){
		cout << arr[i] << " ";
	}
}
int main(){
	freopen("data.txt", "r", stdin);
	int arr[100];
	int n;
	cin >> n;
	for(int i=0; i<n ;i++){
		cin >> arr[i];
	}
	reverseArray(arr, n);
}
