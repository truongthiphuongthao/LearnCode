#include <iostream>

using namespace std;
void swap (int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int min_idx = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
			swap(&arr[min_idx], &arr[i]);
		}
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
	selectionSort(arr, n);
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}
