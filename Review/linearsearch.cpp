#include <iostream>
using namespace std;

// thuat toan tim kiem Linear Search

int IndexOfElement(int arr[], int n, int k){
	for(int i=0; i<n; i++){
		if(arr[i] == k){
			return i;
		}
	}
	return -1;
}

int main(){
	freopen("data.txt", "r", stdin);
	int n;
	int arr[100];
	cin >> n;
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
	int index = IndexOfElement(arr, n, k);
	if(index!=-1){
		cout << "Phan tu nam o vi tri " << index ;
	}
	else {
		cout << "Khong co phan tu " << index;
	}
}

