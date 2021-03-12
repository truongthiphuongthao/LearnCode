#include <iostream>

using namespace std;
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void SortedArray(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] > arr[j]){
				swap(&arr[i], &arr[j]);
			}
		}
	}
}
int main(){
	freopen("data.txt", "r", stdin);
	int n;
	cin >> n;
	int arr[100];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << "Mang ban dau\n";
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	SortedArray(arr, n);

	cout << "Mang da sap xep\n";
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	
}
