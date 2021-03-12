#include <iostream>

using namespace std;

int RemoveDuplicateArray(int arr[], int n, int arrNew[]){
	int nNew = 0;
	int check = 0;
	for(int i=0; i<n; i++){
		check = 0;
		for(int j=0; j<nNew; j++){
			if(arr[i] == arrNew[j]){
				check = 1;
				break;
			}
		}
		if(check){ }
		else {                         
			arrNew[nNew] = arr[i];
			nNew++;
		}
	}
	return nNew;
} 

int main(){
	int n;
	int arr[100];
	int arrNew[100];
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	n = RemoveDuplicateArray(arr, n, arrNew);
	cout << "In";
	for(int i=0; i<n; i++){
		cout << arrNew[i] << " ";
	}
	
}
