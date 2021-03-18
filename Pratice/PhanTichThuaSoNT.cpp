#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	if(n < 2){
		cout << "nhap n > 1";
	}
	else{
		int i = 2;
		while(n>1){
			if(n%i == 0){
				cout << i;
				if(n !=i ){
					cout << "x";
				}
				n = n/i;
			}
			else {
				i++;
			}
		}
	}
}
