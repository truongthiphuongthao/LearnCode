#include <iostream>

using namespace std;
int minArray(int arr[], int n){
	int min = arr[0];
	for(int i=0; i<n; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int maxArray(int arr[], int n){
	int max = arr[0];
	for(int i=0; i<n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	freopen("data.txt", "r", stdin);
	int arr[100];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << "Min :" << minArray(arr, n);
	cout << "\nMax: " << maxArray(arr, n);
	
}

